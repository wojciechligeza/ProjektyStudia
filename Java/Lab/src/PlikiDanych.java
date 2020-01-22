import java.io.RandomAccessFile; // * - wszystkie klasy z biblioteki

public class PlikiDanych {

    static void zapis(int x) {

        try {
            RandomAccessFile plik = new RandomAccessFile("Student.dat", "rw"); // 1. parametr to nazwa pliku, 2. to dostep do pliku, r -read, rw -read and write
            plik.writeInt(x);
            plik.close(); // zwolnienie bufora

        } catch (Exception e) { // obowiazkowo do zapisu instrukcja try catch
            e.printStackTrace();
        }
    }

    static void dopisz(int x) {

        try {
            RandomAccessFile plik = new RandomAccessFile("Student.dat", "rw"); // wskaznik jest ustawiony zawsze na poczatku
            plik.seek(plik.length()); // ustawienie wskaznika na koniec pliku, by nie nadpisywac tego, co było
            plik.writeInt(x); // plik.writeUTF("String");
            plik.close();

        } catch (Exception e) { // obowiazkowo do zapisu instrukcja try catch
            e.printStackTrace();
        }
    }

    static int odczyt() {

        int x = -99;
        try {
            RandomAccessFile plik = new RandomAccessFile("Student.dat", "rw");
            do {
            x = plik.readInt();
            } while (plik.getFilePointer() < plik.length());
            plik.close();
            
        } catch (Exception e) {
            e.printStackTrace();
        }
        return x;
    }

    public static void main(String[] args) {

        zapis(4);
        System.out.println(odczyt());
    }
}
