/* package zad2.pkg0.pkg2013; */

import java.io.*;

public class Zad202013 {

    static void Kompresuj( String plikWe, String plikWy ) throws IOException 
    { int nrZn,
          ileZn;
    
      char zn;   
      String łańcuch;
      BufferedReader     wej = null;
      ObjectOutputStream wyj = null;
      
        try{
            wej = new BufferedReader(
                    new FileReader( plikWe ));
            wyj = new ObjectOutputStream( 
                    new BufferedOutputStream( 
                      new FileOutputStream( plikWy )));
                       
            while( (łańcuch = wej.readLine()) != null)
            {   System.out.println(łańcuch);
                zn    = łańcuch.charAt(0);
                ileZn = 1;
                for( nrZn = 1; nrZn < łańcuch.length(); nrZn++)
                  if( łańcuch.charAt(nrZn) == zn) ileZn++;
                  else{
                      System.out.println(zn + " --> " + ileZn);
                      wyj.writeObject( new Obiekt( zn, ileZn ));
                      zn = łańcuch.charAt(nrZn);
                      ileZn = 1;
                      }
                System.out.println(zn + " --> " + ileZn); 
                wyj.writeObject( new Obiekt( zn, ileZn ));
                wyj.writeObject( new Obiekt( '\r', 1 ));
            }      
        }
        catch( IOException e ){
           System.out.println(" Błąd1 " + e.toString()); 
        }
        finally{
            if( wej != null) wej.close();
            if( wyj != null) wyj.close();
        }
    }
    
    public static void main(String[] args){// throws IOException {
      String nazwa = "Obiekty";
      Obiekt ob;
      ObjectInputStream in = null;
      
      try{
          Kompresuj("Plik.txt", nazwa);
          
           System.out.println("Sprawdzenie:");
           in = new ObjectInputStream( 
                  new BufferedInputStream( 
                    new FileInputStream( nazwa )));
           while( true ){
               ob = (Obiekt)in.readObject();
               
               for( int lZn = 1; lZn <= ob.licz; lZn++ ){
                 System.out.print( ob.znak );
               }
               System.out.println();
           } 
      }   
      catch( EOFException e){ System.out.println(" Koniec pliku");}       
      catch( IOException  e){ System.out.println(" Błąd2 ");}       
      catch( Exception    e){ System.out.println(" Błąd3 ");}       
     // finally{ if( in != null) in.close();}
      System.out.println(" O.K. " );
    }
}

class Obiekt implements Serializable
{
    char znak;
    int licz;
    Obiekt( char znak_, int licz_ )
    { znak = znak_;
      licz = licz_;
        
    }
}


//package zad1.pkg0.pkg2013;

class Zad102013 {

    public static void main(String[] args) {
        BufferedReader wej = new BufferedReader(new InputStreamReader(System.in));
        int [] liczniki = new int[256];
        int [] znaki    = new int[256];
        
        for( int nr = 0; nr < liczniki.length; nr++ ) liczniki[ nr ] = 0;
        for( int nr = 0; nr < znaki.length;    nr++ ) znaki[ nr ] = nr;
        
        try{
             String łańcuch = wej.readLine();
             for( char zn : łańcuch.toCharArray())
                 liczniki[ zn ]++;
           } 
            catch( IOException e ){}

        for( int nr1 = 0; nr1 < liczniki.length - 1; nr1++)
            for( int nr2 = nr1 + 1; nr2 < liczniki.length; nr2++)
                if( liczniki[ nr1 ] < liczniki[ nr2 ])
                { int pom1 = liczniki[ nr1 ];
                  int pom2 = znaki[ nr1 ];
                  znaki[ nr1 ] = znaki[ nr2 ];
                  liczniki[ nr1 ] = liczniki[ nr2 ];
                  liczniki[ nr2 ] = pom1;
                  znaki[ nr2 ] = pom2;
                }
                
        
        for( int nr = 0; nr <liczniki.length; nr++ ) 
            if(liczniki[ nr ] != 0) System.out.println((char)(znaki[ nr ]) + " --> " + liczniki[ nr ]);
        
    }
}