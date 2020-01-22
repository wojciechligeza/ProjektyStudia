
public class piaty {

    
    public static void main(String[] args) {
    
        boolean b;
        
        b= true;
        b= false;
        
        b = (4==7) || (4!=5);
        
        int x=4, y=8;
        
        b = (x<=y) && (x>5);
        
        b = !(x==y);
        
        if (!(x == y)) {
            System.out.println("Tak1");
            System.out.println("Tak2");
        }
        else
            System.out.println("Nie");
        
        int s=0;
        if(x>0) s=s+x;
        
        
        System.out.println(b);
        
    }
    
}
