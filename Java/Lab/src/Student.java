/*
Klasa, ktora umozliwia zbieranie danych o studentach
 */

public class Student extends Osoba {
    String nrIndeksu;
    
    Student (int lp, String imie, String nazwisko, String nrIndeksu) {
        super(lp, imie, nazwisko);
        this.nrIndeksu = nrIndeksu;
    }
    
    void wypisz() {
        super.wypisz();
        System.out.println(nrIndeksu);
    }
    
}
