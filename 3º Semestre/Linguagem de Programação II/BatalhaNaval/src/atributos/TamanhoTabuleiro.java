package atributos;

public class TamanhoTabuleiro implements PegaTamanhoTabuleiro {

    private final int tamanhoTabuleiro = 7;

    @Override
    public int getTamanhoTabuleiro() {
        return tamanhoTabuleiro;
    }

}
