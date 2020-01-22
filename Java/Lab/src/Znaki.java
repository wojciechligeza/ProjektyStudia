/* Proszę napisać program 
który generuje 6 przypadkowych małych 
liter alfabetu i wypisuje je na ekran.
*/

public class Znaki {


    public static void main(String[] args) {
     char znak;
     int kod;

     znak  = 'a';
     kod = (int)znak;
     
     znak = (char)kod;
     
     System.out.println(znak+" "+kod);
        
        
    }
    
}
