
#include <iostream>
#include <string>
using namespace std;

int fact (int n);
int suma (int a, int b);
int pot (int a, int b);	

int main()
{
    int i, n;
    int x;
    float suma =0;
    x=3;
    n=14;
    for (int i=0;i<=n;i++)
    {
    	suma+=(float)pot(x,i)/fact(i);
	}
		cout<<suma;
    return 0;
}


int fact(int n)
{
	int fact, i;
	
	fact=1;
	
	 for(i=1; i<=n; i++)
           fact*=i;
	 return fact;
}
 
int pot (int base, int expo)
{
	int pot;
	pot=1;
	
	for(int i=1;i<=expo; i++)
		pot*=base;
	return pot;	
}
    
int suma (int a, int b)
{
	int c=a+b;
	b++;
	return c;
}
    

