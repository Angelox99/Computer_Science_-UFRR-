public class Lampada
{
    private Boolean ligada = true;

    void Ligar()
    {
        this.ligada=true;
    }
    
    void Desligar()
    {
        this.ligada=false;
    }
    
    void Estado()
    {
        if(this.ligada==true)
        {
            System.out.println("\nLampada Ligada\n");
        }
        else
        {
            System.out.println("\nLampada Desligada\n");
        }
        
    }

}