#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int lanzarDado();
void histograma(int n);

int main()
{
  srand(time(NULL));
  
  int cara[6]={0};
  	 
  for(int i=0;i<100;i++)
  {
	int n=lanzarDado();
	cara[n-1]++;		
  }
  
  	for(int i=0;i<=5;i++)
	{	
		cout<<"El  "<<i+1<<  " cayo: "<<cara[i]<<" veces."<<endl; histograma(cara[i]);cout<<endl;
	}
	
  return 0;
}

int lanzarDado()
{	
	return 1+rand()%6;	
}

void histograma(int n)
{
    for(int i=1; i<=n; i++)
	    cout << " * ";
    cout << endl;
}
