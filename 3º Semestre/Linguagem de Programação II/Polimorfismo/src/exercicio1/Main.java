package exercicio1;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner leitor = new Scanner(System.in);

        Conta conta = new Conta();

        System.out.println("Digite a operação que deseja");
        System.out.println("1 - Visualizar o saldo.");
        System.out.println("2 - Depositar.");
        System.out.println("3 - Sacar");
        System.out.println("4 - Sair");

        while (true) {
            
            int opcao = leitor.nextInt();
            
            if (opcao == 1) {
                conta.visualizarSaldo();
            }

            if (opcao == 2) {
                conta.depositar();
            }

            if (opcao == 3) {
                conta.sacar();
            }
            
            if(opcao == 4){
                
                break;
            }
        }
    }

}
