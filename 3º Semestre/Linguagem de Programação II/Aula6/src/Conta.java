public class Conta {
    
    String numero;
    double saldo;
    double limite;
    String titular;
    
    boolean sacar(double valor){
        
        saldo -= valor;
        return true;
    }
    
    void depositar(double valor){
     
        saldo += valor;
        
    }
    
    void mostrarValor(){
        
        System.out.println("Saldo do " + titular + " é " + saldo);
        
    }
    
    boolean transferirPara(Conta outraConta, double valor){
        
        boolean sucesso = sacar(valor);
        
        if(sucesso){
        
            outraConta.depositar(valor);
            return true;
            
        }else{
           
            return false;
            
        }
        
    }
}
