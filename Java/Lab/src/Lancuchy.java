
public class Lancuchy {

    public static void main(String[] args) {
        String s1 = "  Ala ma kota i Bolek ma psa";
        //String s2 = new String("Hello");
        String s2;
        int i;

        s2 = s1.substring(7); // wycina podlancuch
        s2 = s1.substring(4, 6);
        s2 = s1.toLowerCase();
        s2 = s1.trim(); // wycina spacje
        i = s1.indexOf("ma"); // indeks wystapienia podlancuhca
        i = s1.lastIndexOf("ma"); // indeks ostatniego wystapienia podlancucha
        char c = s1.charAt(4); // pobranie znaku
        boolean b = s1.contains("mam"); //sprawdza czy istnieje podlancuch
        s2 = s1 + "Kasia ma krokodyla";
        i = s1.compareTo(s1);
        b = s1.equals(s2); // nie robic s1==s2
        i = s1.length();
        s2 = s1.replace("ma", "nie ma");
        s2 = s1.replaceFirst("ma", "nie ma");

        String tab[] = s1.split(" "); // przepisuje słowa do tablicy
        
        StringBuffer sb = new StringBuffer(s1);
        sb.insert(7, "aaa");
        sb.insert(11, "bbb");
        sb.replace(7, 11, "bbb");
        sb.delete(7, 11);
        sb.reverse();
        
        s2 = sb.toString();
        
        System.out.println(c);
    }

}
