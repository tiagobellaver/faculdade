package atributos;

import navios.Navio3;
import navios.Navio2;
import navios.Navio1;
import controleDeErros.ErroDuranteJogo;
import elementos.Tabuleiro;
import java.util.Random;

public class DistribuicaoAutomatica implements PegaTipoDistribuicao {

    private final Random gerador = new Random();

    @Override
    public void distribuirEmbarcacoes(Tabuleiro tabuleiro) {
        distribuirNavioTamanho2(tabuleiro);
        distribuirNavioTamanho3(tabuleiro);
        distribuirNavioTamanho4(tabuleiro);
    }

    private void distribuirNavioTamanho2(Tabuleiro tabuleiro) {

        boolean finished = false;
        while (!finished) {
 
            processaDistribuicaoNavioTamanho2(tabuleiro);
            finished = true;
        }
    }

    private void processaDistribuicaoNavioTamanho2(Tabuleiro tabuleiro) {

        boolean finished;

        for (int i = 0; i < tabuleiro.getQtdEmbarcacoes().getQtdNavioTamanho2(); i++) {

            finished = false;
            while (!finished) {
                try {
                    String orientacao = ElementosPreJogo.processarMenuDistribuicaoOrientacao(gerador.nextInt(2) + 1);
                    ArmazenaPosicao coordenada = new ArmazenaPosicao(gerador.nextInt(tabuleiro.getTamanho()), gerador.nextInt(tabuleiro.getTamanho()));

                    if ("horizontal".equals(orientacao)) {

                        ArmazenaPosicao coordenada2 = new ArmazenaPosicao(coordenada.getX(), coordenada.getY() + 1);

                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada));
                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada2));

                        tabuleiro.setElementoDistrib(new Navio1(tabuleiro.getElemento(coordenada)), coordenada);
                        tabuleiro.setElementoDistrib(tabuleiro.getElemento(coordenada), coordenada2);

                        finished = true;
                    }
                    if ("vertical".equals(orientacao)) {

                        ArmazenaPosicao coordenada2 = new ArmazenaPosicao(coordenada.getX() + 1, coordenada.getY());

                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada));
                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada2));

                        tabuleiro.setElementoDistrib(new Navio1(tabuleiro.getElemento(coordenada)), coordenada);
                        tabuleiro.setElementoDistrib(tabuleiro.getElemento(coordenada), coordenada2);

                        finished = true;
                    }

                } catch (ErroDuranteJogo bgex) {
                    
                }
            }
        }
    }

    private void distribuirNavioTamanho3(Tabuleiro tabuleiro) {

        boolean finished = false;
        while (!finished) {
          
            processaDistribuicaoNavioTamanho3(tabuleiro);
            finished = true;
        }
    }

    private void processaDistribuicaoNavioTamanho3(Tabuleiro tabuleiro) {

        boolean finished = false;

        for (int i = 0; i < tabuleiro.getQtdEmbarcacoes().getQtdNavioTamanho3(); i++) {

            if (i != tabuleiro.getQtdEmbarcacoes().getQtdNavioTamanho2()) {
                finished = false;
            }
            while (!finished) {
                try {
                    String orientacao = ElementosPreJogo.processarMenuDistribuicaoOrientacao(gerador.nextInt(2) + 1);
                    ArmazenaPosicao coordenada = new ArmazenaPosicao(gerador.nextInt(tabuleiro.getTamanho()), gerador.nextInt(tabuleiro.getTamanho()));

                    if ("horizontal".equals(orientacao)) {

                        ArmazenaPosicao coordenada2 = new ArmazenaPosicao(coordenada.getX(), coordenada.getY() + 1);
                        ArmazenaPosicao coordenada3 = new ArmazenaPosicao(coordenada.getX(), coordenada.getY() + 2);

                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada));
                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada2));
                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada3));

                        tabuleiro.setElementoDistrib(new Navio2(tabuleiro.getElemento(coordenada)), coordenada);
                        tabuleiro.setElementoDistrib(tabuleiro.getElemento(coordenada), coordenada2);
                        tabuleiro.setElementoDistrib(tabuleiro.getElemento(coordenada), coordenada3);
                        finished = true;

                    }
                    if ("vertical".equals(orientacao)) {

                        ArmazenaPosicao coordenada2 = new ArmazenaPosicao(coordenada.getX() + 1, coordenada.getY());
                        ArmazenaPosicao coordenada3 = new ArmazenaPosicao(coordenada.getX() + 2, coordenada.getY());

                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada));
                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada2));
                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada3));

                        tabuleiro.setElementoDistrib(new Navio2(tabuleiro.getElemento(coordenada)), coordenada);
                        tabuleiro.setElementoDistrib(tabuleiro.getElemento(coordenada), coordenada2);
                        tabuleiro.setElementoDistrib(tabuleiro.getElemento(coordenada), coordenada3);

                        finished = true;
                    }

                } catch (ErroDuranteJogo bgex) {
                    
                }
            }
        }
    }

    private void distribuirNavioTamanho4(Tabuleiro tabuleiro) {

        boolean finished = false;
        while (!finished) {
            
            processaDistribuicaoNavioTamanho4(tabuleiro);
            finished = true;
        }
    }

    private void processaDistribuicaoNavioTamanho4(Tabuleiro tabuleiro) {

        boolean finished = false;

        for (int i = 0; i < tabuleiro.getQtdEmbarcacoes().getQtdNavioTamanho4(); i++) {
            while (!finished) {
                try {
                    String orientacao = ElementosPreJogo.processarMenuDistribuicaoOrientacao(gerador.nextInt(2) + 1);
                    ArmazenaPosicao coordenada = new ArmazenaPosicao(gerador.nextInt(tabuleiro.getTamanho()), gerador.nextInt(tabuleiro.getTamanho()));

                    if ("horizontal".equals(orientacao)) {

                        ArmazenaPosicao coordenada2 = new ArmazenaPosicao(coordenada.getX(), coordenada.getY() + 1);
                        ArmazenaPosicao coordenada3 = new ArmazenaPosicao(coordenada.getX(), coordenada.getY() + 2);
                        ArmazenaPosicao coordenada4 = new ArmazenaPosicao(coordenada.getX(), coordenada.getY() + 3);

                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada));
                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada2));
                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada3));
                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada4));

                        tabuleiro.setElementoDistrib(new Navio3(tabuleiro.getElemento(coordenada)), coordenada);
                        tabuleiro.setElementoDistrib(tabuleiro.getElemento(coordenada), coordenada2);
                        tabuleiro.setElementoDistrib(tabuleiro.getElemento(coordenada), coordenada3);
                        tabuleiro.setElementoDistrib(tabuleiro.getElemento(coordenada), coordenada4);

                        finished = true;

                    }
                    if ("vertical".equals(orientacao)) {

                        ArmazenaPosicao coordenada2 = new ArmazenaPosicao(coordenada.getX() + 1, coordenada.getY());
                        ArmazenaPosicao coordenada3 = new ArmazenaPosicao(coordenada.getX() + 2, coordenada.getY());
                        ArmazenaPosicao coordenada4 = new ArmazenaPosicao(coordenada.getX() + 3, coordenada.getY());

                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada));
                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada2));
                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada3));
                        ElementosPreJogo.verificaSobreposicao(tabuleiro.getElemento(coordenada4));

                        tabuleiro.setElementoDistrib(new Navio3(tabuleiro.getElemento(coordenada)), coordenada);
                        tabuleiro.setElementoDistrib(tabuleiro.getElemento(coordenada), coordenada2);
                        tabuleiro.setElementoDistrib(tabuleiro.getElemento(coordenada), coordenada3);
                        tabuleiro.setElementoDistrib(tabuleiro.getElemento(coordenada), coordenada4);

                        finished = true;
                    }

                } catch (ErroDuranteJogo bgex) {
                    
                }
            }
        }
    }
}
