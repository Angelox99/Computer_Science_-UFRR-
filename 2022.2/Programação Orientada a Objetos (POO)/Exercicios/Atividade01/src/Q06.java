public class Q06 {
        public static void main(String[] args) throws Exception {
             double fatorial = 1;
            for (int n = 1; n <= 40; n++)
            {
                 fatorial = n;
    
                for(double j = (fatorial-1); j>=1; j--){
                    fatorial *= j;
                }

                //mostra o resultado
                System.out.println(n+"! = "+fatorial);
            }
        }
    }
/*A partir do 40! comecou a aparecer numeros grandes e negativos e ate zeros
isso provaavelment ocorre por exceder a capacidade de memoria do tipo INT,
ao colocar LONG ainda continua aparecendo numeros negativos mas o zeros pararam
provavelmente por ter capacidade de memoria maior que INT porem nao o necessario 
para nao aparecer numeros negativos, mas ao colocar DOUBLE os numeros negativos 
nao aparecem mais , provavelmente por DOUBLE ter um capacidade maior de memoria e
 a formatacao dos numeros ser flutuante com notacao cientifica(Pois aparecen "E" 
 no meio dos numeros)*/