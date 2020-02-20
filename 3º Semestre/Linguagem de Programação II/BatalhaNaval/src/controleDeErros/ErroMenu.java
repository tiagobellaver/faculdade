package controleDeErros;

public class ErroMenu extends TentativasIlegais {

    public ErroMenu(String mensagem) {
        super(mensagem);
    }

        public ErroMenu() {
        super("EXCEÇÃO: Opção inválida.");
    }
}
