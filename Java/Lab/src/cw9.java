import java.util.Random;


public class cw9 {

  
    public static void main(String[] args) {
     final int a = -20;
       final int b = 200;
       final double aa = -100;
         final double bb = 100;  
         double y;
         
       Random r = new Random();
       int x;
       int min = b;
       int maks = a;
       int iloczyn=1;
       
     do{
         x = r.nextInt(b-a+1)+a;
         if(x>maks)
             maks = x;
         if(x < min)
             min =x;
         if( x%2 == 0)
            iloczyn = iloczyn*x; 
     }while(x!=0);
     
     for(int i=1;i<=Math.abs(maks);i++)
         y = (bb-aa)*r.nextDouble()+aa;
    }
    
}
