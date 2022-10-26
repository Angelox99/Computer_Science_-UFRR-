package sala;

import java.util.Set;
import sala.Figura;

public class Quadrado extends Figura

{
    @Override
    public double calcularArea()
    {
        return b*h;
    }

    // q = new Figura();
    // q.setB(5);
    // q.setH(2);
    
    // q.calcularArea(q.b, q.h);
}
