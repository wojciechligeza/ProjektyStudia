
public class Łańcuchy {

    public static void main(String[] args) {
       String s1 = "Ala ma kota i Bolek ma psa";
       //String s2 = new String("Hello");
       String s2;
       int i;
       
       s2 = s1.substring(7); // wycina podłańcuch
       s2 = s1.substring(4,6);
       s2 = s1.toUpperCase(); // do dużych liter
       s2 = s1.trim(); // wycina spacja na początku i końcu
       i = s1.indexOf("ma"); // indeks pierwszego wystąpienia podłańcucha
       i = s1.lastIndexOf("ma"); // indeks pierwszego wystąpienia podłańcucha
       char c = s1.charAt(23); // pobranie znaku napozycji indeksu
       boolean b = s1.contains("mam"); // sprawdza czy jest podłańcuch
       s2 = s1+"i Kasia ma krokodyla";
       i = s1.compareTo(s1); // indeks podłacucha
       b = s1.equals(s2); // nie robić  s1==s2
       b = s1.contains("ma"); // czy w łańcuchu jest podłańcuch
       i = s1.length(); // długość łańcucha
       s2 = s1.replace("ma", "nie ma"); //zastępowanie łańcuchów
       s2 = s1.replaceFirst("ma", "nie ma");
       
       String tab[] = s1.split(" ");// przepisanie słów do tablicy
       
       StringBuffer sb = new StringBuffer(s1);
       sb.insert(7, "aaaa");
       sb.replace(7, 11, "bbbb");
       sb.delete(7, 11);
       sb.reverse();
       s2 = sb.toString();
       
       System.out.println(s2);
       
    }
    
}
