/*
Program, ktory wypelnia tablice kwadratowa 10 wierszy*10kolumn liczbami przypadkowymi rzeczywistymi z zakresy minus pi do pi
i oblicza sumy liczb na głównej i przeciwstawnej tablicy
 */
import java.util.Random;

public class Zadanie2 {

    public static void main(String[] args) {

        final int liczba_wierszy = 10, liczba_kolumn = 10;
        double tab[][] = new double[liczba_wierszy][liczba_kolumn];
        Random r = new Random();
        final double a = -Math.PI, b = Math.PI;
        double suma = 0;

        for (int w = 0; w < liczba_wierszy; w++) 
            for (int k = 0; k < liczba_kolumn; k++) 
                tab[w][k] = (b - a) * r.nextDouble() + a;
           

        for (int w = 0; w < liczba_wierszy; w++) {
            for (int k = 0; k < liczba_kolumn; k++) {

                if (w == k) {
                    suma = suma + tab[w][k];
                } else if (w + k == 9) {
                    suma = suma + tab[w][k];
                }

            }
        }

        System.out.println("Suma głównej i przeciwstawnej tablicy to " + suma);

    }

}