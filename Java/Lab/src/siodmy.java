/*Program, ktory generuje 6 przypadkowych malych liter alfabetu i wypisuje na ekran.
*/
import java.util.Random;
public class siodmy {

    public static void main(String[] args) {
        Random r = new Random();
        
    char znak;
    int x;
    final int a = (int)'a', b = (int)'z';
    
    
        for (int i = 1; i <= 6; i++) {
            x = r.nextInt(b - a + 1) + a;
            znak = (char) x;
            System.out.println(znak);
        }
   
    
    
    
    
        
    
    }
    
}