public class Conta {

    private double balance = 0;
    private Proprietario prop;
    

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public double getBalance() {
        return this.balance;
    }

    public void setProp(Proprietario prop) {
        this.prop = prop;
    }

    public Proprietario getProp() {
        return this.prop;
    }


    public Conta(Proprietario prop) {
        setProp(prop);
    }
    public Conta(Proprietario prop, double balance) {
        setProp(prop);
        setBalance(balance);
    }
    

    //  Questão 1
    public void deposit(double depositValue){
        if(this.getProp().getMoneyInHands() >= depositValue){
            this.setBalance(this.getBalance() + depositValue);
            this.getProp().setMoneyInHands(this.getProp().getMoneyInHands() - depositValue);
            System.out.println("Sr.(a) " + this.getProp().getName() + ", valor depositado com sucesso ;)");
        }else{
            System.out.println("Sr.(a) " + this.getProp().getName() + ", o(a) não possui o valor em mãos :(");
        }
    }
    
    public void withdraw(double withdrawValue){
        if(this.getBalance() - withdrawValue >= 0){
            this.setBalance(this.getBalance() - withdrawValue);
            this.getProp().setMoneyInHands(this.getProp().getMoneyInHands() + withdrawValue);
            System.out.println("Sr.(a) " + this.getProp().getName() + ", valor sacado com sucesso ;)");
        }else{
            System.out.println("Sr.(a) " + this.getProp().getName() + ", saldo indisponível :(");
        }
    }

    // Questão 2
    public double taxation(double tax){
        double finalValueBalance = this.getBalance()*tax;
        this.setBalance(this.getBalance() - finalValueBalance);
        return finalValueBalance;
    }

}
