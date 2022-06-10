
import java.util.Scanner;

public class IC_Java {
    public static void main(String[] args){
        int n; // número de participantes
        int p; // quantos quere tamanho P
        int m; // quantos querem tamanho M

        try (Scanner scan = new Scanner(System.in)) {
            System.out.print("Quantas pessoas? "); 
            n = scan.nextInt(); // recebendo número de participantes

            int[] t = new int[n]; // criendo e alocando espaço do vetor com tamanho das camisas

            for(int i = 0; i < n; i++){
                System.out.print("Qual o tamanho da camisa? ");
                t[i] = scan.nextInt(); // recebendo tamanho das camisas e adicionando ao vetor "t"
            }  
            
            System.out.print("Quantos querem a camisa tamanho P? ");
            p = scan.nextInt(); // recebendo quantidade de camisas P

            System.out.print("Quantos querem a camisa tamanho M? ");
            m = scan.nextInt(); // recebendo quantidade de camisas M

            for (int i = 0; i < n; i++){ // se a camisa na posição "i" for tamanho P
                if (t[i] == 1){ // se a camisa na posição "i" for tamanho P
                    p-=1; // remove uma camisa do tamanho P
                }
                else{ // senão
                    m-=1; // remove uma camisa do tamanho M
                }
            }
            
            if (p == 0 && m == 0){ // verificando se todos os participantes receberam a camisa que queriam
                System.out.println("S"); // receberam as camisas que queriam
            }
            else{ // senão
                System.out.println("N"); // não receberam as camisas que queriam
            }
        }
    }
}