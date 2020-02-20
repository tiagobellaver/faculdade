package menus;

import atributos.ElementosPreJogo;
import controleDeErros.ErroMenu;
import atributos.DistribuicaoAutomatica;
import atributos.PegaTipoDeJogo;
import atributos.PegaTipoDistribuicao;
import jogo.Jogo;

public class Menu {

    private static boolean finished;

    public static boolean isFinished() {
        return finished;
    }

    public static void setFinished(boolean aFinished) {
        finished = aFinished;
    }

    public static void menuHeaderBattleship() {
        System.out.println("\n=================================================");
        System.out.println("\t\tBATALHA NAVAL");
        System.out.println("=================================================");
    }

    public static Jogo menuBattleship() throws ErroMenu {

        PegaTipoDeJogo modoDeJogo = menuModoJogo();
        ElementosPreJogo.verificaParamJogo(modoDeJogo);

        PegaTipoDistribuicao modoDeDistribuicao = modoDistribuicaoJogo();
        ElementosPreJogo.verificaParamJogo(modoDeDistribuicao);

        Jogo novoJogo = new Jogo(modoDeJogo, modoDeDistribuicao);
        return novoJogo;
    }

    public static PegaTipoDeJogo menuModoJogo() {
        ElementosPreJogo.limparTela(); 
        setFinished(false);

        PegaTipoDeJogo modo = null;
        while (!isFinished()) {
            menuHeaderBattleship();
            System.out.println("\nMENU\n");
            System.out.println("1 - Novo Jogo");
            System.out.println("2 - Continuar Jogo Salvo");
            System.out.println("0 - Sair\n");
            System.out.print("\nOpção: ");
            try {
                modo = ElementosPreJogo.processarOpcaoMainMenu(ElementosPreJogo.lerOpcao());
                setFinished(true);

            } catch (ErroMenu bmex)
            {
                System.err.println(bmex.getMessage());
                ElementosPreJogo.pausa(1);
            }
        }
        return modo;
    }

    public static PegaTipoDistribuicao modoDistribuicaoJogo() {
        ElementosPreJogo.limparTela();
        setFinished(false);

        PegaTipoDistribuicao distribuicao = new DistribuicaoAutomatica();
        return distribuicao;
    }
}
