import java.io.FileWriter;
import java.io.FileReader;
import java.io.PrintWriter;
import java.io.BufferedReader;
import java.io.IOException;

public class PlikiTekstowe {

  
    static void zapisz_znaki(String s){
               
       try{
         FileWriter fw = new FileWriter("plik.txt",false);
           
         for(int i=0;i<s.length();i++)
               fw.write(s.charAt(i));  
         
         fw.close();
           
       }catch(IOException e){
           e.printStackTrace();
           
       }
        
    }
    
    static void odczytaj_znaki(){
        char znak;
        int kod_znaku;
        try{
            FileReader fr = new FileReader("plik.txt");
            do{
              kod_znaku = fr.read();
              if(kod_znaku != -1){      
                znak = (char)kod_znaku;
                System.out.println(znak);
              }
            }while(kod_znaku != -1);
            
        }catch(IOException e){
            e.printStackTrace();
        }
    
    }   
        
        
    static void zapis_wiersza(String s){
        
        try{
            PrintWriter pr = new PrintWriter(new FileWriter("plik.txt",true));
            pr.println(s);
            pr.close();
        }catch(IOException e){
            e.printStackTrace();
        }  
    }
    
    static void odczyt_wierszy(){
        String s;
        
        try{
           BufferedReader br = new BufferedReader(new FileReader("plik.txt"));
            
           do{
             s =br.readLine();
             if(s != null)
                System.out.println(s);
           }while(s != null);
           br.close();
         }catch(IOException e){
            e.printStackTrace();
        }
    }
    
    
    
     static void oblicz_oceny(){
        String s;
        double suma=0;
        double ocena=0;
        int ile=0;
        String tab[];
        try{
           BufferedReader br = new BufferedReader(new FileReader("plik.txt"));
           
           do{
             s =br.readLine();
             if(s != null){
                 ile++;
                 tab = s.split("-");
                 ocena = Double.parseDouble(tab[2]);
                 suma = suma + ocena;
             }
               
           }while(s != null);
           br.close();
           
           System.out.println(suma/ile);
         }catch(IOException e){
            e.printStackTrace();
        }
    }
    
    
    public static void main(String[] args) {
       
        //zapis_wiersza("Witaj lecie");
        //odczyt_wierszy();
        oblicz_oceny();
    }
    
}
