//Funkcja, ktora zwraca losowo słowa ze zdania podanego jako parametr



public class Funkcje {
    
    
    
    public static void main(String[] args) {
        
        Oblicz o = new Oblicz();
        int x;
        double y;
        x = o.sumka();
        y = Math.sin(30);
        x = o.silnia_r(5);
        
        o.wyswietl(""+o.moje_pi);
        o.wyswietl(o.słowo("Ala ma kota i psa"));
        
    }
    
}
