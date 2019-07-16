
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int tortuga();
int liebre();

int main()
{
    
  int T=0, L=0;
  
  srand(time(NULL));
  
     do
     {
           T += tortuga();
           L += liebre();     
           cout << "La tortuga esta en " << T << " y la liebre esta en " << L << endl;
      
     } while ( T<80 && L<80 );
     
     if( T>=80 && L>=80)
      {
        cout<<endl;
        cout<<"Empataron";
      }
      else 
    
          if( T<80 && L>=80)
          {
              cout << endl;
              cout << "Gano la Liebre";
          }
         else
              cout << "Gano la Tortuga";   
    return 0;
}
  
int liebre()
{
    int dado=0;
    int pasos=0;
    
    dado=1+rand()%10;
    
    if(dado>=8)
         pasos=1;
    else
         if(dado>=6)
              pasos= 0;
         else
              if(dado>=4)
              	pasos= 9;
              else
            	if (dado==3)
            		pasos=-10;
            	else
            		pasos=-2;
              
    return pasos;
} 

 int tortuga()
{
    int dado=0;
    int pasos=0;
    
    dado= 1+rand()%10;
    
    if(dado>=6)
        pasos=3;
     else
         if(dado>=3)
             pasos=-6; 
         else
             pasos=1;
             
     return pasos;
}


  
  
  
  
   
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
    
    
    
    
    
    
    
    
    

  
