package exercicio3ponto4;

import java.util.Scanner;

public class ContaCorrente {

    Scanner leitor2 = new Scanner(System.in);

    private String nome;
    private int senha;
    private double saldo;

    public void cadastrarSenha() {

        System.out.print("Cadastre sua senha: ");
        senha = leitor2.nextInt();

    }

    public void alterarSenha() {

        System.out.print("Digite sua senha atual: ");
        int senhaa = leitor2.nextInt();

        if (senhaa == senha) {

            System.out.print("Digite sua nova senha: ");
            senha = leitor2.nextInt();
        } else {
            System.out.println("Senha inválida!");
            System.out.close();
        }
    }

    public void creditar() {

        System.out.print("Digite o valor a creditar: ");
        double valor = leitor2.nextDouble();
        System.out.print("Digite sua senha: ");
        int senhab = leitor2.nextInt();
        if (senhab == senha) {

            saldo = saldo + valor;
        } else {
            System.out.println("Operação inválida!");
            System.out.close();
        }

    }

    public void debitar() {

        System.out.print("Digite o valor a debitar: ");
        double valor = leitor2.nextDouble();
        System.out.print("Digite sua senha: ");
        int senhac = leitor2.nextInt();
        if (senhac == senha) {

            saldo = saldo - valor;

        } else {
            System.out.println("Operação inválida!");
            System.out.close();

        }

    }

    public void mostrarSaldo() {

        System.out.println("Seu saldo é de: R$ " + saldo);
    }
}
