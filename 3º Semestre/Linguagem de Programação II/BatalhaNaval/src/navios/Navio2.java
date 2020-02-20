package navios;

import elementos.Embarcacao;
import elementos.Celula;

public class Navio2 extends Embarcacao {

    Celula tabuleiro;
    private final String nome = "Navio de 3 partes";

    public Navio2(Celula tabuleiro) {
        this.tabuleiro = tabuleiro;
    }

    @Override
    public String whoami() {
        return tabuleiro.whoami() + "3";
    }

    @Override
    public String getNome() {
        return nome;
    }
}
