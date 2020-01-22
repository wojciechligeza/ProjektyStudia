//Program, ktory wypisuje na ekran najkrotsze slowo w podanym zdaniu
//Przyklad: s1 = "Ala ma hipopotama i psa"
//s2="hipopotama"
public class Zadanie4
{

   
    public static void main(String[] args)
    {
        
        String s1 = "Ala ma hipopotamososa i pieska";
        String s2 = "";
        String tab[] = s1.split(" ");
        String temp = tab[0];
        
        
        for(int i=0; i<tab.length; i++)
            if( tab[i].length()<temp.length()) s2=tab[i];
        
        System.out.println(s2);

    }
}
