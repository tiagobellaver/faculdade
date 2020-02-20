package menus;

import controleDeErros.ErroDuranteJogo;
import controleDeErros.GeradorStatus;
import atributos.ArmazenaPosicao;
import controleDeErros.TentativasIlegais;
import atributos.ElementosPreJogo;
import elementos.Tabuleiro;
import atributos.PegaTipoDistribuicao;

public class Legendas {

    private static boolean aconteceuAlgo;
    private static boolean acabouAvez;

    public static void setAconteceuAlgo(boolean seAconteceuAlgo) {
        if (seAconteceuAlgo)
            aconteceuAlgo = seAconteceuAlgo;
    }

    public static void setAcabouAvez(boolean seAcabouAvez) {
        if(seAcabouAvez)
            acabouAvez = seAcabouAvez;
    }

    public static void exibeTabuleiro(Tabuleiro tabuleiro) {
        System.out.print("\t");
        for (int x = 0; x < tabuleiro.getTamanho(); x++) {
            System.out.print("[" + x + "]\t");
        }
        System.out.println("\n");
        for (int i = 0; i < tabuleiro.getTamanho(); i++) {
            System.out.print("[" + i + "]\t");
            for (int j = 0; j < tabuleiro.getTamanho(); j++) {
                System.out.print(tabuleiro.getTabuleiro()[i][j].whoami().substring(tabuleiro.getTabuleiro()[i][j].whoami().length() - 1) + "\t");
            }
            System.out.println("\n");
        }
    }

    public static boolean exibeTabuleiroFiltrado(Tabuleiro tabuleiro) throws ErroDuranteJogo {

        String descricaoAcontecimento = null;
        aconteceuAlgo = false;
        acabouAvez = false;
        
        ArmazenaPosicao posAtual;

        System.out.print("\t");
        for (int x = 0; x < tabuleiro.getTamanho(); x++) {
            System.out.print("[" + x + "]\t");
        }
        System.out.println("\n");

        for (int i = 0; i < tabuleiro.getTamanho(); i++) {
            System.out.print("[" + i + "]\t");
            for (int j = 0; j < tabuleiro.getTamanho(); j++) {

                posAtual = new ArmazenaPosicao(i, j);

                if ((tabuleiro.getTabuleiro()[i][j].whoami().substring(tabuleiro.getTabuleiro()[i][j].whoami().length() - 1).contains("*"))
                        && (!tabuleiro.getTabuleiro()[i][j].whoami().substring(tabuleiro.getTabuleiro()[i][j].whoami().length() - 2).contains("~"))) {

             
                    System.out.print(tabuleiro.getTabuleiro()[i][j].whoami().substring(tabuleiro.getTabuleiro()[i][j].whoami().length() - 1) + "\t"); 

                    if (!GeradorStatus.consultaPosicaoLog(posAtual))
                    {
                        setAconteceuAlgo(true);
                        descricaoAcontecimento = "A bomba explodiu um " + aliasNomeEmbarcacao(tabuleiro.getTabuleiro()[i][j].whoami().charAt(tabuleiro.getTabuleiro()[i][j].whoami().length() - 2)) 
                                + " na posicao ["+ posAtual.getX() +"] ["+ posAtual.getY() +"]";
                        GeradorStatus.adicionaLog(posAtual, descricaoAcontecimento);
                        setAcabouAvez(false);
                    }
                    else
                    {
                        aconteceuAlgo = false;
                    }
                } else if ((tabuleiro.getTabuleiro()[i][j].whoami().substring(tabuleiro.getTabuleiro()[i][j].whoami().length() - 1).contains("*"))
                        && (tabuleiro.getTabuleiro()[i][j].whoami().substring(tabuleiro.getTabuleiro()[i][j].whoami().length() - 2).contains("~"))) {

                    System.out.print(tabuleiro.getTabuleiro()[i][j].whoami().substring(tabuleiro.getTabuleiro()[i][j].whoami().length() - 1) + "\t");

                    if (!GeradorStatus.consultaPosicaoLog(posAtual))
                    {
                        setAconteceuAlgo(true);
                        descricaoAcontecimento = "A bomba errou o alvo! Tente novamente na próxima vez.";
                        GeradorStatus.adicionaLog(posAtual, descricaoAcontecimento);
                        setAcabouAvez(true);
                    }
                    else
                    {
                        aconteceuAlgo = false;
                    }
                } else if ((tabuleiro.getTabuleiro()[i][j].whoami().substring(tabuleiro.getTabuleiro()[i][j].whoami().length() - 1).contains("!"))
                        && (!tabuleiro.getTabuleiro()[i][j].whoami().substring(tabuleiro.getTabuleiro()[i][j].whoami().length() - 2).contains("~"))) {

                    
                    System.out.print(tabuleiro.getTabuleiro()[i][j].whoami().substring(tabuleiro.getTabuleiro()[i][j].whoami().length() - 1) + "\t"); 

                } else if ((tabuleiro.getTabuleiro()[i][j].whoami().substring(tabuleiro.getTabuleiro()[i][j].whoami().length() - 1).contains("!"))
                        && (tabuleiro.getTabuleiro()[i][j].whoami().substring(tabuleiro.getTabuleiro()[i][j].whoami().length() - 2).contains("~"))) {

                    
                    System.out.print(tabuleiro.getTabuleiro()[i][j].whoami().substring(tabuleiro.getTabuleiro()[i][j].whoami().length() - 1) + "\t"); 

                } else if ((!tabuleiro.getTabuleiro()[i][j].whoami().substring(tabuleiro.getTabuleiro()[i][j].whoami().length() - 1).contains("~"))
                        && (tabuleiro.getTabuleiro()[i][j].whoami().substring(tabuleiro.getTabuleiro()[i][j].whoami().length() - 2).contains("~"))) {

                    
                    System.out.print("[ ]\t");

                    setAconteceuAlgo(false);
                    setAcabouAvez(false);

                } else 
                {
                    System.out.print("[ ]\t"); 

                    setAconteceuAlgo(false);
                    setAcabouAvez(false);

                }
                
            }
            System.out.println("\n");
        }
        if (aconteceuAlgo) {
            System.out.println("ULTIMO STATUS: " + descricaoAcontecimento);
        }
        return acabouAvez;
    }

    public static void legendaTabuleiro() {
        System.out.println("LEGENDA:");
        System.out.println("~ --> Água\n"
                + "2 --> Navio de 2 posições\n"
                + "3 --> Navio de 3 posições\n"
                + "4 --> Navio de 4 posições\n");
    }

    public static void menuFazerDistribuicaoTabuleiro(Tabuleiro tabuleiro, PegaTipoDistribuicao distribuidor) {

        ElementosPreJogo.limparTela();

        Menu.menuHeaderBattleship();
        System.out.println("\nTABULEIRO DO JOGADOR " + tabuleiro.getNumeroJogador() + " - DISTRIBUIÇÃO DE EMBARCAÇÕES \n");

        exibeTabuleiro(tabuleiro);
        legendaTabuleiro();

        ElementosPreJogo.getchar();

        
        distribuidor.distribuirEmbarcacoes(tabuleiro);

        ElementosPreJogo.limparTela();

        Menu.menuHeaderBattleship();
        System.out.println("\nTABULEIRO DO JOGADOR " + tabuleiro.getNumeroJogador() + " A MOSTRA: \n");

        exibeTabuleiro(tabuleiro);
        legendaTabuleiro();

        ElementosPreJogo.getchar();
    }

    private static String aliasNomeEmbarcacao(char simbolo) {
        String alias = null;
        switch (simbolo) {
            case '2':
                alias = "Navio de 2 partes";
                break;
            case '3':
                alias = "Navio de 3 partes";
                break;
            case '4':
                alias = "Navio de 4 partes";
                break;
            }
        return alias;
    }

    public static ArmazenaPosicao menuDetonaBomba() {
        boolean finished = false;
        ArmazenaPosicao posicaoEscolhida = null;

        while (!finished) {

            try {
                System.out.println("\nDigite a linha do alvo: ");
                int x = ElementosPreJogo.lerOpcao();
                System.out.println("Digite a coluna do alvo: ");
                int y = ElementosPreJogo.lerOpcao();
                posicaoEscolhida = new ArmazenaPosicao(x, y);
                finished = true;
            } catch (TentativasIlegais bgex) {
                System.err.println(bgex.getMessage());
                ElementosPreJogo.pausa(1);
            }
        }
        return posicaoEscolhida;
    }

    public static void menuMostraJogador(int x) {
        ElementosPreJogo.limparTela();
        Menu.menuHeaderBattleship();
        System.out.println("\n É A VEZ DO JOGADOR " + x);
        ElementosPreJogo.getchar();
    }
}
