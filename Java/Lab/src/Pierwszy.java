public class Pierwszy
{

 
    public static void main(String[] args)
    {
       // int x;
       // long xx;
       // float y;
        double x, y, z;
        String sx, sy, sz;
        
        sx="3.O";
        sy="2.0";
        
        // x = (int)z;
        
        try
        {
            
            x = Double.parseDouble(sx);
            y = Double.parseDouble(sy);
            z = x + y;
            sz = Double.toString(z);
        }
        catch(Exception e)
        {
            sz = "Przerwa";
            //e.printStackTrace();
        }
        
        System.out.print(sz);
    }
    
}