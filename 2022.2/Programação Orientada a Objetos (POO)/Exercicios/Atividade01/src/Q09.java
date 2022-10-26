import java.util.Scanner;

public class Q09 {
public static void main(String[] args) throws Exception {
        int n;
        System.out.printf("Digite o valor de n : ");
        Scanner ler = new Scanner(System.in);  
        n = ler.nextInt();

        for(int i=1; i<=n ; i++)
        {

            for(int j=1; j<=i; j++)
            {
                System.out.printf(" | "+(i*j)+" | ");
            }
            System.out.println();
        }
    }
}