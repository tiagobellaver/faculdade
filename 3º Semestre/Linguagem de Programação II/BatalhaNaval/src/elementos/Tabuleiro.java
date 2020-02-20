package elementos;

import atributos.ArmazenaPosicao;
import atributos.QtdEmbarcacoes;

public class Tabuleiro {
    
    public Celula[][] tabuleiro;
    private final int numeroJogador;
    private final int tamanho;
    private final QtdEmbarcacoes qtdEmbarcacoes;
    
    public Tabuleiro(int player, int tamanho){
        this.tabuleiro = new Celula[tamanho][tamanho];
        this.numeroJogador = player;
        this.tamanho = tamanho;
        this.qtdEmbarcacoes = new QtdEmbarcacoes();
        inicializarCelulas();
    }
    
    private void inicializarCelulas() {
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++) {
                Celula celula = new Terreno();
                celula = new Agua(celula);
                tabuleiro[i][j] = celula;
            }
        }
    }

    public Celula[][] getTabuleiro() {
        return tabuleiro;
    }
    
    public Celula getElemento(ArmazenaPosicao coord){
        return tabuleiro[coord.getX()][coord.getY()];
    }

    public void setElementoDistrib(Celula conteudo, ArmazenaPosicao coord) {
       
        tabuleiro[coord.getX()][coord.getY()] = conteudo;   
    }

    private void registrarExplosao(Celula celula) {
        switch (celula.whoami().substring(celula.whoami().length() - 1)) {
            case "2":
                qtdEmbarcacoes.decrementarNavioTamanho2();
                break;
            case "3":
                qtdEmbarcacoes.decrementarNavioTamanho3();
                break;
            case "4":
                qtdEmbarcacoes.decrementarNavioTamanho4();
                break;
        }
    }

    public int getNumeroJogador() {
        return numeroJogador;
    }

    public int getTamanho() {
        return tamanho;
    }

    public QtdEmbarcacoes getQtdEmbarcacoes() {
        return qtdEmbarcacoes;
    }
}
