import java.util.Random;
public class cw1 {

    public static void main(String[] args) {
        Random r = new Random();

        int a = 15, b = 25;
        int x;
        double y, suma = 0;
        
        for (int i = 1; i <= 100; i++) {
            x = r.nextInt(b - a + 1) + a;
           suma=suma+x;
        }
     
        y = suma/100;
        System.out.println("Średnia to "+y);
        
        
    }
    
}
