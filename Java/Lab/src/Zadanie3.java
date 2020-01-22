/*
Program, ktory wypelnia tablice kwadratowa przypadkowymi małymi literami alfabetu od k do p.
 */
import java.util.Random;

public class Zadanie3 {

    public static void main(String[] args) {

        final int liczba_wierszy = 10, liczba_kolumn = 10;
        char tab[][] = new char[liczba_wierszy][liczba_kolumn];
        Random r = new Random();
        
        final int a = (int)'k', b = (int)'p';

        for (int w = 0; w < liczba_wierszy; w++) 
            for (int k = 0; k < liczba_kolumn; k++) 
                tab[w][k] = (char) (r.nextInt(b - a + 1) + a);
        
            
       

        for (int w = 0; w < liczba_wierszy; w++) {
            for (int k = 0; k < liczba_kolumn; k++) {
             System.out.print(tab[w][k]+" ");
             
            }
            System.out.println();
    }

}
}