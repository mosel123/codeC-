#include <iostream>
#include <math.h>

using namespace std;

float fx (int x);
void tabular (int vmin, int vmax);

int main ()
{
	int vmin,vmax;
	
	cout<<"Ingresa el valor menor:  ";
	cin>>vmin;
	cout<<"Ingresa el valor mayor :   ";
	cin>>vmax;
	cout<<endl;
	
	cout<<" x"<<"      "<<"f(x)"<<endl;
	tabular(vmin, vmax);
	
	return 0;
}

float fx (int x)
{
	float result, n;
	
		n= (pow(x,2.0)-x);
	
		if(x>0)
			result=((pow (x,3)-2*x)/(3*x))+6*x;
		else 		
			result=(sqrt(n)/2.0);	
			
	return result;
}

void tabular (int vmin, int vmax)
{ 
	for (int x=vmin;x<=vmax;x++)
		cout<<x<<"\t"<<fx(x)<<endl;	
}


