public class Calculo {
    public static void main(String[] args) throws Exception
    {
        Calculadora cal;
        cal = new Calculadora();

        //N=5 parametros
        System.out.println("[N=5]:");
        System.out.println ("soma ="+cal.soma(2,2,2,2,2));
        System.out.println ("Subtracao ="+cal.sub(2,2,2,2,2));
        System.out.println ("Multiplicacao ="+cal.mult(2,2,2,2,2));
        System.out.println ("Divisao ="+cal.div(100,5,5,2,2));
        //N=6 parametros
        System.out.println("\n[N=6]:\n");
        System.out.println ("soma ="+cal.soma(3,3,3,3,3,3));
        System.out.println ("Subtracao ="+cal.sub(3,3,3,3,3,3));
        System.out.println ("Multiplicacao ="+cal.mult(3,3,3,3,3,3));
        System.out.println ("Divisao ="+cal.div(3,3,3,3,3,3));
        //N=7 parametros
        System.out.println("\n[N=7]:\n");
        System.out.println ("soma ="+cal.soma(4,4,4,4,4,4,4));
        System.out.println ("Subtracao ="+cal.sub(4,4,4,4,4,4,4));
        System.out.println ("Multiplicacao ="+cal.mult(4,4,4,4,4,4,4));
        System.out.println ("Divisao ="+cal.div(4,4,4,4,4,4,4));

    }

    
}
