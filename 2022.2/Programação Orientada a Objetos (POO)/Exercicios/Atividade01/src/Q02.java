public class Q02 {
    //Soma 1 a 1000
    public static void main(String[] args) throws Exception 
    {
        int i=1;
        int soma=0;
        while(i<=1000)
        {
            soma += i;
            System.out.println("A soma e "+soma+" i="+i);
            i++;
        }
        
    }
}
