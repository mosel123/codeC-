#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int lanzarDado();

int main()
{
  srand(time(NULL));
  
  int cara[6]={0};
	 
  for(int i=0;i<100;i++)
  {
	int n=lanzarDado();
	cara[n-1]++;		
  }

  	for(int i=0;i<6;i++)
	{	
		cout<<"El  "<<i<<"  cayo: "<<cara[i]<<endl;
	}
	
  return 0;
}

int lanzarDado()
{	
	return 1+rand()%6;	
}

