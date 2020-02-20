package controleDeErros;

public class TentativasIlegais extends Exception
{
    public TentativasIlegais (String mensagem)
    {
        super(mensagem);
    }

    public TentativasIlegais ()
    {
        super("EXCEÇÃO: Operação Inválida no Batalha Naval.");
    }
}
