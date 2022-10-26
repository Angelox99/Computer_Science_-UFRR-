import java.util.Scanner;


public class Q08 {
    public static void main(String[] args) throws Exception 
    {
        Scanner ler = new Scanner(System.in);
        int x;
        System.out.printf("Digite o valor de x :");
        x = ler.nextInt();

        for (int i = 1; i >= 1 ; i++)
        {
            if(x%2==0)
            {
                x=x/2;
                if(x==1){System.out.printf(" x = "+x);break;}

                System.out.printf(" x = "+x+" > ");

            }else {
                x=3*x+1;
                System.out.printf(" x = "+x+" > ");

            }
            if(x==1)
            break;
        }
    }
}
