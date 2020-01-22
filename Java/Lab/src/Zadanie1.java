/*
progrmam, ktory generuje liczby rzeczywiste z zakresu -Pi do Pi
tak długo aż ich wartosc bewzgledna sredniej nie spadnie poznizej 0.2
 */

import java.util.Random;
public class Zadanie1 {

    public static void main(String[] args) {
        Random r = new Random();
        
        
        final double a = -(Math.PI), b = Math.PI;
        double x = 0, suma = 0, srednia=0;
        int y=0;

        do{          
            x = (b - a) * r.nextDouble() + a;
            y++;
            suma += x;
            srednia= suma/y;
            System.out.println(srednia);
            
        
        }while ( Math.abs(srednia) >= 0.2);
        
    
        System.out.println();
    }   
    }
