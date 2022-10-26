public class Banco {
    public static void main(String[] args) throws Exception {
        //Funcionarios instranciados
        Funcionario f1;
        Funcionario f2;
        f1 = new Funcionario();
        f2 = new Funcionario();
        
        //Iniciando F1
        f1.nome = "Garunk";
        f1.RG = "012345678901";
        f1.dataDeEntrData.dia = 11;  
        f1.dataDeEntrData.mes = 9;  
        f1.dataDeEntrData.ano = 1995;  
        f1.departamento = "TI";
        f1.salario = 5000;
        
        //Iniciando F2
        f2.nome = "Garunk";
        f2.RG = "012345678901";
        f2.dataDeEntrData.dia = 11;  
        f2.dataDeEntrData.mes = 9;  
        f2.dataDeEntrData.ano = 1995;  
        f2.departamento = "TI";
        f2.salario = 5000;   
        
        //Printa os enderecos
        System.out.println("F1 :"+f1);
        System.out.println("F2 :"+f2);
        System.out.println("");


       // Sempre sera diferente pois nao compara atributos e sim enderecos. 
        if (f1==f2)
        {
            System.out.println("Iguais!\n");
        }
        else
        {
            System.out.println("Diferentes!\n");
        }

        //Printa o Mostra antes de aplicar os metodos
        
        System.out.println("_____________________________________");
        System.out.println("Antes:");
        System.out.println("_____________________________________");
        System.out.println("F1:");
        f1.mostra();

        System.out.println("\nF2:");
        f2.mostra();
        System.out.println("_____________________________________");

        //Aplicando metodos
        f1.recebAumento(1000);
        f2.recebAumento(4000);
        
        f1.calculaGanhoAnual();
        f2.calculaGanhoAnual();
        
        //Printa o Mostra depois de aplicar os metodos
        System.out.println("\nDepois:");

        System.out.println("_____________________________________");
        System.out.println("F1:");
        f1.mostra();

        System.out.println("\nF2:");
        f2.mostra();
        System.out.println("_____________________________________");
        
        
        

        
    }
}
