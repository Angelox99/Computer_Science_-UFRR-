public class IMC {
    public static void main(String[] args) {
      double IMC , peso = 80.0, altura=1.62;
      IMC=peso/Math.pow(altura, 2);
      System.out.printf("%.2f",IMC);
    }
  }
  