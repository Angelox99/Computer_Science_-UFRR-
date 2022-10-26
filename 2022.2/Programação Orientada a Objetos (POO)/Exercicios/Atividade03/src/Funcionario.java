public class Funcionario 
{
    String nome;
    String departamento;
    String RG;
    double salario;
    
    //Data
    Data dataDeEntrada = new Data();
    //String data;

    void recebAumento(double valor)
    {
        this.salario = this.salario + valor;
    }

    double calculaGanhoAnual()
    {
        return this.salario * 12;
    }

    void mostra ()
    {
        System.out.println("nome: "+this.nome);
        System.out.println("RG: "+this.RG);
        //System.out.println("Data: "+this.dataDeEntrada);
        this.dataDeEntrada.formatoData();
        System.out.println("Departamento: "+this.departamento);
        System.out.println("Salario: R$"+this.salario);
        System.out.println("Salario Anual: "+this.calculaGanhoAnual());
    }

}
