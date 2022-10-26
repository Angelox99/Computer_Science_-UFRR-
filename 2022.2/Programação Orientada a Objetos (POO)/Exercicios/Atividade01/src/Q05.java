public class Q05 {
    //Fatorial 1 a 10 com for ?????
    public static void main(String[] args) throws Exception {
        int fatorial = 1;
        for (int n = 1; n <= 10; n++)
        {
             fatorial = n;

            for(int j = (fatorial-1); j>=1; j--){
                fatorial *= j;
            }

            //mostra o resultado
            System.out.println(n+"! = "+fatorial);
        }
    }
}
