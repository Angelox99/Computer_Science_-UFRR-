package sala;
class Figura {

    public double calculaArea() {
    return 0;
    }
    
    
    }
    
    
    class Quadrado extends Figura {
    private double b;
    
    public Quadrado(double b) {
    this.b = b;
    }
    
    public double calculaArea() {
    return b*b;
    }
    
    public void setB(double b) {
    this.b = b;
    }
    
    public double getB(double b) {
    return b;
    }
    }
    
    class Retangulo extends Figura {
    private double base;
    private double altura;
    
    public Retangulo(double base, double altura) {
    this.base = base;
    this.altura = altura;
    }
    
    public double calculaArea() {
    return base*altura;
    }
    
    public void setBase(double base) {
    this.base = base;
    }
    
    public double getBase(double base) {
    return this.base;
    }
    }
    
    
    public class Calculadora {
    
    publuc static void main {
    Quadrado q = new Quadrado(2.0);
    Retangulo r = new Retangulo(2.0, 4.0);
    
    System.out.println(r.calculaArea());
    System.out.println(q.calculaArea());
    }
    }
    