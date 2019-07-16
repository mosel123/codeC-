#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int fg(int a, int b, int c, float &x1, float &x2);

int main()
{
	int a,b,c; 
	float x1,x2;
	
	cout<<"Introduce el valor de A: "<<endl;
	cin>>a;
	cout<<"Introduce el valor de B: "<<endl;
	cin>>b;
	cout<<"Introduce el valor de C: "<<endl;
	cin>>c;
	
	if (fg(a,b,c,x1,x2)==0)
		cout<<"¡ERROR!";
		else
		{
			cout<<"El resultado de X+ es:  "<<x1<<endl;
			cout<<"El resultado de X- es:  "<<x2<<endl;
		}
			
	return 0;
    
}

int fg(int a, int b, int c, float &x1, float &x2)
{
	float result;
	
	result= pow(b,2)-4.0*(a*c);
	
	if(result>=0)
	{
		x1=(-b+sqrt(result))/(2*a);
		x2=(-b-sqrt(result))/(2*a);
		
		return 1;
	}
	else 
		return 0;
}

