public class ContaCorrente extends Conta {

    public ContaCorrente(Proprietario prop){
        super(prop);
    }

    public ContaCorrente(Proprietario prop, double balance){
        super(prop, balance);
    }
    
    // Questão 3
    public double taxation(double tax){
        // Questão 8
        return super.taxation(tax*2);
    }

    public void withdraw(double withdrawValue){
        if(super.getBalance() - withdrawValue >= 0){
            if(super.getBalance() - withdrawValue - 0.1 >= 0){
                super.setBalance(super.getBalance() - withdrawValue - 0.1);
                super.getProp().setMoneyInHands(super.getProp().getMoneyInHands() + withdrawValue);
                System.out.println("Sr.(a) " + this.getProp().getName() + ", valor sacado com sucesso ;)");
            }else{
                System.out.println("Sr.(a) " + this.getProp().getName() + ", saldo indisponível devido taxação :(");
            }
        }else{
            System.out.println("Sr.(a) " + this.getProp().getName() + ", saldo indisponível :(");
        }
    }

    public void tipoEspecifico(){
        System.out.println("Este objeto possui um tipo específico");
    }
}
