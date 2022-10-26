public class Q04 
{
    //Fatoriais de 1 a 10
    public static void main(String[] args) throws Exception 
    {
        for(int i = 1; i <=10; i++){
            int num = i;
            System.out.println(i+"!:");
            System.out.println("i : "+i+" num : "+num);

            for(int j = (num-1); j>=1; j--){
                System.out.println(" num : "+num+" * j : "+j);
                num *= j;
            }

            //mostra o resultado
            System.out.println(i+"! = "+num);
        }
    }
}