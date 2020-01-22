import java.util.Random;

public class cw2 {

    public static void main(String[] args) {
        Random r = new Random();

        double a = 1.25, b = Math.PI, x, y, suma=0;
        

        for (int i = 1; i <= 20; i++) {
            x = (b - a) * r.nextDouble() + a;
            suma = suma + x;
        }

        y = suma / 100;
        System.out.println("Średnia to " + y);

    }

}
