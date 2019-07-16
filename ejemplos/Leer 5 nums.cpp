#include <iostream>

using namespace std;

float promed (int a, int b, int c, int d, int f);
void orden(int a, int b, int c, int d, int e);

int main()
{
  int a,b,c,d,e;

  
  cout<<"Ingresa 5 numeros para mostrar su promedio: "<<endl;
  cin>>a>>b>>c>>d>>e;
  
	
  cout<<"El promedio de los 5 numeros es: "<<promed(a,b,c,d,e)<<endl;
  
  cout<< "Los numeros mayores al promedio son:  ";
  orden(a,b,c,d,e);
  
    return 0;
}


float promed (int a, int b, int c, int d, int e)
{
	float promedio=0;
	
	promedio+=(a+b+c+d+e)/5.0;
	
	return promedio;
 } 


void orden(int a, int b, int c, int d, int e)
{
	float res=promed(a,b,c,d,e);
	if(res<a)
		cout<<a<<endl;
		if (res<b)
			cout<<b<<endl;
			if(res<c)
				cout<<c<<endl;
				if(res<d)
					cout<<d<<endl;
				if(res<e)
					cout<<e<<endl;
}

