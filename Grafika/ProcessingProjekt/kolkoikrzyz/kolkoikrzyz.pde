import processing.serial.*;
int[][] tab = new int[3][3];
//1 - kolko, 2 - krzyzyk

PImage krzyz,kolko;
int wspolrzedneX,wspolrzedneY,tura = 1;

void setup() 
{
  size(640, 640);
  noStroke();
  frameRate(1000);
  background(0);  
  rect(200,0,20,640);
  rect(400,0,20,640);
  rect(0,200,640,20);
  rect(0,400,640,20);
  krzyz = loadImage("krzyz.png");
  kolko = loadImage("kolko.png");
}

void draw()
{
  for(int i = 0;i <9;i++)
  {
  if(mouseX > 0 && mouseX < 200 && mouseY > 0 && mouseY <200)
    if(mousePressed == true)
    {
      if(tab[0][0] != 1 && tab[0][0] != 2)
      {
      tab[0][0] = tura;
      if(tura==1)
       tura = 2;
       else if(tura == 2)
       tura = 1;
      }
    }
    
   if(mouseX > 220 && mouseX < 400 && mouseY > 0 && mouseY <200)
    if(mousePressed == true)
    {
      if(tab[0][1] != 1 && tab[0][1] != 2)
      {
      tab[0][1] = tura;
      if(tura==1)
       tura = 2;
       else if(tura == 2)
       tura = 1;
      }
      
    }
    
    if(mouseX > 440 && mouseX < 640 && mouseY > 0 && mouseY <200)
    if(mousePressed == true)
    {
      if(tab[0][2] != 1 && tab[0][2] != 2)
      {
      tab[0][2] = tura;
      if(tura==1)
       tura = 2;
       else if(tura == 2)
       tura = 1;
      } 
    }
    
  if(mouseX > 0 && mouseX < 200 && mouseY > 220 && mouseY <400)
    if(mousePressed == true)
    {
      if(tab[1][0] != 1 && tab[1][0] != 2)
      {
      tab[1][0] = tura;
      if(tura==1)
       tura = 2;
       else if(tura == 2)
       tura = 1;
      }
    }
  
  
  if(mouseX > 220 && mouseX < 400 && mouseY > 440 && mouseY <640)
    if(mousePressed == true)
    {
      if(tab[2][1] != 1 && tab[2][1] != 2)
      {
      tab[2][1] = tura;
      if(tura==1)
       tura = 2;
       else if(tura == 2)
       tura = 1;
      }
  
    }
  
  
   if(mouseX > 0 && mouseX < 200 && mouseY > 440 && mouseY <640)
    if(mousePressed == true)
    {
      if(tab[2][0] != 1 && tab[2][0] != 2)
      {
      tab[2][0] = tura;
      if(tura==1)
       tura = 2;
       else if(tura == 2)
       tura = 1;
      }
    }
  
  
  if(mouseX > 220 && mouseX < 400 && mouseY > 220 && mouseY <400)
    if(mousePressed == true)
    {
      if(tab[1][1] != 1 && tab[1][1] != 2)
      {
      tab[1][1] = tura;
      if(tura==1)
       tura = 2;
       else if(tura == 2)
       tura = 1;
      }
  
    }
  
  
  if(mouseX > 440 && mouseX < 640 && mouseY > 220 && mouseY <400)
    if(mousePressed == true)
    {
      if(tab[1][2] != 1 && tab[1][2] != 2)
      {
      tab[1][2] = tura;
      if(tura==1)
       tura = 2;
       else if(tura == 2)
       tura = 1;
      } 
    }
  
  if(mouseX > 440 && mouseX < 640 && mouseY > 420 && mouseY <640)
    if(mousePressed == true)
    {
      if(tab[2][2] != 1 && tab[2][2] != 2)
      {
      tab[2][2] = tura;
      if(tura==1)
       tura = 2;
       else if(tura == 2)
       tura = 1;
      } 
    }
  
  rysuj();
  sprawdz();
  }
  
}

void rysuj()
{
 for(int i = 0;i<3;i++)
   for(int y = 0; y < 3; y++)
        {
         if(i == 0)
         {
           wspolrzedneY = 25;  
         }
         if(i == 1)
         {
           wspolrzedneY = 235;  
         }
         if(i == 2)
         {
           wspolrzedneY = 435;  
         }
         
         if(y == 0)
         {
           wspolrzedneX = 25;  
         }
         if(y == 1)
         {
           wspolrzedneX = 235;  
         }
         if(y == 2)
         {
           wspolrzedneX = 435;  
         }
         
                
         if(tab[i][y] == 1)
            image(kolko,wspolrzedneX,wspolrzedneY,150,150);
         
         if(tab[i][y] == 2)
           image(krzyz,wspolrzedneX,wspolrzedneY,150,150);
                
        }
 
}

void sprawdz()
{    
  
     if(tab[0][0] == tab[1][0] && tab[0][0] == tab[2][0] && tab[0][0] != 0)
     win();
     if(tab[0][1] == tab[1][1] && tab[0][1] == tab[2][1] && tab[0][1] != 0)
     win();
     if(tab[0][2] == tab[1][2] && tab[0][2] == tab[2][2] && tab[0][2] != 0)
     win();
         
     if(tab[0][0] == tab[0][1] && tab[0][0] == tab[0][2] && tab[0][0] != 0)
     win();
     if(tab[1][0] == tab[1][1] && tab[1][0] == tab[1][2] && tab[1][0] != 0)
     win();
     if(tab[2][0] == tab[2][1] && tab[2][0] == tab[2][2] && tab[2][0] != 0)
     win();
     
     if(tab[0][0] == tab[1][1] && tab[0][0] == tab[2][2] && tab[0][0] != 0)
     win();
     if(tab[0][2] == tab[1][1] && tab[0][2] == tab[2][0] && tab[0][2] != 0)
     win(); 
}

void win()
{
  fill(10,10,10);
  rect(0,0,640,640); 
  fill(100,100,100);
  textSize(50);
  text("Wygrał gracz: ",150, 220);
  if(tura == 1)
    image(krzyz,200,300,200,200);
  if(tura == 2)
    image(kolko,200,300,200,200);
}
