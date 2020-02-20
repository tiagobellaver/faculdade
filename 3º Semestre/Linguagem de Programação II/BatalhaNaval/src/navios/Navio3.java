package navios;

import elementos.Embarcacao;
import elementos.Celula;

public class Navio3 extends Embarcacao {

    Celula tabuleiro;
    private final String nome = "Navio de 4 partes";

    public Navio3(Celula tabuleiro) {
        this.tabuleiro = tabuleiro;
    }

    @Override
    public String whoami() {
        return tabuleiro.whoami() + "4";
    }

    @Override
    public String getNome() {
        return nome;
    }
}
