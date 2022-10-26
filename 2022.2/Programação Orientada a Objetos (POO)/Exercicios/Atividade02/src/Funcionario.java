public class Funcionario 
{
    String nome;
    String departamento;
    String RG;
    double salario;
    
    //Data
    Data dataDeEntrData = new Data();
    //String data;

    public void recebAumento(double valor)
    {
        this.salario = this.salario + valor;
    }

    public double calculaGanhoAnual()
    {
        return this.salario * 12;
    }

    public void mostra ()
    {
        System.out.println("nome: "+this.nome);
        System.out.println("RG: "+this.RG);
        //System.out.println("Data: "+this.dataDeEntrData);
        this.dataDeEntrData.formatoData();
        System.out.println("Departamento: "+this.departamento);
        System.out.println("Salario: "+this.salario);
        System.out.println("Salario Anual: "+this.calculaGanhoAnual());
    }

}
