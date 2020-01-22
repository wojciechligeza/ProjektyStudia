/*
Klasa o nazwie Towar, ktorej konstruktor dopisuje do pliku danych towary.bin, nazwe i cene towaru,
zmienne: String nazwa i double cena sa polami tej klasy inicjowanymi przez konstruktor.
Funkcja, która wypisuje towar o najwyższej cenie i podnosi cene pozostalych o 20%
 */
import java.io.RandomAccessFile;

public class Towar {
    
        String nazwa;
        double cena;

        Towar(String nazwa, double cena) {
          
            this.nazwa = nazwa;
            this.cena = cena;
        }
        
        void zapisz() {

            try {
                
                RandomAccessFile plik = new RandomAccessFile("towary.bin", "rw");
                plik.seek(plik.length());
                plik.writeDouble(this.cena);
                plik.writeUTF(this.nazwa);
                plik.close();

            } catch (Exception e) {
                
                e.printStackTrace();
            }
        }
        
        void max() {
            
            try {
                
                RandomAccessFile plik = new RandomAccessFile("towary.bin", "rw");
            
            } catch (Exception e) {
                
                e.printStackTrace();
            }
    
        }
} 