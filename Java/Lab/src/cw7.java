/*
Program, który zamienia wszystkie pierwsze litery slow w zdaniu na duze,
przyklad : s1 = "Ala ma kota i psa"
           s2 = "Ala Ma Kota i Psa"
 */


public class cw7
{


    public static void main(String[] args)
    {
        String s1 = "Ala ma kota i ma psa";
        String s2 = null;
        String temp1, temp2;
        
        for (int i = 0; i < s1.length(); i++)
            if (s1.charAt(i) == ' ')
            {
                temp1=s1.substring(i+1, i+2);
                temp2=temp1.toUpperCase();
                
                s2=s1.replace(" "+temp1, " "+temp2);
                s1=s2;
            }
        
        s1 = "ala ma kota i ma psa";
        s2 = "";
        String temp = s1.toUpperCase();
        s2=s2+temp.charAt(0);
               
        for (int i = 1; i < s1.length(); i++)
            if (s1.charAt(i-1) == ' ')
            {
            s2=s2+temp.charAt(i);
            } else s2=s2+s1.charAt(i);
        
        
        /*
        s1 = " ala ma kota i ma psa";
        s2 = null;
        String litera,duza_litera = " ";
        StringBuffer sb = new StringBuffer(s1);
        
        
        for (int i = 0; i < sb.length(); i++)
        {
            if (sb.charAt(i)==' ')
            {
                litera = sb.substring(i+1,i+2);
                duza_litera = litera.toUpperCase();
                sb.replace(i+1, i+2, duza_litera);
                
            }
                
        }
        
        s2=sb.toString().trim();
        
        s1 = "ala ma kota i ma psa";
        s2="";
        String tab[] = s1.trim().split(" ");
        
        for(int i=0; i<tab.length;i++)
        {
            litera = tab[i].substring(0,1);
            duza_litera = litera.toUpperCase();
            s2=s2+duza_litera;
            s2=s2+tab[i].substring(1);
            s2=s2+" ";
            
        }
        */
        
        System.out.println(s2);
        
        
    }
    
}
