public class Vehicle {

    private boolean on = false;
    private String name;

    public void setOn(boolean on) {
        this.on = on;
    }

    public boolean getOn() { // === isLigado
        return this.on;
    }
    
    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return this.name;
    }


    public Vehicle(String name) {
        this.name = name;
    }


    public void turnOn(){ // === ligar
        setOn(true);
        System.out.println(getName() + " ligado(a)");
    }
    
    public void turnOff(){ // === desligar
        setOn(false);
        System.out.println(getName() + " desigado(a)");
    }

}
