/*
Proszę napisać program, który kopiuje plik tekstowy
o nazwie plik1.txt do pliku tekstowego plik2.txt
z pominięciem przecinków.
 */

import java.io.FileWriter;
import java.io.FileReader;
import java.io.IOException;

public class Cw11 {


    public static void main(String[] args) {
        int kod;
        char znak;

        try {
            FileReader fr = new FileReader("plik1.txt");
            FileWriter fw = new FileWriter("plik2.txt", false);

            do {
                kod = fr.read();
                znak = (char) kod;
                if (znak != ',') {
                    fw.write(znak);
                }
            } while (kod != -1);
            fr.close();
            fw.close();

        } catch (IOException e) {
            e.printStackTrace();
        }

    }

}
