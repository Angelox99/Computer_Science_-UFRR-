public class Proprietario {
    private String name;
    private double moneyInHands;

    public Proprietario(String name, double moneyInHands) {
        this.name = name;
        this.moneyInHands = moneyInHands;
    }
    
    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return this.name;
    }

    public void setMoneyInHands(double moneyInHands) {
        this.moneyInHands = moneyInHands;
    }

    public double getMoneyInHands() {
        return this.moneyInHands;
    }
}
