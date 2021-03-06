package elementos;

public class Agua extends DecoradorElemento{
    Celula tabuleiro;
    private final String nome = "Agua";

    public Agua (Celula tabuleiro){
        this.tabuleiro = tabuleiro;
    }

    @Override
    public String whoami() {
        return tabuleiro.whoami() + "~";
    }

    @Override
    public String getNome() {
        return nome;
    }
}
