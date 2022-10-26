public class ContaPoupanca extends Conta {
    
    public ContaPoupanca(Proprietario prop){
        super(prop);
    }
    public ContaPoupanca(Proprietario prop, double balance){
        super(prop, balance);
    }

    // Questão 3
    public double taxation(double tax){
        // Questão 8
        return super.taxation(tax*3);
    }

    public void tipoEspecifico(){
        System.out.println("Este objeto possui um tipo específico");
    }

}
