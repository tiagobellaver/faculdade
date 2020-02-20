public class Main {

    public static void main(String[] args) {
        
        Conta contaDoJoaozinho = new Conta();
        
        contaDoJoaozinho.limite = 2000;
        contaDoJoaozinho.saldo = 100;
        contaDoJoaozinho.titular = "Joãozinho";
        contaDoJoaozinho.numero = "1";
        
        Conta contaDoZezinho = new Conta();
        contaDoZezinho.limite = 1000;
        contaDoZezinho.saldo = -100;
        contaDoZezinho.titular = "Zezinho";
        contaDoZezinho.numero = "2";
        
        contaDoJoaozinho.mostrarValor();
        contaDoZezinho.mostrarValor();
        
        Conta clone = contaDoJoaozinho;
        clone.mostrarValor();
        clone.titular = "Tiago";
        clone.mostrarValor();
        
        
        contaDoZezinho.sacar(200);
        contaDoZezinho.mostrarValor();
        
        contaDoZezinho.depositar(500);
        contaDoZezinho.mostrarValor();
        
        contaDoZezinho.transferirPara(contaDoJoaozinho, 50);
        contaDoZezinho.mostrarValor();
        contaDoJoaozinho.mostrarValor();
    }
    
}
