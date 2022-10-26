//Angelo Almeida Ferro - 1201524424 - Programacao orientado a objeto
public class Data 
{
    //Atributos privados
    private int dia, mes, ano;
    private int hora, minuto, segundo;

    //Metodo data
    public void formatoData()
    {
        System.out.println("Data: "+dia+"/"+mes+"/"+ano);       
        System.out.println("Hora: "+hora+":"+minuto+":"+segundo);       
    }

    //GET------------------------------------------------
    int getDia()//Fazendo...
    {
        return this.dia;
    }
    int getMes()//Fazendo...
    {
        return this.mes;
    }
    int getAno()//Fazendo...
    {
        return this.ano;
    }


    int getHora()//Fazendo...
    {
        return this.hora;
    }
    int getMinuto()//Fazendo...
    {
        return this.minuto;
    }
    int getSegundo()//Fazendo...
    {
        return this.segundo;
    }

    //SET----------------------------------------------------------------------------------------
    void setDia(int dia)//Fazendo...
    {
        this.dia=dia;
    }
    void setMes(int mes)//Fazendo...
    {
        this.mes=mes;
    }
    void setAno(int ano)//Fazendo...
    {
        this.ano=ano;
    }


    void setHora(int hora)//Fazendo...
    {
        this.hora=hora;
    }
    void setMinuto(int minuto)//Fazendo...
    {
        this.minuto=minuto;
    }
    void setSegundo(int segundo)//Fazendo...
    {
        this.segundo=segundo;
    }
}
