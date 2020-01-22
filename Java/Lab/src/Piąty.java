
public class Piąty {

    public static void main(String[] args) {
    boolean b;
       
       b = true; 
       b = false;
        
       b = (4 == 7) || (4 != 5);
       
       int x=4, y=8;
       
       b = (x <= y) && (x > 5) || (x == 8);
       
       b = (x != y);
       b = !(x == y);
       
       if( !(x == y) ){  
         System.out.println("TAK1");
         System.out.println("TAK2");
       }
       else
         System.out.println("NIe"); 
       
       int s=0;
       if(x>0)
           s = s + x;
       
    }
     
}
