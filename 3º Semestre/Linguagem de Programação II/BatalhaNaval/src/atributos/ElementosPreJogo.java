package atributos;

import atributos.NovoJogo;
import atributos.PegaTamanhoTabuleiro;
import atributos.DistribuicaoAutomatica;
import atributos.TamanhoTabuleiro;
import atributos.PegaTipoDeJogo;
import atributos.PegaTipoDistribuicao;
import controleDeErros.ErroDuranteJogo;
import controleDeErros.ErroMenu;
import elementos.Celula;
import java.util.Scanner;

public class ElementosPreJogo {


    public static PegaTipoDeJogo processarOpcaoMainMenu(int opcao) throws ErroMenu {
        PegaTipoDeJogo modoDeJogo = new NovoJogo();
        return modoDeJogo;
    }

    public static PegaTamanhoTabuleiro processarOpcaoMenuDificuldade(int opcao) throws ErroMenu {
        PegaTamanhoTabuleiro dificuldade = new TamanhoTabuleiro();
        return dificuldade;
    }

    public static PegaTipoDistribuicao processarMenuModoDistribuicao(int opcao) throws ErroMenu {

        PegaTipoDistribuicao distribuicao = new DistribuicaoAutomatica();
        return distribuicao;
    }
    
    public static int lerOpcao() throws ErroMenu {
        Scanner leitor = new Scanner(System.in);
        int opcao;
        try {
            opcao = Integer.parseInt(leitor.nextLine().trim());
        } catch (NumberFormatException ex) {
            throw new ErroMenu("Opção inválida. Digite apenas números!");
        }
        return opcao;
    }

    public static void getchar() {

        System.out.print("Aperte ENTER para continuar.");
        new Scanner(System.in).nextLine();
    }

    public static void pausa(int tempoEmSegundos) {
        try {
            Thread.sleep(tempoEmSegundos * 1000);
        } catch (InterruptedException ex) {
        }
    }

   public static void limparTela() {
        for (int i = 0; i < 50; i++) {
            System.out.println();
        }
    }

    public static void verificaParamJogo(Object param) throws ErroMenu {
        if (param == null) {
            throw new ErroMenu("Jogo não foi iniciado");
        }
    }

    public static void detonaBomba() {

    }

    public static String processarMenuDistribuicaoOrientacao(int opcao) throws ErroDuranteJogo {
        String retorno = null;
        switch (opcao) {
            case 1:
                retorno = "horizontal";
                break;
            case 2:
                retorno = "vertical";
                break;
            default:
                throw new ErroDuranteJogo("Opção inválida. Escolha apenas uma das opções listadas.");
        }
        return retorno;
    }

    public static void verificaSobreposicao(Celula conteudo) throws ErroDuranteJogo {

        if (!(conteudo.whoami().substring(conteudo.whoami().length() - 1).contains("~")))
        {
            throw new ErroDuranteJogo("Nesta posição já existe um " + conteudo.getNome());
        }
    }
}
