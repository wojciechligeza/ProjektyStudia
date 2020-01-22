float [] x;
float [] y;
float [] w;
boolean [] v;
int id;
float [] zx;
float [] zy;
float step;

int liczbaKul;

void setup(){
size(500,500);
frameRate(120);
step=0.05;
liczbaKul = (int)random(6,12);

x = new float [liczbaKul];
y = new float [liczbaKul];
w = new float [liczbaKul];
v = new boolean [liczbaKul];
zx = new float [liczbaKul];
zy = new float [liczbaKul];


for (int i=0; i < liczbaKul; i++){
  x[i] = random(10, 490);
  y[i] = random(10, 490);
  w[i] = random(5, 20);
  v[i] = false;
  zx[i] = random(-2, 3);
  zy[i] = random(-2, 2);
}
  zx[0] = 0.0;
  zy[0] = 0.0;
  v[0] = true;
  id=0;
}
 
void draw(){

background(0);
stroke(0,256,0);
strokeWeight(3);
line(200,0,300,0);

for (int i=0; i<liczbaKul; i++){ 
  float  t=0.001;
     if ( abs(zx[i]) >t ) 
       if(zx[i]>0) zx[i]-=t; else zx[i]+=t;
     if (zy[i]>t || zy[i]<-t) 
       if (zy[i]>0) zy[i]-=t; else zy[i]+=t;
 }


for (int i=0; i<liczbaKul; i++){ 
  for(int j=i+1; j<liczbaKul; j++){
    if (sqrt(((x[i]-x[j])*(x[i]-x[j])) + ((y[i]-y[j])*(y[i]-y[j]))) <= (w[i]+w[j])/2 
    //&& sqrt(((x[i]-x[j])*(x[i]-x[j])) + ((y[i]-y[j])*(y[i]-y[j]))) >= 15
    ){
      if(i==0){
        {
         v[id]=false;
         v[j]=true;
         v[0]=false; id=j;
        }
      } else {
        if(v[i] || v[j]){
          if (v[i]){
              v[i]=false;
              id=0;
            }else{
              v[j]=false;
              id=0;
            }
          }
        /*if(v[i] || v[j]){
          if (v[i]){
              v[i]=false;
              v[j]=true;
              id=j;
            }else{
              v[j]=false;
              v[i]=true;
              id=i;
            }
          } */    
      }
      float  tmpXi,tmpYi, tmpXj,tmpYj, Wi, Wj;
      tmpXi = zx[i];
      tmpYi = zy[i];
      tmpXj = zx[j];
      tmpYj = zy[j];
      Wi=4./3.*PI*pow(w[i],3);
      Wj=4./3.*PI*pow(w[j],3);
      
      zx[i]=(tmpXi*(Wi-Wj)+2*Wj*tmpXj)/(Wi+Wj);
      zy[i]=(tmpYi*(Wi-Wj)+2*Wj*tmpYj)/(Wi+Wj);
      zx[j]=(tmpXj*(Wj-Wi)+2*Wi*tmpXi)/(Wi+Wj);
      zy[j]=(tmpYj*(Wj-Wi)+2*Wi*tmpYi)/(Wi+Wj);
      }
  }
  
    if (x[i]  > width -w[i]  || x[i] < w[i]){
    zx[i] = -zx[i];
  }
    if ((y[i] > height - w[i]) || (y[i] <w[i])){
    zy[i] = -zy[i];
  }
  
  if (v[i] && i!=0 && y[i] <w[i] && x[i]  > 200  && x[i] < 300){
    x[i] = -20; y[i] = -20; zx[i]=0; zy[i]=0;
  }
 
  
  if (i==0){
   
    if( keyPressed && key == CODED ){
      switch( keyCode ){
        case UP: zy[i]+=-step; break;
        case DOWN: zy[i]+=step; break;
        case LEFT:  zx[i]+=-step; break;
        case RIGHT: zx[i]+=step; break;
        }
      }
    x[i] = x[i] + zx[i];
    y[i] = y[i] + zy[i];
    fill(0,256,256);
    stroke(135,5,23);
    strokeWeight(3);
    ellipse(x[i], y[i],25,25); 
    }else{
    x[i] = x[i] + zx[i];
    y[i] = y[i] + zy[i];
     fill(135,5,23);
     if (v[i]) stroke(0,256,256); else stroke(255,256,0);
     strokeWeight(3);
     ellipse(x[i], y[i],  w[i], w[i]); 
     }
}


  
}
