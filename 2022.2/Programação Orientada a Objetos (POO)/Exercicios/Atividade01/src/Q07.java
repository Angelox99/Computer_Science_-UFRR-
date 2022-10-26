public class Q07 {
    //Fibonacci ate 100
    public static void main(String[] args) throws Exception {
        int a = 0, b = 0, c = 1;
        System.out.println("Fibonacci Series:");
        for(int i = 1; i <= 100; i++)
        {
            //System.out.println("loop="+i+" / a="+a+" / b="+b+" / c="+c);    

            a = b;
            //System.out.println("loop="+i+" / a="+a+" / b="+b+" / c="+c);    

            b = c;
            //System.out.println("loop="+i+" / a="+a+" / b="+b+" / c="+c);    

            c = a + b;
            //System.out.println("loop="+i+" / a="+a+" / b="+b+" / c="+c);    

            if (a<=100) {
                System.out.println(" n"+i+" = "+a);    
            } else {
                break;
            }
                
            /*Deixei os prints comentados e essa resolucao de fibonacci
             * da qual eu nao entendi como funciona para que se possivel
             * voce pode-se me explicar professor, os prints comentados 
             * mostram o passo a passo do codigo*/
        }
    }
}