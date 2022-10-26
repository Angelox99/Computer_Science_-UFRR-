class Retangulo extends Figuras{

    private double base;
    private double altura;

    public double getBase(){
      return this.base;
    }
      
    public void setBase(double base){
      this.base = base;
    }

    public double getAltura(){
      return this.altura;
    }

    public void setAltura(double altura){
      this.altura = altura;
    }
    
    public Retangulo(double altura, double base) {
      this.setAltura(altura);
      this.setBase(base);
    }
  
    public double Calculaarea() {
      return this.base * this.altura;
    }
    
}