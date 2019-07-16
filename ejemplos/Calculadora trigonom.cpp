using namespace std;

#include <iostream>
#include <conio.h>
#include <string>

int fact (int n);
int suma (int a, int b);

float pot(float base, int expo);
float ln(int x, int n);
float cos (int x, int n);
float sen(int x,int n);


int main()
{

	int opc, x;
	
	do 
	{
	system ("pause");
    
    cout<<"     Menu de funciones    ";
    cout<<"\n-----------------------------"<<endl;
    cout<<"Elige una opcion de funcion: \n ";
	
	cout<<" Logaritmo natural (presiona 1)\n  Seno (presiona 2)\n  Coseno (presiona 3)\n  Salir (presiona 0)\n";
	cin>>opc;
    
   	 switch (opc)
    	{
    		case 0:
    			cout<<"_____saliendo del programa_____";
    		break;
    		
    		case 1:
    				cout<<"Ingresa el valor de la x:  ";
            		cin>>x;
            		cout<<"El resultado es:  "<<ln(x,7)<<endl;
    		break;
    	
    		case 2:
    		     	 cout<<"Ingresa el angulo de seno:";
          		 	 cin>>x;
          		  	 cout<<"El resultado es:  "<<sen(x,5)<<endl;
    		break;
    	    
    	    case 3:
    				cout<<"Ingresa el angulo de coseno: ";
            		cin>>x;
            		cout<<"El resultado es:  "<<cos(x,5)<<endl;	    		
    		break; 
    	
    		default:
    			cout<<"  Opcion invalida  "<<endl;
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

    float ln(int x,int n)
    {
	
	float sum=0;
	
	for(int i=1;i<=n;i++)
	{
		sum+=(1.0/i)*pot((x-1.0)/x,i);
	}
	
	return sum;
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
 
    float pot (float base, int expo)
    {
	    float pot=1;
   
        for(int i=1;i<=expo; i++)
        {
        pot*=base;  
        }	
	
	return pot;	
    }

    int suma (int a, int b)
    {
	    int c=a+b;
	    b++;
	    return c;
    }
