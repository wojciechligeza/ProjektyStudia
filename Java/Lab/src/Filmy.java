import java.io.Serializable;
        
public class Filmy implements Serializable{
    String nazwa;
    
    Filmy(String nazwa){
        this.nazwa = nazwa;
    }
    
    public void wypisz(){
        System.out.println(this.nazwa);
    } 
    
}
