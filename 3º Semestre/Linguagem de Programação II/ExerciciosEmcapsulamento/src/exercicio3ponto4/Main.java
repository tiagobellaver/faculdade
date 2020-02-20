package exercicio3ponto4;

public class Main {

    public static void main(String[] args) {

        ContaCorrente conta = new ContaCorrente();

        conta.cadastrarSenha();
        System.out.println();

        conta.alterarSenha();
        System.out.println();

        conta.creditar();
        System.out.println();

        conta.debitar();
        System.out.println();

        conta.mostrarSaldo();

    }

}
