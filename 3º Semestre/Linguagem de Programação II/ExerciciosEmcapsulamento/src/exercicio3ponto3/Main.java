package exercicio3ponto3;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
    
        Scanner leitor = new Scanner(System.in);
        Calculo conta = new Calculo();
        
        System.out.print("Digite o valor a ser creditado: ");
        int valor = leitor.nextInt();
        conta.credito(valor);
        
        System.out.print("Digite o valor a ser debitado: ");
        int valor1 = leitor.nextInt();
        conta.debito(valor1);
        
        conta.getSado();
    }
    
}
