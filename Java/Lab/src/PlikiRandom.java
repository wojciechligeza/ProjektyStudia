package plikirandom;

import java.io.IOException;
import java.io.RandomAccessFile;
import java.util.Random;


public class PlikiRandom {

    public static void main(String[] args) {
        Random e = new Random();
        Runtime r = Runtime.getRuntime();
        int liczba = 0;
        int suma = 0;
        double srednia = 0;
        try {
            RandomAccessFile f = new RandomAccessFile("D:/dane.dat", "rw");
            for (int i=0;i<10;i++){
              liczba = e.nextInt(100);
              f.writeInt(liczba);
            }
            f.seek(0);
            while(f.getFilePointer()<f.length()){
                liczba=f.readInt();
                suma+=liczba;
                System.out.print(liczba+", ");
            }
            System.out.println();
            srednia=suma/10;
            System.out.println("Śrenia = "+srednia);
            f.seek(0);
            while(f.getFilePointer()<f.length()){
                liczba=f.readInt();
                if(liczba>srednia){
                    liczba=-liczba;
                    f.seek(f.getFilePointer()-4);
                    f.writeInt(liczba);
                }
            }
            f.seek(0);
            while(f.getFilePointer()<f.length()){
                liczba=f.readInt();
                System.out.print(liczba+", ");
            }
            f.close();
        } catch (IOException ex) {
            System.out.println("Błąd pliku");
        }

    }

}
