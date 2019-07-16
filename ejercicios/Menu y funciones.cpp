using namespace std;

#include <iostream>
#include <conio.h>
#include <string>
#include <math.h>

void tabular1 (int vmax);
void tabular2 ();
void tabular3 (int vmax);
int fx1(int x);
float fx2 (int x, int y);
float fx3 (int x);


int main()
{

	int opc,vmax;
	
	do 
	{
	system ("pause");
    
   	cout<<"     Menu de funciones    ";
    	cout<<"\n-----------------------------"<<endl;
    	cout<<"Elige una opcion de funcion: \n ";
	
	cout<<" f1 (presiona 1)\n  f2 (presiona 2)\n  f3 (presiona 3)\n  Salir (presiona 0)\n";
	cin>>opc;
    
   	 switch (opc)
    	{
    		case 0:
    			cout<<"_____saliendo del programa_____";
    		break;
    		
    		case 1:
    			cout<<"Ingresa el valor de valor maximo de X: ";
    			cin>>vmax;
    			
    			cout<<" x "<<"\t"<< "f(x)"<<endl;
               	tabular1(vmax);
         		
    		break;
    	
    		case 2:
    		    cout<<"Las posibles combinaciones son:"<<endl;
         	 	cout<<"x "<<"\t"<<"y"<<"\t"<<"f(x)"<<endl;
       		  	tabular2();
    		break;
    	    
    	    case 3:
      			cout<<"Ingresa el valor de valor maximo de X: ";
           		cin>>vmax;
           		
           		cout<<" x "<<"\t"<< "f(x)"<<endl;
           		tabular3(vmax);	    		
    		break; 
    	
    		default:
    			cout<<"  Opcion invalida  "<<endl;
    		break;
	  	}
    }while (opc!=0);
} 

int fx1(int x)
{	
    int r;
    float result;
    
	r=(2*pow(x, 2));
    result=(cbrt(r)/((2.0*x)-3));
    return result;
}


float fx2 (int x, int y)
{
	float result;
	
	result=(2*x*y-(3.0*y));
			
	return result;
}

float fx3 (int x)
{
	float result;
	
	
		if(x>0)
			result=(2.0*pow(x,3));
		else 		
			result=(3*pow(x,2));	
			
	return result;
}

void tabular1 (int vmax)
{
    int x;
    for(x=0; x<=vmax; x++)
	{
         cout<<x<<"\t"<<fx1(x)<<endl;
    }
}

void tabular2 ()
{ 
	for (int x=1,y=1;x<=5,y<=5;x++,y++)
		cout<<x<<"\t"<<y<<"\t"<<fx2(x,y)<<endl;	
}

void tabular3 (int vmax)
{ 
	for (int x=0;x<=vmax;x++)
		cout<<x<<"\t"<<fx3(x)<<endl;	
}

