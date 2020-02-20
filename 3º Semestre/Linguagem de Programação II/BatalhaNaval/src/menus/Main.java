package menus;

import controleDeErros.TentativasIlegais;
import jogo.Jogo;

public class Main {

    public static void main(String[] args) {
        try {

            Jogo jogo = Menu.menuBattleship();
            jogo.comecarJogo();

        } catch (TentativasIlegais bex) {
            System.err.println(bex.getMessage());
        }
    }
}
