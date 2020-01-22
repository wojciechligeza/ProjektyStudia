/*
Zad B1 2014
 */
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.RandomAccessFile;

public class ZadEgzaminB1 {
    
    static void Emerytura()
    {
    String s;
    String k[];
    try{
        BufferedReader br = new BufferedReader(new FileReader("plik.txt"));
        RandomAccessFile man = new RandomAccessFile("men.dat", "rw");
        RandomAccessFile woman = new RandomAccessFile("kobiety.dat", "rw");
        
        do{
            s = br.readLine();
            System.out.println(s);
            if(s != null)
            {
                k = s.split("-");
                if(k[2].charAt(0)=='K')
                {
                woman.writeUTF(k[1]);
                woman.writeUTF(Integer.toString((65-Integer.parseInt(k[3]))*12));
                }
                if(k[2].charAt(0)== 'M')
                {
                man.writeUTF(k[1]);
                man.writeUTF(Integer.toString((67-Integer.parseInt(k[3]))*12));
                }
                }
            }while (s != null);
        man.close();
        woman.close();
        br.close();
        
        } catch (IOException e)
        {
        e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        Emerytura();
    }
    
}
