public class Controle 
{
    Animal[] animais = new Animal[10];
    public static int indice;
    
    public controleDeAnimais()
    {
        ControleDeAnimais.indice = 0;
    }

    public void registra(Animal a)
    {
        if(ControleDeAnimais.indice <10)
        {
            animais[ControleDeAnimais.indice++] = a;
            a.emitirSom();
        }
    }
}
