//Angelo Almeida Ferro - 1201524424 - Programacao orientado a objeto
public class Empresa 
{
    //Atributos privados
    private String nome;
    private String cnpj;
    private String telefone;
    private Funcionario[] empregados = new Funcionario[10];
    
    //Atributo publico
    int posicao = 0;

    // GET-------------------------------------------
    String getNome()
    {
        return this.nome;
    }

    String getCnpj()
    {
        return this.cnpj;
    }
    
    String getTelefone()
    {
        return this.telefone;
    }
    
    //SET----------------------------------------------
    void setNome(String n)
    {
        this.nome = n;
    }

    void setCnpj(String c)
    {
        this.cnpj = c;
    }

    void setTelefone(String t)
    {
        this.telefone = t;
    }

    //METODOS----------------------------------------------------------------
    public void geraID()
    {
        for(int i = 0; i < this.empregados.length; i++)
        {
            this.empregados[i].setidFuncionario(i+1);
        }
    }
    
    void mostraE()
    {
        System.out.println("\n\t\tEMPRESA\n\n");
        System.out.println("Nome : "+this.getNome());
        System.out.println("CNPJ : "+this.getCnpj());
        System.out.println("Telefone : "+this.getTelefone());
    }
         
    void adiciona(Funcionario empregado) 
    {
        if (this.posicao < 10) 
        {
            this.empregados[this.posicao] = empregado;
            this.posicao++;
        }
    }

    void mostraF()
    {
        for(int i = 0; i < this.empregados.length; i++)
        {
            System.out.println("\t\tFuncionario F"+this.empregados[i].getidFuncionario()+"\n");
            System.out.println("Nome "+"F"+i+": "+this.empregados[i].getNome());
            System.out.println("Salario "+"F"+i+": R$ "+this.empregados[i].getSalario());
            System.out.println("Departamento "+"F"+i+": "+this.empregados[i].getDepartamento()+"\n");
            this.empregados[i].dataDeEntrada.formatoData();
            //System.out.println("Data&Hora "+"F"+i+": "+this.empregados[i].dataDeEntrada.formatoData()+"\n");//Fazendo...
            System.out.println("-----------------------------------");
        }
    }

    void checkF()
    {
        for(int i = 0; i < this.empregados.length; i++)
        {
            if (this.empregados[i].getSalario() > 0)
            {
                System.out.println("F"+i+" Faz parte da EMPRESA");
            }
            else
            {
                System.out.println("F"+i+" Nao faz parte da EMPRESA");
            }
        }
        System.out.println("-----------------------------------");
    }
}
