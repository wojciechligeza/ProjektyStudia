import java.util.Random;
public class Kolokwium
{

    static double ZadanieA() //funkcja, ktora zwraca pierwiastek sumy liczb umieszczonych na 5. wierszu tablicy
    {
        int liczbaWierszy =10, liczbaKolumn =10;
        int a=20, b=30;
        
        Random r = new Random();
        
        double suma=0;
        
        int tab[][] = new int [liczbaWierszy][liczbaKolumn];
        
        for (int k=0; k<liczbaKolumn; k++)
           for (int w=0; w<liczbaWierszy; w++)
           {
               tab[w][k]=r.nextInt(b-a+1)+a;
               if (w==5) suma+= tab[5][k];
           }
        return Math.sqrt(suma);
    }
    
    static String ZadanieB() // funkcja, ktora wyszukuje 1. słowo na "A"
    {
       String s="USA i MA Arystofesa i Aligorsa";
       String s2="";
     
       String tab[] = s.split(" ");
       
       int pierwszaLitera;
        
       for(int i=0; i<=tab.length; i++)
       {
            pierwszaLitera = tab[i].indexOf("A");
            if(pierwszaLitera==0)
            {
            s2=tab[i];
            break;
            }
       }
       return s2; 
    }       
    
    public static void main(String[] args)
    {
        
        System.out.println(ZadanieA());   
        
        System.out.println(ZadanieB());
        
    }
    
}
