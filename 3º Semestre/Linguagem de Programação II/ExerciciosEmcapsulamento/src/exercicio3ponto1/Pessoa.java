package exercicio3ponto1;

public class Pessoa {

    protected String nome;
    protected String cpf;
    protected int idade;
    
    public void setNome(String nome){
        
        this.nome = nome;
        
    }
    public String getNome(){
    
        return this.nome;
    }
    
    public void setCPF(String cpf){
        
        this.cpf = cpf;
    }
    
    public String getCPF(){
        
        return this.cpf;
    }
    
    public void setIdade(int idade){
        
        this.idade = idade;
    }
    
    public int getIdade(){
        
        return this.idade;
    }
   
    public void dados(){
        
        System.out.print("O usuário " + nome + " está cadastrado sobre o cadastro de pessoa física número: " + cpf + " e tem " + idade + " anos");
        
    }
}
