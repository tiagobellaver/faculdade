package atributos;

import elementos.Tabuleiro;

public interface PegaTipoDeJogo {

    public void setMunicaoInicial();

    public void comecarTurno(Tabuleiro tabuleiro);

    public void verificaGameOver(Tabuleiro tabuleiro);
}
