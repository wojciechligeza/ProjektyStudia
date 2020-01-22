
import java.util.Random;
        
public class Szósty {


    public static void main(String[] args) {
     Random r = new Random();
     int x;
     int a=13,b=27;
     double aa=1.0, bb=49.0;
     boolean c;
     double y;
     double srednia=0.0;
     double suma=0;
     
    for(int j=1;j<=10;j++){
     for(int i=1;i<=10;i++){
        x = r.nextInt(b-a+1)+a;
        System.out.print(x+" ");
        suma = suma + x;
     }
      System.out.println();   
    }
      srednia = suma/100.0;
      System.out.println("Średnia ="+srednia);   
      
     c = r.nextBoolean();
     System.out.println(bb);
     
     y = (bb-aa)*r.nextDouble()+aa;
     System.out.println(y);
    
    }
    
}
