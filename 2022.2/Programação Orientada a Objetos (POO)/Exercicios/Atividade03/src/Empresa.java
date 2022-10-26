public class Empresa 
{
    String nome;
    String cnpj;
    String telefone;
    Funcionario[] empregados = new Funcionario[5];
    int posicao = 0;

    void mostraE()
    {
        System.out.println("\n\t\tEMPRESA\n\n");
        System.out.println("Nome : "+this.nome);
        System.out.println("CNPJ : "+this.cnpj);
        System.out.println("Telefone : "+this.telefone);
    }
         
    void adiciona(Funcionario empregado) 
    {
        if (this.posicao < 5) 
        {
            this.empregados[posicao] = empregado;
            this.posicao++;
        }
        
    }

    void mostraF()
    {
        for(int i = 0; i < this.empregados.length; i++)
        {
            System.out.println("\t\tFuncionario F"+i+"\n");
            System.out.println("Nome "+"F"+i+": "+this.empregados[i].nome);
            System.out.println("Salario "+"F"+i+": R$ "+this.empregados[i].salario);
            System.out.println("Departamento "+"F"+i+": "+this.empregados[i].departamento+"\n");
            System.out.println("-----------------------------------");

        }
    }

    void checkF()
    {
        for(int i = 0; i < this.empregados.length; i++)
        {
            if (this.empregados[i].salario > 0)
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
