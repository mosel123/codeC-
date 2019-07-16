#include <iostream>
#include <math.h>

using namespace std;

float fx3 (int x);
void tabular (int vmax);

int main()
{
	
	int opc, vmax;
	
	do 
	{
	system ("pause");
    
   	cout<<"     Menu de funciones    ";
    	cout<<"\n-----------------------------"<<endl;
    	cout<<"Elige una opcion de funcion: \n ";
	
	cout<<" Formula 1 ---> 1\n  Formula 2 ---->2\n  Formula 3 ---->3\n  Salir (presiona 0)\n";
	cin>>opc;
    
   	 switch (opc)
    	{
    		case 0:
    			cout<<"_____saliendo del programa_____";
    		break;
    		
    		/*case 1:
    			cout<<"Ingresa el valor maximo para x:  ";
                        cin>>vmax;
         		cout<<"El resultado es:  "<<ln(x,7)<<endl;
    		break;
    	
    		case 2:
    		     	 cout<<"Ingresa el angulo de seno:";
         	 	 cin>>x;
       		  	 cout<<"El resultado es:  "<<sen(x,5)<<endl;
    		break;*/
    	    
    	        case 3:
      			cout<<"Ingresa el valor maximo para x: ";
           		cin>>vmax;
           		
           		 cout<<"x"<<"     "<<"f(x)"<<endl;
           		 tabular(vmax);
           		
    		break; 
    	
    		default:
    			cout<<"  Opcion invalida  "<<endl;
    		break;
	  	}
    }while (opc!=0);
	
	return 0;
	
	/*int vmin,vmax;
	
	cout<<"Ingresa el valor menor:  ";
	cin>>vmin;
	cout<<"Ingresa el valor mayor :   ";
	cin>>vmax;
	cout<<endl;
	
	cout<<" x"<<"      "<<"f(x)"<<endl;
	tabular(vmin, vmax);*/
}

/*float fx1 (int x)
{
	float result, n;
	
		n= (pow(x,2.0)-x);
	
		if(x>0)
			result=((pow (x,3)-2*x)/(3*x))+6*x;
		else 		
			result=(sqrt(n)/2.0);	
			
	return result;
}

float fx2 (int x)
{
	float result, n;
	
		n= (pow(x,2.0)-x);
	
		if(x>0)
			result=((pow (x,3)-2*x)/(3*x))+6*x;
		else 		
			result=(sqrt(n)/2.0);	
			
	return result;
}*/

float fx3 (int x)
{
	float result;
	
		if(x>0)
			result=2*pow(x,3);
		else 		
			result=3*pow(x,2);	
			
	return result;
}

void tabular (int vmax)
{ 
	for (int x=0;x<=vmax;x++)
		cout<<x<<"\t"<<fx3(x)<<endl;	
}


