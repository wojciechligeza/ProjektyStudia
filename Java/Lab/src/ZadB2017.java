import java.io.RandomAccessFile;

public class ZadB2017 {
    
    String nazwaTowaru;
    double cena;
    int liczbaSztuk;
    
    ZadB2017(String nazwaTowaru, double cena, int liczbaSztuk) {
        this.nazwaTowaru=nazwaTowaru;
        this.cena=cena;
        this.liczbaSztuk=liczbaSztuk;
    
    
    
        try {
                RandomAccessFile plik = new RandomAccessFile("towary.dat", "rw");
                do{
                    this.nazwaTowaru=plik.readUTF();
                    this.cena=plik.readDouble();
                    this.liczbaSztuk=plik.readInt();
                }while(plik.getFilePointer() < plik.length());
                plik.close();

            } catch (Exception e) { e.printStackTrace(); }
        
        
      
    }
    
    static int Funkcja() {
        
        return ;
    }

    public static void main(String[] args) {
        
        Funkcja( , );
    } 
}