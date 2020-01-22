import java.io.RandomAccessFile;

public class PolskiePlyty 
{   
    String tytul;
    String wykonawca;
    String album;
    String rok;
    
    PolskiePlyty(String tytul, String wykonawca, String album, String rok)
    {
        this.tytul = tytul;
        this.wykonawca = wykonawca;
        this.album = album;
        this.rok = rok;
    }
    
    void zapis()
    {
        try
        {
            RandomAccessFile plik = new RandomAccessFile("Biblioteka polskich płyt.dat","rw");
            
            plik.seek(plik.length());
            plik.writeUTF(tytul);
            plik.writeUTF(wykonawca);
            plik.writeUTF(album);
            plik.writeUTF(rok);
            
            plik.close();
        }
        catch (Exception e)
        {
            e.printStackTrace();
        }
    }
    
    void odczyt()
    {        
        try
        {
            RandomAccessFile plik = new RandomAccessFile("Biblioteka polskich płyt.dat","rw");
            
            do
            {          
                this.tytul=plik.readUTF();
                this.wykonawca=plik.readUTF();
                this.album=plik.readUTF();
                this.rok=plik.readUTF();
            }while(plik.getFilePointer()< plik.length());
                plik.close();
            
        } 
        catch(Exception e)
        {
            e.printStackTrace();
        }
    }
}