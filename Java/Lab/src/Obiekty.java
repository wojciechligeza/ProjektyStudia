
public class Obiekty {


    public static void main(String[] args) {
        Osoba o1 = new Osoba(1, "Jan","Kowalski"); // new - konstruktor
        Osoba o2 = new Osoba(2, "Maria", "Ariam");
        
        Student wiecznyStudent = new Student(3, "Jan", "Iksiński", "0001");
        wiecznyStudent.wypisz();
       
    }
    
}
