package atributos;

public class QtdEmbarcacoes {
    
    private int qtdNavioTamanho2 = 1;
    private int qtdNavioTamanho3 = 1;
    private int qtdNavioTamanho4 = 1;
    
    public int getQtdNavioTamanho2() {
        return qtdNavioTamanho2;
    }

    public int getQtdNavioTamanho3() {
        return qtdNavioTamanho3;
    }

    public int getQtdNavioTamanho4() {
        return qtdNavioTamanho4;
    }

    public void decrementarNavioTamanho2() {
        qtdNavioTamanho2--;
    }

    public void decrementarNavioTamanho3() {
        qtdNavioTamanho3--;
    }

    public void decrementarNavioTamanho4() {
        qtdNavioTamanho4--;
    }

    public void setQtdEmbarcacoes() {
        qtdNavioTamanho2 *= 2;
        qtdNavioTamanho3 *= 3;
        qtdNavioTamanho4 *= 4;
    }
}
