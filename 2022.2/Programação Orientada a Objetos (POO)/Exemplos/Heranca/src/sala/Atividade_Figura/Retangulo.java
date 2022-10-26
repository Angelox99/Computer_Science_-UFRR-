package sala.Atividade_Figura;

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
