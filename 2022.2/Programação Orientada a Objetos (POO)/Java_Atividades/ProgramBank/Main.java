class Main {
    public static void main(String[] args) {

        // Instanciando Objetos 

        Proprietario p1 = new Proprietario("Felipe", 1000);
        Conta c1 = new Conta(p1, 1000);

        Proprietario p2 = new Proprietario("Alex", 1000);
        ContaCorrente cc1 = new ContaCorrente(p2, 1000);

        Proprietario p3 = new Proprietario("Willian", 1000);
        ContaPoupanca cp1 = new ContaPoupanca(p3, 1000);


        // Questão 5 parte 1
        Proprietario p4 = new Proprietario("Sarah", 1000);
        Conta c2 = new Conta(p4, 1000);

        Proprietario p5 = new Proprietario("João", 1000);
        Conta cc2 = new ContaCorrente(p5, 1000);

        Proprietario p6 = new Proprietario("Fernando", 1000);
        Conta cp2 = new ContaPoupanca(p6, 1000);


        Bank br = new Bank("Banco de Roraima", 0.01, c1, cc1, cp1);
        
        Bank bb = new Bank("Banco do Brasil", 0.1, c2, cc2, cp2);


        // Trabalhando com Objetos

        // Questão 5 parte 2

        // cc1.tipoEspecifico(); Retorna 'Este objeto possui um tipo específico'
        // cc2.tipoEspecifico(); Dá Erro
        // cp1.tipoEspecifico(); Retorna 'Este objeto possui um tipo específico'
        // cp2.tipoEspecifico(); Dá Erro

        // Questão 5 Resposta: Ao declarar uma variável como um tipo menos específico o objeto limita-se aos atributos e métodos
        // presentes na classe do tipo, logo, os objetos cc2 e cp2 dão erro ao chamar o método 'tipoEspecifico()', pois os mesmos 
        // não existem dentro da classe Conta
        
        br.chargeTaxation(); // Questão 4, Questão 6 e Questão 7

        bb.chargeTaxation(); 

    }
  }