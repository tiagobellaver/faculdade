package jogo;

import elementos.Tabuleiro;
import atributos.PegaTipoDeJogo;
import atributos.PegaTipoDistribuicao;
import menus.Legendas;

public class Jogo {

    private static PegaTipoDeJogo modoDeJogo;
    private static PegaTipoDistribuicao modoDeDistribuicao;
    private Tabuleiro tabuleiroP1;  
    private Tabuleiro tabuleiroP2;  
    private static boolean gameOver = false;

    public static PegaTipoDeJogo getModoDeJogo() {
        return modoDeJogo;
    }

    public static PegaTipoDistribuicao getModoDeDistribuicao() {
        return modoDeDistribuicao;
    }

    public static boolean isGameOver() {
        return gameOver;
    }

    public static void setGameOver(boolean aGameOver) {
        gameOver = aGameOver;
    }

        public Jogo(PegaTipoDeJogo modoDeJogo, PegaTipoDistribuicao modoDeDistribuicao){

        Jogo.modoDeJogo = modoDeJogo;
        Jogo.modoDeDistribuicao = modoDeDistribuicao;
    }

    public void comecarJogo(){

        inicializarTabuleiros();
        Legendas.menuFazerDistribuicaoTabuleiro(tabuleiroP1, modoDeDistribuicao);
        Legendas.menuFazerDistribuicaoTabuleiro(tabuleiroP2, modoDeDistribuicao);
        while (!gameOver) {
            
            Legendas.menuMostraJogador(tabuleiroP1.getNumeroJogador());
            modoDeJogo.comecarTurno(tabuleiroP2);
            if (!gameOver) {
                
                Legendas.menuMostraJogador(tabuleiroP2.getNumeroJogador());
                modoDeJogo.comecarTurno(tabuleiroP1);
            }
        }
    }

    private void inicializarTabuleiros() {
        tabuleiroP1 = new Tabuleiro(1,7);
        tabuleiroP2 = new Tabuleiro(2,7);
    }
}
