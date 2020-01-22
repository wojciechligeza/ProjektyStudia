/*
 *Student
 */
import java.util.Random;
import java.io.FileReader;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.RandomAccessFile;


public class Kolokwium2 {
    
    
    int Zadnie1() {
        
        final int a=-10;
        final int b=10;
        int tab[]=new int[5];
        Random r = new Random();
        int min=-10;
        for(int i=0;i<5;i++)
        {
            tab[i]=r.nextInt(b-a+1)+a;
            if(tab[i]<min) min=tab[i];
        }
        return min;
    }
    
    double Zadanie2() {
        
        String s;
        int licznik=0;
        double suma=0;
        double srednia=0;
        double liczba;
        String tab[];
        
        try{
            
            BufferedReader br = new BufferedReader(new FileReader("list.txt"));
            do{
                s=br.readLine();
                tab=s.split(" ");
                liczba=Double.parseDouble(tab[3]);
                suma+=liczba;
                licznik++;
            }while(s!=null);
            srednia=suma/licznik;
            br.close();
            
        }catch (IOException e) { e.printStackTrace(); }
        
        return srednia;
    }
    
}

class Zawody {
    
    String imie;
    String nazwisko;
    double punkty;
    double metry;

    Zawody(String imie, String nazwisko, double punkty, double metry) {
        
        this.imie=imie;
        this.nazwisko=nazwisko;
        this.punkty=punkty;
        this.metry=metry;
        
        try{
            RandomAccessFile plik = new RandomAccessFile("Zawody.dat", "rw");
            long poz;
            
            do{
                
                this.imie=plik.readUTF();
                this.nazwisko=plik.readUTF();
                poz = plik.getFilePointer();
                this.punkty=plik.readDouble();
                this.metry=plik.readDouble();

                this.punkty=1.8*metry;
                plik.seek(poz);
                plik.writeDouble(this.punkty);
                this.metry=plik.readDouble();
                
            }while (plik.getFilePointer() < plik.length());
            
            plik.close();
            
            }catch (Exception e) { e.printStackTrace(); }
            
        }
        
    }