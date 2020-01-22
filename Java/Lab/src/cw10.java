/*
Proszę napisać funkcję, która obliczy 
i zwróci do programu głównego liczbę 
spacji poprzedzonych przecinkiem, występujących
w pliku tekstowym o nazwie plik.txt
 */

import java.io.FileReader;
import java.io.IOException;

public class cw10 {

static void spacje()
{
        int kod;
        char znak1;
        char znak2;
        int liczba = 0;

        try {
            FileReader fr = new FileReader("plik1.txt");
            kod = fr.read();
            znak1 = (char) kod;
            kod = fr.read();
            znak2 = (char) kod;
            do {

                if (znak1 == ',' && znak2 == ' ') {
                    liczba++;
                }
                znak1 = znak2;
                kod = fr.read();
                znak2 = (char) kod;
            } while (kod != -1);
            fr.close();
            System.out.println(liczba);
        } catch (IOException e) {
            e.printStackTrace();
        }

    }
    
    public static void main(String[] args) {
        
     spacje();   
     
}
}