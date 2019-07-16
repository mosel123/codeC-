#include <iostream>
#include <conio.h>

using namespace std;

int fact (int n);
int suma (int a, int b);
int pot (int a, int b);
float cos (int x, int n);
float sen(int x,int n);
float ln(int x, int n);

int main()
{

	int opc, x;
	
	do 
	{
	system ("pause");
    cout<<"     Menu de funciones    ";
    cout<<"\n-----------------------------"<<endl;
    cout<<"Elige una opcion de funcion: \n ";
	cout<<" Logaritmo natural (presiona 1)\n  Seno (presiona 2)\n  Coseno (presiona 3)\n  Salir (presiona 0)\n"<<endl;
	cin>>opc;
    
   	 switch (opc)
    	{
    		case 0:
    			cout<<"_____saliendo del programa_____"<<endl;
    		break;
    		
    		case 1:
    			if (opc==1)
    			{
    				cout<<"Ingresa el valor de la x:  "<<endl;
            		cin>>x;
            		cout<<"el resultado es:  "<<ln(x,7)<<endl;
				}
    		break;
    	
    		case 2:
    			if (opc==2)
    			{
    		     	 cout<<"Ingresa el angulo de seno:  ";
          		 	 cin>>x;
          		  	 cout<<"El resultado es:  "<<sen(x,7)<<endl;
				}
    		
    		break;
    	
    		case 3:
    			if (opc==3)
    			{
    				cout<<"Ingresa el Angulo:   ";
            		cin>>x;
            		cout<<"El resultado es:  "<<cos(x,5)<<endl;
				}	    		
    		break; 
    	
    		default:
    			cout<<" Opcion invalida "<<endl;
    		break;
	  	}
    }while (opc!=0);
} 

float cos(int x, int n)
{
	int sig= -1;
	int de = 2;
	
	float sum=1;
	
	for(int i=1; i<=n;i++,de+=2)
	{
		sum += (float)pot(x,de)/fact(de)*sig;
		sig*=-1;
	}
	return sum;
}

float ln (int x,int n)
{
	float aument=1;
	
	for(int i=1;i<=n;i++)
	{
		aument+=(float)(1.0/i)*pot((x-1.0)/x,i);
	}
	return aument;
}

float sen(int x,int n) 
{
	int deno=3;
	int sig=-1;
	float aument=x;
	
	for (int i=2; i<=n; i++, deno+=2)
	{
		aument+=(float)pot(x,deno)/fact(deno)*sig;
		sig*=-1;
	}
	return aument;
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


float pot (float base, int expo)
{
	float pot;
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