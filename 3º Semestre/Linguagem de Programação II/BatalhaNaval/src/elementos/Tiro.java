package elementos;

public class Tiro extends Fogo {

    public Tiro(Celula tabuleiro) {
        this.tabuleiro = tabuleiro;
    }

    @Override
    public String whoami() {
        return tabuleiro.whoami() + "*";
    }

    @Override
    public String getNome() {
        return "Bomba Explosiva";
    }
}
