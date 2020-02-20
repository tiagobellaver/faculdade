#include <bits/stdc++.h>

#define LIMPAR_TELA "cls"

using namespace std;

class Casa
{
public:
    int dominado_por;
    Casa(void)
    {
        dominado_por = 0;
    }
};

class Linha
{
public:
    Casa casa1;
    Casa casa2;
    Casa casa3;
};

Linha linha1;
Linha linha2;
Linha linha3;

void domina_casa(int i, int j, int dominador)
{
    Linha *aux;
    if (j == 1)
    {
        aux = &linha1;
    }
    else if (j == 2)
    {
        aux = &linha2;
    }
    else if (j == 3)
    {
        aux = &linha3;
    }
    if (i == 1)
    {
        aux->casa1.dominado_por = dominador;
    }
    else if (i == 2)
    {
        aux->casa2.dominado_por = dominador;
    }
    else if (i == 3)
    {
        aux->casa3.dominado_por = dominador;
    }
}

int checa_casa(int i, int j)
{
    Linha * aux;
    if (j == 1)
    {
        aux = &linha1;
    }
    else if (j == 2)
    {
        aux = &linha2;
    }
    else if (j == 3)
    {
        aux = &linha3;
    }
    if (i == 1)
    {
        return aux->casa1.dominado_por;
    }
    else if (i == 2)
    {
        return aux->casa2.dominado_por;
    }
    else if (i == 3)
    {
        return aux->casa3.dominado_por;
    }
}

void desenhar_jogo()
{
    int j, i;
    int aux;
    for (j = 1; j <= 3; j++)
    {
        cout << "|";
        for (i = 1; i <= 3; i++)
        {
            aux = checa_casa(i,j);
            if (aux == 0)
            {
                cout << "   ";
            }
            else if (aux == 1)
            {
                cout << " X ";
            }
            else if (aux == 2)
            {
                cout << " O ";
            }
            cout << "|";
        }
        cout << "\n+---+---+---+\n";
    }
}

int checa_win()
{
    int aux1, aux2, aux3;
    int i;
    for (i = 1; i <= 3; i++)
    {
        aux1 = checa_casa(1,i);
        aux2 = checa_casa(2,i);
        aux3 = checa_casa(3,i);
        if ((aux1 == aux2) && (aux2 == aux3) && (aux3 != 0))
        {
            return aux1;
        }
        aux1 = checa_casa(i,1);
        aux2 = checa_casa(i,2);
        aux3 = checa_casa(i,3);
        if ((aux1 == aux2) && (aux2 == aux3) && (aux3 != 0))
        {
            return aux1;
        }
    }

    aux1 = checa_casa(1,1);
    aux2 = checa_casa(2,2);
    aux3 = checa_casa(3,3);
    if ((aux1 == aux2) && (aux2 == aux3) && (aux3 != 0))
    {
        return aux1;
    }
    aux1 = checa_casa(1,3);
    aux3 = checa_casa(3,1);
    if ((aux1 == aux2) && (aux2 == aux3) && (aux3 != 0))
    {
        return aux1;
    }
    return 0;
}

void loop_jogo(int jogador)
{
    int aux;
    int tmp_coluna, tmp_linha;
    int confirma;
    aux = 5;
    while (aux != 0)
    {
        system(LIMPAR_TELA);
        desenhar_jogo();
        confirma = 5;
        while (confirma != 1)
        {
            tmp_linha = 5;
            while ((tmp_linha < 1) || (tmp_linha > 3))
            {
                cout << endl;
                cout << "Jogador " << jogador << ". Em que linha deseja jogar? ";
                if (cin >> tmp_linha == 0)
                {
                    cout << endl;
                    cout << "Nao entendi, digite novamente!" << endl;
                    getchar();
                }
            }

            tmp_coluna = 5;
            while ((tmp_coluna < 1) || (tmp_coluna > 3))
            {
                cout << endl;
                cout << "Jogador " << jogador << ". Em que coluna deseja jogar? ";
                if (cin >> tmp_coluna == 0)
                {
                    cout << endl;
                    cout << "Nao entendi, digite novamente!" << endl;
                    getchar();
                }
            }

            confirma = 5;
            while ((confirma < 1) || (confirma > 2))
            {
                cout << endl;
                cout << "Jogador " << jogador << ". Confirma? (1 Sim / 2 Nao) ";
                if (cin >> confirma == 0)
                {
                    cout << endl;
                    cout << "Nao entendi, digite novamente!" << endl;
                    getchar();
                }
            }
        }

        aux = checa_casa(tmp_coluna,tmp_linha);
        if (aux != 0)
        {
            cout << endl;
            cout << "Casa em uso. Escolha outra." << endl;;
            getchar();
            getchar();
        }
    }

    domina_casa(tmp_coluna,tmp_linha,jogador);
}

int joga_computador()
{
    int aux, aux1, aux2, aux3;
    int i, j;
    aux1 = checa_casa(2,2);
    if (aux1 == 0)
    {
        domina_casa(2,2,2);
        return 0;
    }

    for (j = 2; j >= 1; j--)
    {
        for (i = 1; i <= 3; i++)
        {
            aux1 = checa_casa(1,i);
            aux2 = checa_casa(2,i);
            aux3 = checa_casa(3,i);
            if ((aux1 == aux3) && (aux2 == 0) && (aux1 == j))
            {
                aux = checa_casa(2,i);
                if (aux == 0)
                {
                    domina_casa(2,i,2);
                    return 0;
                }
            }
            else if ((aux1 == aux2) && (aux3 == 0) && (aux1 == j))
            {
                aux = checa_casa(3,i);
                if (aux == 0)
                {
                    domina_casa(3,i,2);
                    return 0;
                }
            }
            else if ((aux2 == aux3) && (aux1 == 0) && (aux2 == j))
            {
                aux = checa_casa(1,i);
                if (aux == 0)
                {
                    domina_casa(1,i,2);
                    return 0;
                }
            }
            aux1 = checa_casa(i,1);
            aux2 = checa_casa(i,2);
            aux3 = checa_casa(i,3);
            if ((aux1 == aux3) && (aux2 == 0) && (aux1 == j))
            {
                aux = checa_casa(i,2);
                if (aux == 0)
                {
                    domina_casa(i,2,2);
                    return 0;
                }
            }
            else if ((aux1 == aux2) && (aux3 == 0) && (aux1 == j))
            {
                aux = checa_casa(i,3);
                if (aux == 0)
                {
                    domina_casa(i,3,2);
                    return 0;
                }
            }
            else if ((aux2 == aux3) && (aux1 == 0) && (aux2 == j))
            {
                aux = checa_casa(i,1);
                if (aux == 0)
                {
                    domina_casa(i,1,2);
                    return 0;
                }
            }
        }
        aux1 = checa_casa(1,1);
        aux2 = checa_casa(2,2);
        aux3 = checa_casa(3,3);
        if ((aux1 == aux3) && (aux2 == 0) && (aux1 == j))
        {
            aux = checa_casa(2,2);
            if (aux == 0)
            {
                domina_casa(2,2,2);
                return 0;
            }
        }
        else if ((aux1 == aux2) && (aux3 == 0) && (aux1 == j))
        {
            aux = checa_casa(3,3);
            if (aux == 0)
            {
                domina_casa(3,3,2);
                return 0;
            }
        }
        else if ((aux2 == aux3) && (aux1 == 0) && (aux2 == j))
        {
            aux = checa_casa(1,1);
            if (aux == 0)
            {
                domina_casa(1,1,2);
                return 0;
            }
        }
        aux1 = checa_casa(3,1);
        aux3 = checa_casa(1,3);
        if ((aux1 == aux3) && (aux2 == 0) && (aux1 == j))
        {
            aux = checa_casa(2,2);
            if (aux == 0)
            {
                domina_casa(2,2,2);
                return 0;
            }
        }
        else if ((aux1 == aux2) && (aux3 == 0) && (aux1 == j))
        {
            aux = checa_casa(1,3);
            if (aux == 0)
            {
                domina_casa(1,3,2);
                return 0;
            }
        }
        else if ((aux2 == aux3) && (aux1 == 0) && (aux2 == j))
        {
            aux = checa_casa(3,1);
            if (aux == 0)
            {
                domina_casa(3,1,2);
                return 0;
            }
        }
    }
    aux1 = checa_casa(1,1);
    aux2 = checa_casa(3,3);
    if ((aux1 == 1) && (aux2 == 1))
    {
        aux = checa_casa(2,1);
        if (aux == 0)
        {
            domina_casa(2,1,2);
            return 0;
        }
    }
    aux1 = checa_casa(3,1);
    aux2 = checa_casa(1,3);
    if ((aux1 == 1) && (aux2 == 1))
    {
        aux = checa_casa(2,1);
        if (aux == 0)
        {
            domina_casa(2,1,2);
            return 0;
        }
    }
    aux1 = checa_casa(2,1);
    aux2 = checa_casa(3,2);
    aux3 = checa_casa(1,2);
    if ((aux1 == 1) && (aux2 == 1))
    {
        aux = checa_casa(3,1);
        if (aux == 0)
        {
            domina_casa(3,1,2);
            return 0;
        }
    }
    if ((aux1 == 1) && (aux3 == 1))
    {
        aux = checa_casa(1,1);
        if (aux == 0)
        {
            domina_casa(1,1,2);
            return 0;
        }
    }
    if ((aux3 == 1) && (aux2 == 1))
    {
        aux = checa_casa(1,1);
        if (aux == 0)
        {
            domina_casa(1,1,2);
            return 0;
        }
    }
    aux1 = checa_casa(2,3);
    if ((aux1 == 1) && (aux2 == 1))
    {
        aux = checa_casa(3,3);
        if (aux == 0)
        {
            domina_casa(3,3,2);
            return 0;
        }
    }
    if ((aux1 == 1) && (aux3 == 1))
    {
        aux = checa_casa(1,3);
        if (aux == 0)
        {
            domina_casa(1,3,2);
            return 0;
        }
    }
    aux1 = checa_casa(1,1);
    aux2 = checa_casa(2,2);
    aux3 = checa_casa(3,3);
    if ((aux1 == 2) && (aux2 == 1) && (aux3 == 1))
    {
        aux = checa_casa(3,1);
        if (aux == 0)
        {
            domina_casa(3,1,2);
            return 0;
        }
    }
    for (i = 1; i <= 3; i++)
    {
        aux1 = checa_casa(1,i);
        aux2 = checa_casa(2,i);
        aux3 = checa_casa(3,i);
        if ((aux1 == 2) && (aux2 == 0) && (aux3 == 0))
        {
            aux = checa_casa(2,i);
            if (aux == 0)
            {
                domina_casa(2,i,2);
                return 0;
            }
        }
        if ((aux2 == 2) && (aux1 == 0) && (aux3 == 0))
        {
            aux = checa_casa(1,i);
            if (aux == 0)
            {
                domina_casa(1,i,2);
                return 0;
            }
        }
        if ((aux3 == 2) && (aux1 == 0) && (aux2 == 0))
        {
            aux = checa_casa(1,i);
            if (aux == 0)
            {
                domina_casa(1,i,2);
                return 0;
            }
        }
        aux1 = checa_casa(i,1);
        aux2 = checa_casa(i,2);
        aux3 = checa_casa(i,3);
        if ((aux1 == 2) && (aux2 == 0) && (aux3 == 0))
        {
            aux = checa_casa(i,2);
            if (aux == 0)
            {
                domina_casa(i,2,2);
                return 0;
            }
        }
        if ((aux2 == 2) && (aux1 == 0) && (aux3 == 0))
        {
            aux = checa_casa(i,1);
            if (aux == 0)
            {
                domina_casa(i,1,2);
                return 0;
            }
        }
        if ((aux3 == 2) && (aux1 == 0) && (aux2 == 0))
        {
            aux = checa_casa(i,1);
            if (aux == 0)
            {
                domina_casa(i,1,2);
                return 0;
            }
        }
    }
    aux1 = checa_casa(1,1);
    aux2 = checa_casa(2,2);
    aux3 = checa_casa(3,3);
    if ((aux2 == 2) && (aux1 == 0) && (aux3 == 0))
    {
        aux = checa_casa(1,1);
        if (aux == 0)
        {
            domina_casa(1,1,2);
            return 0;
        }
    }
    aux1 = checa_casa(3,1);
    aux3 = checa_casa(1,3);
    if ((aux2 == 2) && (aux1 == 0) && (aux3 == 0))
    {
        aux = checa_casa(1,3);
        if (aux == 0)
        {
            domina_casa(1,3,2);
            return 0;
        }
    }
    aux1 = checa_casa(1,1);
    if (aux1 == 2)
    {
        aux2 = checa_casa(2,2);
        aux3 = checa_casa(3,3);
        if ((aux3 == 0) && (aux2 == 0))
        {
            aux1 = checa_casa(3,2);
            aux2 = checa_casa(1,2);
            if ((aux1 != 1) && (aux2 != 1))
            {
                aux1 = checa_casa(2,1);
                aux2 = checa_casa(2,3);
                if ((aux1 != 1) && (aux2 != 1))
                {
                    aux = checa_casa(3,3);
                    if (aux == 0)
                    {
                        domina_casa(3,3,2);
                        return 0;
                    }
                }
            }
        }
    }
    for (i = 1; i <= 3; i++)
    {
        aux1 = checa_casa(1,i);
        aux2 = checa_casa(2,i);
        aux3 = checa_casa(3,i);
        if (aux1 == 0)
        {
            domina_casa(1,i,2);
            return 0;
        }
        else if (aux2 == 0)
        {
            domina_casa(2,i,2);
            return 0;
        }
        else if (aux3 == 0)
        {
            domina_casa(3,i,2);
            return 0;
        }
        aux1 = checa_casa(i,1);
        aux2 = checa_casa(i,2);
        aux3 = checa_casa(i,3);
        if (aux1 == 0)
        {
            domina_casa(i,1,2);
            return 0;
        }
        else if (aux2 == 0)
        {
            domina_casa(i,2,2);
            return 0;
        }
        else if (aux3 == 0)
        {
            domina_casa(i,3,2);
            return 0;
        }
    }
}

int main()
{
    int i;
    int tipo_de_jogo = 5;
    int jogador = 0;
    int aux;

    while ((tipo_de_jogo < 0) || (tipo_de_jogo > 2))
    {
        system(LIMPAR_TELA);
        cout << "--------------------------" << endl;
        cout << "Bem Vindo ao Mangojata Toe" << endl;
        cout << "--------------------------" << endl;
        cout << endl;
        cout << "Selecione uma opcao abaixo:" << endl;
        cout << "[1] Jogador contra Jogador" << endl;
        cout << "[2] Jogador contra Computador" << endl;
        cout << "[0] Sair" << endl;
        cout << endl;
        cout << "Opcao: ";
        if (cin >> tipo_de_jogo == 0)
        {
            cout << endl;
            cout << "Nao entendi, digite novamente!" << endl;
            getchar();
        }
    }
    if (tipo_de_jogo == 0)
    {
        return 0;
    }
    else if (tipo_de_jogo == 1)
    {
        for (i = 0; i < 9; i++)
        {
            jogador++;
            if (jogador > 2)
                jogador = 1;
            loop_jogo(jogador);
            aux = checa_win();
            if (aux != 0)
            {
                system(LIMPAR_TELA);
                desenhar_jogo();
                cout << endl;
                cout << "Vencedor: Jogador " << aux << "!" << endl;
                getchar();
                getchar();
                return 0;
            }
        }
    }
    else if (tipo_de_jogo == 2)
    {
        for (i = 0; i < 9; i++)
        {
            jogador++;
            if (jogador > 2)
            {
                jogador = 1;
            }
            if (jogador == 1)
            {
                loop_jogo(jogador);
            }
            else if (jogador == 2)
            {
                joga_computador();
            }
            aux = checa_win();
            if (aux != 0)
            {
                system(LIMPAR_TELA);
                desenhar_jogo();
                if (aux == 1)
                {
                    cout << endl;
                    cout << "Vencedor: Jogador!" << endl;
                }
                else if (aux == 2)
                {
                    cout << endl;
                    cout << "Vencedor: Computador!" << endl;
                }
                getchar();
                getchar();
                return 0;
            }
        }
    }
    if (tipo_de_jogo != 0)
    {
        system(LIMPAR_TELA);
        desenhar_jogo();
        cout << endl;
        cout << "Empate!" << endl;
        getchar();
        getchar();
        return 0;
    }
}
