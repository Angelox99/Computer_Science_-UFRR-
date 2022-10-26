public class Calculadora
{
    double soma, sub, mult, div;

    //SOMA com N valores
    double soma(double ... valores)
    {
        double s=0;
        //soma o valor puro 
        // for (double valor:valores)
        // {
        //     s+=valor;
        // }

        // soma o valor do indice do array
        for (int i = 0; i < valores.length; i++) {
            s+=valores[i];
        }
       return s;
    }
    //SOMA com Valores limitados
    double soma(double a,double b, double c)
    {
       return a+b+c;
    }
    double soma(double a,double b, double c, double d)
    {
       return a+b+c+d;
    }
    //--------------------------------------------
    //SUBTRACAO com N valores
    double sub(double ... valores)
    {
        double s=valores[0];
         for (double valor:valores)
         {
             s= s -valor;
         }
         return s;
    }
    //SUBTRACAO com Valores limitados

    double sub(double a,double b, double c)
    {
        return a-b-c;
    }
    double sub(double a,double b, double c, double d)
    {
        return a-b-c-d;
    }
    //--------------------------------------------
    //MULTIPLICACAO com N valores
    double mult(double ... valores)
    {
        double s=1;
         for (double valor:valores)
         {
             s*=valor;
         }
         return s;
    }
    //MULTIPLICACAO com Valores limitados

    double mult(double a,double b, double c)
    {
        return a*b*c;
    }
    double mult(double a,double b, double c, double d)
    {
        return a*b*c*d;
    }
    //--------------------------------------------
    //DIVISAO com N Valores
    double div(double ... valores)
    {
        double s=valores[0];
         for (double valor:valores)
         {
             s/=valor;
         }
         return s;
    }
    //DIVISAO com Valores limitados

    double div(double a,double b, double c)
    {
        return a/b/c;
    }
    double div(double a,double b, double c, double d)
    {
        return a/b/c/d;
    }
}