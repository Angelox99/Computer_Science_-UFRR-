public class Banco {
    public static void main(String[] args) throws Exception 
    {
        //Funcionarios instanciados
        Funcionario f1;
        Funcionario f2;
        f1 = new Funcionario();
        f2 = new Funcionario();

        //Iniciando F1
        f1.nome = "Garunk";
        f1.RG = "123";
        f1.dataDeEntrData.dia = 23;  
        f1.dataDeEntrData.mes = 11;  
        f1.dataDeEntrData.ano = 1995;  
        f1.departamento = "TI";
        f1.salario = 5000;
        
        //Iniciando F2
        f2.nome = "Sieg";
        f2.RG = "369";
        f2.dataDeEntrData.dia = 11;  
        f2.dataDeEntrData.mes = 9;  
        f2.dataDeEntrData.ano = 1995;  
        f2.departamento = "TI";
        f2.salario = 9000; 
        
        //Criando empresa
        Empresa e1 = new Empresa();
        e1.nome= "Sieg Docs";
        e1.cnpj= "456";
        e1.telefone= "789";

        //Adiciona Funcionario na empresa
        e1.adiciona(f1);
        e1.adiciona(f2);

        //funcionario + salario = empresa adiciona
        for(int i=0;i<8;i++)
        {
            Funcionario f = new Funcionario();
            e1.adiciona(f);
        }

        //Mostra os Funcionarios da empresa
        System.out.println("-----------------------------------");
        e1.mostraE();
        System.out.println("-----------------------------------");
        e1.mostraF();
        System.out.println("-----------------------------------");
        e1.checkF();
        
    }
}
