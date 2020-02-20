package exercicio1;
import java.util.Scanner;

public class Conta {
    
    Scanner leitor = new Scanner(System.in);
    double saldo;
    
    void visualizarSaldo(){
        
       System.out.println("Seu saldo é de: R$ " + saldo);
    }
    
    double depositar(){
        
        System.out.print("Digite o valor a ser depositado: R$ ");
        double valor = leitor.nextDouble();
        double novoSaldo = saldo + valor;
        saldo = novoSaldo;
        return saldo;
    }
    
    double sacar(){
        
        System.out.println("Digite o valor a ser sacaddo: R$ ");
        double valor = leitor.nextDouble();
        double novoSaldo = saldo - valor;
        saldo = novoSaldo;
        return saldo;
    }
}
