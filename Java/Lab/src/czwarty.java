import java.util.Random;
public class czwarty
{

    public static void main(String[] args)
    {
        Random r = new Random();
        
        int a=4, b=13;
        double aa=4.0, bb=13.0;
        
        int x;
        for (int j = 1; j <= 10; j++) {
            for(int i=1; i<=6; i++) {
            x = r.nextInt(b-a+1)+a;
            System.out.print(x+" ");
            //System.out.println("Liczba "+i+". : "+x);
            }
        System.out.println();
        }
       //double y = (b-a)*r.nextDouble()+a;
        
       //System.out.println(x+" "+y);
    }
    
}
