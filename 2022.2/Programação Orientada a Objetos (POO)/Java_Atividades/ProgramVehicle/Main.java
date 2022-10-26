class Main {
    public static void main(String[] args) {

        //  Atividade Extra 2
        Automovel at = new Automovel();
        Motocicleta mt = new Motocicleta();
        Onibus on = new Onibus();

        at.turnOn();
        mt.turnOn();
        on.turnOn();
        
        System.out.println();
        
        System.out.println(at.getOn());
        System.out.println(mt.getOn());
        System.out.println(on.getOn());
        
        System.out.println();
        System.out.println();
        
        at.turnOff();
        mt.turnOff();
        on.turnOff();
        
        System.out.println();
        
        System.out.println(at.getOn());
        System.out.println(mt.getOn());
        System.out.println(on.getOn());

    }
  }