/*
 Proszę naoisać program, który generuje sześć 
liczb całkowitych przypadkowych z zakresi 1 - 49
i w przypadku gdy, którakolwiek z wygenerowanych liczb 
jest równa 13, to wypisuje na konsolę napis
"Wygrałeś"
 */

import java.util.Random;

public class mojecw1 {

 
    public static void main(String[] args) {
        Random r = new Random();
        int a=-49,b=49;
        int x;
        double s=0;
        
        for(int i=1;i<=6;i++){
         x = r.nextInt(b-a+1)+a;
         System.out.print(x+" ");
         if(x < 0)
           s = s + x;
        }
        
        System.out.println(s/6);

    }
    
}
