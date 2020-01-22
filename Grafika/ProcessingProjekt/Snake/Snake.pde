ArrayList<Integer> x=new ArrayList<Integer>(),y=new ArrayList<Integer>();
int w=30,h=30,bs=20,dir=2,ax=12,ay=10;
int[]dx={0,0,1,-1},dy={1,-1,0,0};
boolean lafin=false;

void setup(){
  size(600, 600);
  x.add(15);
  y.add(15);
}

void draw(){
  background(255);
  
  for (int i=0;i<w;i++)
    line(i*bs,0,i*bs,height);
    
  for(int i=0;i<h;i++)
    line(0,i*bs,width,i*bs);
  
  fill(102, 0, 204);
  
  for (int i = 0 ; i < x.size(); i++)
    rect(x.get(i)*bs, y.get(i)*bs, bs, bs);
    
  if (!lafin){
    fill(204, 102, 0);
    
    rect(ax*bs, ay*bs, bs, bs);
    
     if (frameCount%4==0){
      x.add(0, x.get (0) + dx[dir]);
      y.add(0, y.get(0) + dy[dir]);
      
      if(x.get(0) < 0 || y.get(0) < 0 || x.get(0) >= w || y.get(0) >= h)
        lafin = true;
        
        for(int i=1;i<x.size();i++)
          if(x.get(0)==x.get(i)&&y.get(0)==y.get(i))
            lafin=true;
            
       if (x.get(0)==ax && y.get(0)==ay){
         ax = (int)random(0, w);
         ay = (int)random(0, h);
       }
       else{
          x.remove(x.size()-1);
          y.remove(y.size()-1);
       }
     }
  }
  else{
    fill(0);
    
    textSize(30);
    fill(100,149,237);
    textAlign(CENTER);
    text("Koniec grania.\r\nWciśnij se spacje :)",width/2,height/2);
    
    if(keyPressed&&key==' '){
      x.clear();
      y.clear();
      x.add(15);
      y.add(15);
      lafin = false;
    }
  }
}

void keyPressed(){
  if (key == CODED){
    int nd=keyCode==DOWN? 0:(keyCode==UP?1:(keyCode==RIGHT?2:(keyCode==LEFT?3:-1)));
  
    if (nd!=-1&&(x.size()<=1||!(x.get(1)==x.get(0)+dx[nd]&&y.get(1)==y.get(0)+dy[nd])))
      dir=nd;
  }
}
