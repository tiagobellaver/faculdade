package exercicio3ponto2;

public class Main {

    public static void main(String[] args) {
        
        Aluno alunoa = new Aluno();
        
        alunoa.nome = "Ana";
        alunoa.n1 = 10;
        alunoa.n2 = 9;
        System.out.print("A media do aluno " + alunoa.nome + " é: " + alunoa.mediaAluno(alunoa.nome, alunoa.n1, alunoa.n2));
        System.out.println();
        
        Aluno alunob = new Aluno();
        alunob.nome = "Beto";
        alunob.n1 = 9;
        alunob.n2 = 10;
        System.out.print("A media do aluno " + alunob.nome + " é: " + alunob.mediaAluno(alunob.nome, alunob.n1, alunob.n2));
        System.out.println();
        
    }
    
}
