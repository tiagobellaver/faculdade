import requests

def get_html(url):
    response = requests.get(url)
    return response.text


def buscar_link(html, posicao_inicial=0):
    link_buscar = 'href="http'
    index = html.find(link_buscar, posicao_inicial)
    if index < 0:
        return None, -1
    
    index += 6
    last_index = html.find('"', index)
    return html[index : last_index], last_index

def buscar_todos_links(url):
    html = get_html(url)
    posicao = 0
    links = []
    while posicao >= 0:
        link, posicao = buscar_link(html, posicao)
        if posicao >= 0:
            links.append(link)
    return links

def juntar(origem, destino):
    for elemento in origem:
        if elemento not in destino:
            destino.append(elemento)

def crawler(url_inicial, max_paginas = 10):
    fila = [url_inicial]
    navegados = []
    index = 0
    
    while len(fila) > 0 and len(navegados) < max_paginas:
        url = fila.pop()
        index += 1
        print('Buscando item %i: %s' % (index, url))
        
        navegados.append(url)
        links_encontrados = buscar_todos_links(url)
        juntar(links_encontrados, fila)
        print('Encontrado %i elementos' % len(links_encontrados))
    print('')
    print('Elementos na fila:', len(fila))
    print('Elementos navegados:', len(navegados))

crawler('http://www.uricer.edu.br/site/inicio')


# # Lista 2
# 
# 1) Defina uma profundidade máxima para buscar os links.
# 
# Exemplo, a partir da página 'https://wikipedia.org/wiki/',
# 
# foram encontrados 5 links (todos estão no nível 1).
# 
# A partir do primeiro link encontrados, encontrou mais 3 
# 
# (estes estão no nível 2). E assim por diante...
# 
# 
# 
# 
# 2) Defina uma profundidade máxima e número máximo de páginas
# 
# para procurar (o critério que satisfazer primeiro, encerra 
# 
# a busca)

# Dica = Utilizem dicionários

