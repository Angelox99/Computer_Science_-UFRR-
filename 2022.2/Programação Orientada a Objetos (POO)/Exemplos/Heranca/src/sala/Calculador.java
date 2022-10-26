package sala;

public class Calculador 
{
    public static void main(String[] args)
    {
        Quadrado q = new Quadrado();
        q.setNome("Quadrado");
        q.setB(2);
        q.setH(2);  
        System.out.println("A area do "+q.getNome()+" e : "+q.calcularArea());
    }
}