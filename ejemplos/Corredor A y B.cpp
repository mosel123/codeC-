#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int lanzarDado();
int correr();

int main()
{
    int J1=0, J2=0;

  	srand(time(NULL));
  
    do
  	{ 
      J1+= correr();
      J2+= correr();
      
      cout << "Jugador 1 esta en " << J1 << " y Jugador 2 esta en " << J2 << endl;
	} while ( J1<100 && J2<100 );
  
  return 0;
  
}

int lanzarDado()
{
	int dado;
		dado= 1+rand()%6;	
	return dado;
}

int correr()
{
   int avanzar=0;
   int cara=lanzarDado();
   
   if (cara==3)
   		avanzar=3;
	else
		if (cara<=2)
			avanzar=1;
		else
			avanzar=2;
   
   return avanzar;
}
