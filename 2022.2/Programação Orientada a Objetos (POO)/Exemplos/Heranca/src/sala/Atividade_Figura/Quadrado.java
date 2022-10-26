package sala.Atividade_Figura;

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
