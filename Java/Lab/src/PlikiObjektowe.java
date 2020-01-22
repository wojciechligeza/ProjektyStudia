import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.IOException;

public class PlikiObjektowe {

    public static void zapisz(){
        try{
            
            FileOutputStream fos = new FileOutputStream("filmy.dat");
            ObjectOutputStream out = new ObjectOutputStream(fos);
            
            Filmy film = new Filmy("Forrest Gump");
            out.writeObject(film);
            
            film = new Filmy("American Beauty");
            out.writeObject(film);
            
            out.close();
            fos.close();
        }catch(IOException e){
            System.out.println("Błąd");
        }
        
    }
    
    
    public static void odczyt(){
        
       try{ 
        try{
            FileInputStream fos = new FileInputStream("filmy.dat");
            ObjectInputStream in = new ObjectInputStream(fos);
             
            Filmy film;
            
            while(true){
                film = (Filmy)in.readObject();
                film.wypisz();
            }
          
           // in.close();
           // fos.close();            
        }catch(IOException e){
            System.out.println("Koniec pliku");
            // e.printStackTrace();
        }
       }catch(Exception e){
             System.out.println("Błąd");
    }
        
    }
    
    public static void main(String[] args) {
         zapisz();
         odczyt();
        
    }
    
}
