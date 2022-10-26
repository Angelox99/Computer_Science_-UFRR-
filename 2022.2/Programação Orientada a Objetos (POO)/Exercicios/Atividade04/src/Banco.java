//Angelo Almeida Ferro - 1201524424 - Programacao orientado a objeto
public class Banco {
    public static void main(String[] args) throws Exception 
    {
        //Funcionarios instanciados
        Funcionario f1;
        Funcionario f2;
        f1 = new Funcionario("Garunk");//Cria com nome
        f2 = new Funcionario();//Cria sem nome

        //Iniciando F1 com set()
        f1.setRg("123");
        f1.setDepartamento("TI");
        f1.setSalario(5000);
        f1.dataDeEntrada.setDia(23);  
        f1.dataDeEntrada.setMes(11);  
        f1.dataDeEntrada.setAno(1998);  
        f1.dataDeEntrada.setHora(9);  
        f1.dataDeEntrada.setMinuto(59);  
        f1.dataDeEntrada.setSegundo(35);  
        
        //Iniciando F2 com set()
        f2.setRg("789");
        f2.setDepartamento("DTI");
        f2.setSalario(9000);
        f2.dataDeEntrada.setDia(11);  
        f2.dataDeEntrada.setMes(9);  
        f2.dataDeEntrada.setAno(1995);  
        f2.dataDeEntrada.setHora(8);  
        f2.dataDeEntrada.setMinuto(30);  
        f2.dataDeEntrada.setSegundo(49);  
        
        //Criando empresa e preenchendo os dados com set()
        Empresa e1 = new Empresa();
        e1.setNome("Sieg Docs");
        e1.setCnpj("456");
        e1.setTelefone("789");

        //Adiciona Funcionario na empresa manualmente
        e1.adiciona(f1);
        e1.adiciona(f2);

        //Laco para adicionar os funcionarios na empresa
        for(int i=0;i<9;i++)
        {
            Funcionario f = new Funcionario();
            e1.adiciona(f);
        }

        //Gera o ID do funcionario.
        e1.geraID();

        //Mostra a empresa e os funcionarios da mesma
        System.out.println("-----------------------------------");
        e1.mostraE();
        System.out.println("-----------------------------------");
        e1.mostraF();
        System.out.println("-----------------------------------");
        e1.checkF();
    }
}
