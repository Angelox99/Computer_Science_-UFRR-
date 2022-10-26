public class Bank {
    
    // Questão 6, Questão 9 e Questão 10

    private String name;
    private double balance = 0;
    private double totalAccountsBalance = 0;
    private double fixTax;
    private Conta[] accounts = new Conta[100];


    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return this.name;
    }
    
    public void setBalance(double balance) {
        this.balance = balance;
    }

    public double getBalance() {
        return this.balance;
    }
    
    public void setTotalAccountsBalance(double totalAccountsBalance) {
        this.totalAccountsBalance = totalAccountsBalance;
    }

    public double getTotalAccountsBalance() {
        return this.totalAccountsBalance;
    }
    
    public void setFixTax(double fixTax) {
        this.fixTax = fixTax;
    }

    public double getFixTax() {
        return this.fixTax;
    }

    public Conta[] getAccounts(){
        return this.accounts;
    }

    public Conta getAccounts(int index){
        return this.accounts[index];
    }

    public void setAccounts(Conta c, int index){ // Questão 10
        this.accounts[index] = c;
    }

    public void addAccount(Conta c){ // Questão 10
        int coord = -1;
        for(int i=0; i < this.getAccounts().length || this.getAccounts(i-1) != null; i++) {
            if (this.getAccounts(i) == null) { coord = i; }
        }

        if (coord > -1) {
            this.setAccounts(c, coord);
        } else {
            System.out.print("Quantidade máxima de Contas");
        }
    }

    public Bank(String name, double fixTax, Conta... c) {
        this.setName(name);
        this.setFixTax(fixTax);

        double totalAccountsBalance = 0;
        for (int i = 0; i < c.length; i++) { // Questão 10
            
            int j = 0;
            int coord = -1;
            while (j < this.getAccounts().length) {
                if (this.getAccounts(j) == null) { coord = j; break; }
                j++;
            }
            
            if (coord > -1) {
                this.setAccounts(c[i], coord);
                totalAccountsBalance += c[i].getBalance();
            } else {
                System.out.print("Quantidade máxima de Contas");
            }
        }

        setTotalAccountsBalance(totalAccountsBalance);
    }


    public void chargeTaxation(){ // Questão 6 e Questão 9 parte 1
        System.out.println("Valor arrecadado pelo " + this.getName() + " pré taxação: " + this.getBalance());
        System.out.println("Montante de saldo de contas do " + this.getName() + " pré taxação: " + this.getTotalAccountsBalance());
        System.out.println("");
        
        double moneyFormTax = 0;
        double totalAccountsBalance = 0;
        for(int i=0; i < this.getAccounts().length; i++){
            if(this.getAccounts(i) != null){
                System.out.println("Saldo antigo da conta do(a) Sr(a). " + this.getAccounts(i).getProp().getName() + ": " + this.getAccounts(i).getBalance());

                moneyFormTax += this.getAccounts(i).taxation(this.getFixTax());
                totalAccountsBalance += this.getAccounts(i).getBalance();

                System.out.println("Saldo após taxação da conta do(a) Sr(a). " + this.getAccounts(i).getProp().getName() + ": " + this.getAccounts(i).getBalance());
                System.out.println("");
            }
        }
        this.setBalance(moneyFormTax);
        this.setTotalAccountsBalance(totalAccountsBalance);

        System.out.println("Valor arrecadado pelo " + this.getName() + " após taxação: " + this.getBalance());
        System.out.println("Montante de saldo de contas do " + this.getName() + " após taxação: " + this.getTotalAccountsBalance());
        System.out.println("");
    }
    // Questão 9 Resposta: Não seria nescessário modificar o método 'chargeTaxation()' desde que o método 'taxation()'
    // da classe ContaInvestimento, por conta do seu nível de complexidade, ainda continuasse utilizando somente o
    // parâmetro de percentual de taxação fixa da classe Bank como parâmetro, porém, caso fosse necessário o uso de 
    // outros parâmentros, o métedo precisaria ser modificado.
    
    public int totalAccounts(){ // Questão 10
        for(int i=0; i < this.getAccounts().length; i++) {
            if (this.getAccounts(i) == null) { return i; }
        }
        return this.getAccounts().length;
    }

}
