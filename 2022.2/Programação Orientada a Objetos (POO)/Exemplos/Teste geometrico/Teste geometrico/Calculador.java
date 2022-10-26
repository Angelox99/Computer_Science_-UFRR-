class Calculador extends Figuracomplexa{

    public Calculador(double a1) {
        super(a1);
    }

public static void main(String[] args) {

    Quadrado q1 = new Quadrado(3);
    q1.Calculaarea();
    System.out.println(q1.Calculaarea());

    Quadrado q2 = new Quadrado(10);
    q2.Calculaarea();
    System.out.println(q2.Calculaarea());

    Retangulo r1 = new Retangulo(2,7);
    r1.Calculaarea();
    System.out.println(r1.Calculaarea());

    Retangulo r2 = new Retangulo(5,3);
    r2.Calculaarea();
    System.out.println(r2.Calculaarea());


    //Eu tentei fazer com isso aqui 
    //c.setA1(n=q1.Calculaarea()+q2.Calculaarea()+r1.Calculaarea()+r2.Calculaarea());
    //fiz um c.getA1(n) no system println mas nao deu certo pois n nao possa como objeto.
    
    //Esse foi so um teste para ver se esta funcionando
    System.out.println("Area total da figura: " + (q1.Calculaarea() + q2.Calculaarea() + r1.Calculaarea()+ r2.Calculaarea()));
    
   }
}
