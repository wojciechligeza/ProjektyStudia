import java.util.Random;

public class cw4 {

    public static void main(String[] args) {
        Random r = new Random();

        int a = -49, b = 49;
      
        int x=0, l=0;
        double s = 0;

        for (int i = 1; i <= 6; i++) {
            x = r.nextInt(b - a + 1) + a;
            System.out.print(x + " ");
            if (x < 0) 
               s = s + x;
            l++;
        }
            System.out.println(x/l);
    
    }
}