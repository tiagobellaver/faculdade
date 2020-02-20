package exercicio3ponto3;

public class Calculo {
    
    private int saldo = 0;
    
    public void credito(int valor){
        
        saldo = saldo + valor;
        
    }
    
    public void debito(int valor){
        
        saldo = saldo - valor;
        
    }
    
    public void getSado(){
        
        System.out.println("Saldo da conta é: R$ " + saldo);
        
    }
    
}
