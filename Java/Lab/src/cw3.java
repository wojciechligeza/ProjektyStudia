/*
Prosze napisac program, który generuje 6 liczb cał. z zakresu 1 - 49
i w przypadku gdy ktoras jest rowna 13, napis "Wygraleś!"
 */
import java.util.Random;

public class cw3 {

    public static void main(String[] args) {
        Random r = new Random();

        int a = 1, b = 49;
        int x;
        boolean bylaTrzynastka = false;

        for (int i = 1; i <= 6; i++) {
            x = r.nextInt(b - a + 1) + a;
            System.out.print(x+" ");
            if (x == 13) 
                bylaTrzynastka = true;
        }
            System.out.println();
            if (bylaTrzynastka) 
                System.out.println("Wygrałeś!");
            
            else 
                System.out.println("Przegrałeś!");
            
    }
}
