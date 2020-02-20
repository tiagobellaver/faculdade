package navios;

import elementos.Embarcacao;
import elementos.Celula;

public class Navio1 extends Embarcacao{
    
    Celula tabuleiro;
    private final String nome = "Navio de 2 partes";
    
    public Navio1(Celula tabuleiro) {
        this.tabuleiro = tabuleiro;
    }
    
    @Override
    public String whoami() {
        return tabuleiro.whoami() + "2";
    }

    @Override
    public String getNome() {
        return nome;
    }
}
