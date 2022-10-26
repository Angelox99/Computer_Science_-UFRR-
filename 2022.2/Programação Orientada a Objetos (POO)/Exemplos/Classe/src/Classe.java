public class Classe
{ 
    public static void main(String[] args) throws Exception 
    {
        Conta minhaConta;
        minhaConta = new Conta();

        minhaConta.limite = 200;
        minhaConta.dono = "Angelo Ferro";
        minhaConta.numero = 1;
        minhaConta.saldo =2000;


        System.out.println(minhaConta.dono);
        System.out.println(minhaConta.numero);
        System.out.println(minhaConta.saldo);
        System.out.println(minhaConta.limite);

    }
        
}
