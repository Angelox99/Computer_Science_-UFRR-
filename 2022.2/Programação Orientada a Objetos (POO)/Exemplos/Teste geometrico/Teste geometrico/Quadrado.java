class Quadrado extends Figuras{
    private double lado;

    /**
     * @param lado
     */

    public double getLado(){
        return lado;
    }

    public void setLado(double lado){
        this.lado = lado;
    }

    public Quadrado(double lado){
        this.setLado(lado);
    }
    
    public double Calculaarea(){
        return this.getLado() * this.getLado();
    }


}