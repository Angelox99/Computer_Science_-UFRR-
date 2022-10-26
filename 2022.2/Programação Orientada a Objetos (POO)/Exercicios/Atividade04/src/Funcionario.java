//Angelo Almeida Ferro - 1201524424 - Programacao orientado a objeto
public class Funcionario 
{
    //Atributos privados
    private String nome;
    private String departamento;
    private String RG;

    private double salario;

    //Atributos publicos
    public Data dataDeEntrada = new Data();

    //ID------------------------------------------------------------------  ----------- 
    private int idFuncionario;//Fazendo...

    public int getidFuncionario()//Fazendo...
    {
        return this.idFuncionario++;
    }
  
    void setidFuncionario(int id )//Fazendo...
    {
        this.idFuncionario = id;
    }
 
    //Construtores----------------------------------------------------------------
    Funcionario(String n)// Recebe o nome do funcionario na criacao do objeto
    {
        this.nome = n;
    }

    Funcionario()//Construtor vazio para receber opcionalmente na criacaodo objeto
    {
    }

    //GET ----------------------------------------------------------------
    String getNome()
    {
        return this.nome;
    }
    String getDepartamento()
    {
        return this.departamento;
    }
    String getRg()
    {
        return this.RG;
    }

    double getSalario()
    {
        return this.salario;
    }


    
    //SET ---------------------------------------------------------------
    void setNome(String n)
    {
        this.nome = n;
    }
    void setDepartamento(String d)
    {
        this.departamento = d;
    }
    void setRg(String r)
    {
        this.RG = r;
    }

    void setSalario(double s)
    {
        this.salario = s;
    }


    
    
    //METODOS ----------------------------------------------------------------
    void recebAumento(double valor)
    {
        this.salario += valor;
    }

    double calculaGanhoAnual()
    {
        return this.salario * 12;
    }

    void mostra ()
    {
        this.dataDeEntrada.formatoData();
        System.out.println("Departamento: "+this.getDepartamento());
        System.out.println("nome: "+this.getNome());
        System.out.println("RG: "+this.getRg());
        System.out.println("Salario: R$"+this.getSalario());
        System.out.println("Salario Anual: R$"+this.calculaGanhoAnual());
    }

}
