
/* Prosze napisać klasę Prezent pozwalającą na 
gromadzenie informacji o prezentach. Klasa powinna 
zawierać następjące pola:

String nazwa_prezentu
String kolor_prezentu
int ile_sztuk

Klasa powinna być wyposarzona w konstruktor
inicjujący pola oraz w metodę umożliwiającą
wypisanie danych o prezencie na konsolę.

delta delta = b*b - 4*a*c
if(delta) > 0
  x1 = (-b - Math.sqrt(delta)/2*a
  x2 = (-b +  Math.sqrt(delta)/2*a
*/
public class Prezent {
 String nazwa_prezentu;
  private String kolor_prezentu;
  private int ile_sztuk;
  
  Prezent(String nazwa_prezentu,String kolor_prezentu,int ile_sztuk){
      this.nazwa_prezentu = nazwa_prezentu; 
      this.kolor_prezentu = kolor_prezentu;
      this.ile_sztuk = ile_sztuk;
  }
  
  void wypisz(){
    System.out.println(nazwa_prezentu); 
    System.out.println(kolor_prezentu);
    System.out.println(ile_sztuk);
  }
  
}
