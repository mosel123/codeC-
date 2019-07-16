using namespace std;

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int NumerosAleatorios();
void agregar(int vec[], int n, int pos);
int eliminar(int vec[], int tam, int pos);
int recorrer(int vec[], int tam, int pos);
void reporte (int vec[], int tam);
int buscar(int vec[],int tam,int ValBus);
int insertar(int vec[],int n, int pos);
int modificar(int vec[], int n, int pos);

int main()
{
	srand(time(NULL));
	 
	int vec[20]={0};
	int opc, tam=20,n,pos, cont=0, ValBus;
		
	do 
	{
    
    cout << endl;
    cout << "     MENU DE FUNCIONES     ";
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
	
	cout << " -- Agregar (1)\n -- Eliminar (2)\n -- Buscar (3)\n -- Modificar (4)\n -- Insertar (5)\n -- Reporte (6)\n -- Salir (presiona 0)\n"<< endl << endl;
	
	cout<<"Elige una opcion --> ";
	cin >> opc;
	
   	 switch (opc)
    	{
    		case 0:
    			cout<<endl;
    			cout<<"_____saliendo del programa_____";
    		break;
    		
    		case 1:
    			
			 n = NumerosAleatorios();
             agregar(vec,n,cont);
             cont++;

    		break;
    	
    		case 2:
    		
    		cout << "Ingrese el valor que desea eliminar: ";
            cin >> n;
			
    		pos = buscar(vec,tam,n);
    		cout<<endl;
          
            if(pos>=0)
            {
                eliminar(vec,tam,pos);
                cont--;
            }
                else
                {
                    cout << "Se ingreso un valor invalido ";
                    cout<<endl;
                }   
       		  	
    		break;
    	    
    	    case 3:
    	    	
    	    reporte(vec,tam);
      		cout << endl<< endl;
      	
      		cout << " Ingresa el valor a buscar:  "<<endl;
      		cin >> ValBus;
      		
			pos = buscar(vec,tam,ValBus);
      		
			if(pos>=0)
			{
				cout<<" el valor "<<ValBus<<" esta en la posicion: " <<pos;
				cout<<endl;
			}
				else
				{
					cout<<"El valor no existe ";
					cout<<endl;
				}	
           		   		
    		break; 
    		
    		case 4:
    			
      		cout << "Ingrese el valor a modificar: ";
            cin >> n;
            
            pos = buscar(vec,tam,n);
            cout << "Ingrese el nuevo valor: ";
            cin >> n;
            
            if(pos>=0)
            {
                modificar(vec,n,pos);
            }
                else
                {
                    cout << "Ingreso un valor no valido!";
                }
           		   		
    		break; 
    		
    		case 5:
    			
      		cout << "Ingrese la posicion para insertar un valor: ";
            cin >> pos;
            n = NumerosAleatorios();
            
            insertar(vec,n,pos);
            //recorrer(vec,tam,pos);
                
            break;
                
            case 6:
                reporte(vec,tam);
                break;
    		
    	
    		default:
    			cout<<"  OPCION INVALIDA  "<<endl;
    		break;
	  	}
    }while (opc!=0);
} 

int NumerosAleatorios()
{	
	return 10+rand()%(291);	
}

void agregar(int vec[], int n, int pos)
{
	
	srand(time(NULL));
	
	cout<<"Se agrego un numero "<<endl<<endl;
	
	vec[pos]= n;
	
	cout<<endl;
	
	
}

int eliminar(int vec[], int tam, int pos)
{
	  vec[pos] = 0;
	  recorrer(vec,tam, pos);
}

int buscar(int vec[],int tam,int ValBus)
{
	int pos=-1;
	
	for (int i=0; i<tam; i++)
	{
		if (ValBus==vec[i])
		{
			pos=i;
		}
	}
	return pos;
}

int modificar(int vec[], int n, int pos)
{
    vec[pos] = n;
}

int insertar(int vec[],int n, int pos)
{
	int cont=0;
	
	for (int i=cont; i>pos; i--)
	{
		vec[i]=vec[i-1];
		cont++;
	}
    vec[pos] = n;
}

//01234567890
//ab5defg
void reporte (int vec[], int tam)
{
	for(int i=0;i<tam;i++)
	{
		cout<<"La posicion ["<<i<<"]"<<"\t"<<"=  "<<vec[i]<<endl;
	}
		
}

int recorrer(int vec[], int tam, int pos)
{
	for(int i=pos; i<tam; i++)
    {
        vec[i] = vec[i + 1];
    }
}
