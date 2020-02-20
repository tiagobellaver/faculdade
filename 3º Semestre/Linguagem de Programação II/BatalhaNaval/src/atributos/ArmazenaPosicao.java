package atributos;

import controleDeErros.ErroDuranteJogo;

public class ArmazenaPosicao {
    private final int x;
    private final int y;
    
    public ArmazenaPosicao (int x, int y) throws ErroDuranteJogo {
        if (isPosicaoTabuleiroValida(x) && isPosicaoTabuleiroValida(y)){
            this.x = x;
            this.y = y;
        } else
            throw new ErroDuranteJogo ("Posição digitada inválida! Tente novamente.\n");
    }
    
    public static boolean isPosicaoTabuleiroValida (int n) {
        return n >= 0 && n < 7;
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }
}
