package atributos;

import controleDeErros.TentativasIlegais;
import jogo.Jogo;
import elementos.Tiro;
import elementos.Celula;
import elementos.Tabuleiro;
import menus.Legendas;

public class NovoJogo implements PegaTipoDeJogo {

    @Override
    public void setMunicaoInicial() {

    }

    @Override
    public void comecarTurno(Tabuleiro tabuleiro) {

        boolean acabarAvezDoJogador = false;

        while (!acabarAvezDoJogador) {

            try {
                    Legendas.exibeTabuleiroFiltrado(tabuleiro);

                    ArmazenaPosicao posicao = Legendas.menuDetonaBomba();
                    Celula alvo = tabuleiro.getElemento(posicao);

                    tabuleiro.setElementoDistrib(new Tiro(alvo), posicao);
                    
                    acabarAvezDoJogador = Legendas.exibeTabuleiroFiltrado(tabuleiro);
                    ElementosPreJogo.getchar();
                    verificaGameOver(tabuleiro);

            } catch (TentativasIlegais bex) {
                System.err.println(bex.getMessage());
                ElementosPreJogo.pausa(1);
            }
        }
    }

    @Override
    public void verificaGameOver(Tabuleiro tabuleiro){
        
        if((tabuleiro.getQtdEmbarcacoes().getQtdNavioTamanho2() == 0) || 
             (tabuleiro.getQtdEmbarcacoes().getQtdNavioTamanho3() == 0) || 
             (tabuleiro.getQtdEmbarcacoes().getQtdNavioTamanho4() == 0)) {

            Jogo.setGameOver(true);
        }
    }
}
