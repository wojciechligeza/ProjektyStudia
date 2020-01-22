/*
program, który generuje liczby od 1.5 do pi, az ich suma nie przekroczy 100.
 */

import java.util.Random;

public class cw5 {

    public static void main(String[] args) {
        Random r = new Random();
       
        
        final double a=1.5, b=Math.PI;
        double x=0, suma=0;
        
        
        while(suma<=100) {
            x = (b - a) * r.nextDouble() + a;
            System.out.print(x);
            System.out.println();
            suma=suma+x;
        }
        System.out.println();
    }
    
}
