import java.util.Random;

public class Tablice {
    
    public static void main(String[] args) {
      final int liczba_wierszy=20,liczba_kolumn=7;
      int tab[][] = new int[liczba_wierszy][liczba_kolumn];
      Random r = new Random();
      final int a=1,b=49;
      
      for(int w = 0;w < liczba_wierszy; w++)
         for(int k = 0;k < liczba_kolumn; k++)
          tab[w][k] = r.nextInt(b-a+1)+a;
      
      
      for(int w = 0;w < liczba_wierszy; w++){
         for(int k = 0;k < liczba_kolumn; k++)
           System.out.print( tab[w][k]+" ");
         System.out.println();
      }   
      
      
       int suma=0;
       for(int w = 0;w < liczba_wierszy; w++)
         for(int k = 0;k < liczba_kolumn; k++)
             if(w==k)
            suma = suma + tab[w][k];
         
       System.out.println("Suma elementów tablicy = "+suma); 
       
         
    }
    
}
