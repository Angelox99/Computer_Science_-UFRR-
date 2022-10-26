package sala;

import java.util.Set;

public class Figura {
    //Atributos----------------------------------------------------------------
    protected double b;
    protected double h;
    private String nome;

    //Metodos----------------------------------------------------------------
    public double calcularArea()
    {
     return 0;
    }

    //GET----------------------------------------------------------------
    public String getNome() {
        return nome;
    }

    public double getB() {
        return b;
    }

    public double getH() {
        return h;
    }
    
    //SET----------------------------------------------------------------
    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setB(double b) {
        this.b = b;
    }

    public void setH(double h) {
        this.h = h;
    }    
}
