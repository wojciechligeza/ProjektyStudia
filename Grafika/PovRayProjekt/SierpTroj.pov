#include "colors.inc"   
#include "textures.inc"

global_settings {ambient_light White*0.8}

background {color rgb <80,00,00>}

light_source { <0,0,0>          
               color rgb <1,1,1>      
               area_light            
               <50, 0, 0>, <0, 0, 50>, 10, 10                
               adaptive 4          
               jitter              
             }

       
fog { fog_type   2
      distance   50
      color      White 
      fog_offset 0.1
      fog_alt    1.5
      turbulence 1.8
    }
    
camera
{
  sky <0,0,1>          
  direction <-1,0,0>     
  right <-4/3,0,0>     
  location  <0,0,10>  
  look_at   <0,0,0>    
  angle 16             
}


#declare p1 = <cos(90*pi/180),sin(90*pi/180),0>;
#declare p2 = <cos(210*pi/180),sin(210*pi/180),0>;
#declare p3 = <cos(330*pi/180),sin(330*pi/180),0>;

#declare mytriangle = object{polygon { 4, p1, p2, p3, p1} texture {pigment{Blood_Marble}} };

#declare i=1;
#while(i < clock)
    #declare mytriangle=union
    {     
         object{mytriangle scale 0.5 translate 0.5*p1}
         object{mytriangle scale 0.5 translate 0.5*p2}
         object{mytriangle scale 0.5 translate 0.5*p3}
    }
    #declare i=i+1;
#end
   
mytriangle
