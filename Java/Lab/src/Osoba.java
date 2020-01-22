import java.io.RandomAccessFile;

/*
Prosze napisac klase, ktora umozliwia zbieranie danych o osobach
 */

public class Osoba {
    int lp;
    String imie;
    String nazwisko;
    
    Osoba(int lp, String imie, String nazwisko) { //bez void'a, bo nie wykryje konstruktora!
        this.lp = lp;
        this.imie=imie;
        this.nazwisko=nazwisko;
    }
    
    void wypisz() {
        System.out.println(this.imie+" "+this.nazwisko);
    }
    
    void zapisz() {

        try {
            RandomAccessFile plik = new RandomAccessFile("osoby.dat", "rw"); // 1. parametr to nazwa pliku, 2. to dostep do pliku, r -read, rw -read and write
            plik.seek(plik.length());
            //  System.out.println(plik.getFilePointer());
            plik.writeUTF(imie);
            plik.writeUTF(nazwisko);
            plik.close(); // zwolnienie bufora

        } catch (Exception e) { // obowiazkowo do zapisu instrukcja try catch
            e.printStackTrace();
        }
    }
    
    void odczyt() {

        String x;
            try {
                RandomAccessFile plik = new RandomAccessFile("osoby.dat", "rw");
                
                do{
                    
                this.imie = plik.readUTF();
                this.nazwisko = plik.readUTF();
                
                }while(plik.getFilePointer() < plik.length());
                
                plik.close();

            } catch (Exception e) {
                e.printStackTrace();
            }
           
        }

    void pokaz(){
  
      try{
          RandomAccessFile plik = new RandomAccessFile("osoby.dat","rw"); 
       
        if (plik.getFilePointer()<plik.length()){
            this.lp = plik.readInt();
            this.imie = plik.readUTF();
            this.nazwisko = plik.readUTF();
            this.wypisz();
        }
          plik.close();
          
      }catch(Exception e){
          e.printStackTrace();
      } 
    }
    
    
    void szukaj(int co){
           boolean b1=true,b2;
           
           try{
          RandomAccessFile plik = new RandomAccessFile("osoby.dat","rw"); 
       
          do{
            this.lp = plik.readInt();
            this.imie = plik.readUTF();
            this.nazwisko = plik.readUTF();
             b1 = plik.getFilePointer()<plik.length();
             b2 = (this.lp == co);
          }while(b1 && !b2);
          
          this.wypisz();
          plik.close();
          
      }catch(Exception e){
          e.printStackTrace();
      } 

    }
    
    
}
 
    

    