/*
Program, ktory oblicza liczbe spacji podanej w lancuchu tekstowym
 */

public class cw6
{


    public static void main(String[] args)
    {
        String s = "Ala ma kota i ma psa";
        String s2;
        int licz = 0;
        
        for(int i=0; i < s.length(); i++)
           {
             if(s.charAt(i)==' ')
                 licz++;
           }
        
        licz = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s.substring(i,i+1).equals(" "))
                licz++;    
        }
        
        licz = 0;
        while(s.indexOf(" ") > -1)
        {
            s2 = s.replaceFirst(" ", "");
            s = s2;
            licz++;
        }
        
        s = "Ala ma kota i ma psa";
        licz = 0;
        StringBuffer sb = new StringBuffer(s);
        while (s.indexOf(" ") > -1)
        {
            sb.delete(sb.indexOf(" "), sb.indexOf(" ")+1);
            licz++;
        }
        System.out.println(licz);
    }
    
}
