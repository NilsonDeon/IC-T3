import java.util.Scanner;

public class IC_Java{
    public static void main(String[] args){
        int n;

        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Quantos pessoas? ");
            n = input.nextInt();

            String[] t = new String[n];


             for(int i = 0; i < n; i++){
                System.out.print("Qual o tamanho da camisa? ");
                String a = input.nextLine();
                t[i] = a;
            } 
            System.out.println(t[1]);
        }
    }
}