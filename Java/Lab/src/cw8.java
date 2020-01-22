import java.io.RandomAccessFile;
import java.io.IOException;

public class cw8 {

    int funkcja(String nazwa_pliku, String jaka_nazwa ){
        String nazwa_towaru;
        int liczba_sztuk=0;
        double cena;
        int ile=0;
  
       try{
           RandomAccessFile f = new RandomAccessFile(nazwa_pliku,"rw");
           do{
             nazwa_towaru = f.readUTF();
             liczba_sztuk = f.readInt();
             cena = f.readDouble();
             if(nazwa_towaru.equals(jaka_nazwa))
                 ile = ile + liczba_sztuk;
             
           }while(f.getFilePointer()<f.length());
           
           
       }catch(IOException e){
           System.out.println("Błąd wej/wyj");
       }
       
        return ile;
    }
    
    public static void main(String[] args) {
     
       
    }
    
}
