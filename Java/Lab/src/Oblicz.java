
import java.util.Random;

public class Oblicz
{
    double moje_pi=7.435;
    
 String słowo(String zdanie) {
        String s = "";
        Random r = new Random();
        final int a = 0;
        
        String[] tab = zdanie.split(" ");
        final int b = tab.length - 1;
        s = tab[r.nextInt(b - a + 1) + a];
        
        return s;
    }
    
     int sumka() {
        int suma = 0;
        for (int i = 1; i <= 10; i++) {
            suma = suma + i;
        }
        return suma;
    }
    
     void wyswietl(String co) {
        System.out.println(co);
    }
    
     int silnia_i(int n) //iteracyjna
    {
        int s = 1;
        
        for (int i = 1; i < n; i++) {
            s = s * 1;
        }
        
        return s;
    }
    
     int silnia_r(int n) //rekurencyjna
    {
        if(n==0)
            return 1;
        else
           return silnia_r(n-1)*n;
    }    
    
}
