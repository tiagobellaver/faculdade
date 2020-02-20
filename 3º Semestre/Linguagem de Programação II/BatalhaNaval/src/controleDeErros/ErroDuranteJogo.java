package controleDeErros;

public class ErroDuranteJogo extends TentativasIlegais {

    public ErroDuranteJogo(String mensagem) {
        super(mensagem);
    }

        public ErroDuranteJogo() {
        super("EXCEÇÃO: Algum problema aconteceu durante a execução do jogo.");
    }
}
