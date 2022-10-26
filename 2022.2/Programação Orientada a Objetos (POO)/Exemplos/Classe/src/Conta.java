public class Conta {
    
        int numero;
        String dono;
        double saldo;
        double limite;
        public void sacar(double valor)
        {
            this.saldo = this.saldo - valor;
        }
    
}
