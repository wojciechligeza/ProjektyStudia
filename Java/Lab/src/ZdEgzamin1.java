/*
@author Student
 */
public class ZdEgzamin1
{
    private int a;
    private int b;
    private int c;
    private double x1=0;
    private double x2=0;

ZdEgzamin1(int a, int b, int c)
    {
        this.a = a;
        this.b = b;
        this.c = c;
        
    }

int funkcja1(int x)
{
    int y;
    return y = a*x*x+b*x+c;
}

void funkcja2()
{
double delta = b*b-4*a*c;
if(delta==0)
    {
        x1=-b/2*a;
        x2=x1;
    }
else if(delta>0)
    {
        x1=(-b - Math.sqrt(delta)) / 2 * a;
        x1 =(-b + Math.sqrt(delta)) / 2 * a;
    }
}   

}
