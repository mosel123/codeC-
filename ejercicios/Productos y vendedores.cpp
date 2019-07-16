using namespace std;

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>

int SumaVyP(int mat[][6]);
void Productos(int mat[][6],int vendedor);
void AgregarProducto(int mat[][6], int vendedor, int producto);
void Mostrar(int mat[][6]);

int main()
{ 
	int mat[5][6]={0};
	int opc, tam=5,pos, cont=0, venta;
		
	do 
	{
    
    cout << endl;
    cout << "                 ABARROTES SRITA CHUY     "<<endl;
    cout<< "   Reporte de ventas por vendedor y productos vendidos ";
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
	
	cout << "----- Quien desea que lo atienda?----"<<endl<<endl;
	cout << " -- Vendedor 1 (1)\n -- Vendedor 2 (2)\n -- Vendedor 3 (3)\n -- Vendedor 4 (4)\n" ;
	cout << " -- Mostrar tabla (5)\n";
	cout << " -- Salir del programa (presiona 0)\n"<< endl << endl;
	cout << "Elige una opcion --> ";
	cin >> opc; cout<<endl;
	
   	 switch (opc)
    	{
    		case 0:
    			cout << endl;
    			cout << "_____saliendo del programa_____";
    		break;
    		
    		case 1:
    		Productos (mat,opc);
       		  	
    		break;
    	    
    	    case 2:
    	    Productos(mat, opc);
    	 	
    	    break;
    	    
    	    case 3:
    		Productos(mat, opc);
       		  	
    		break;
    		
    		case 4:
    		Productos(mat, opc);
       		  	
    		break;
    		
    		case 5:
    		Mostrar(mat);
			cout << endl << endl;
       		  	
    		break;
    		
			default:
    			cout<<"  Opci%162n invalida  "<<endl;
    		break;
	  	}
    }while (opc!=0);
} 

void Productos(int mat[][6], int vendedor)
{	
	int opc2;
	
	do
	{
	cout<< "-----Que desea comprar?----"<<endl<<endl;
	cout << " -- Producto 1 (1)\n -- Producto 2 (2)\n -- Producto 3 (3)\n -- Producto 4 (4)\n --Producto 5 (5)\n" ;
	cout<< " -- Mostrar tabla (6)\n";
	cout<< " -- Salir de productos (presiona 0)\n"<< endl << endl;
	cout<<"Elige una opcion --> ";
	cin >> opc2; cout<<endl;
			
		switch (opc2)
		{
			case 0:
				cout << endl;
    			cout << "_____saliendo del productos_____	";
    			cout << endl;
			break;
			
			case 1:
				AgregarProducto(mat,vendedor,opc2);
				cout << endl;
			break;
			
			case 2:
				AgregarProducto(mat,vendedor,opc2);
				cout << endl;
			break;
			
			case 3:
				AgregarProducto(mat,vendedor,opc2);
				cout << endl;
			break;
			
			case 4:
				AgregarProducto(mat,vendedor,opc2);
				cout << endl;
			break;
			
			case 5:
				AgregarProducto(mat,vendedor,opc2);
				cout << endl;
			
			break;
			
			case 6:
				Mostrar(mat);
				cout << endl << endl;
			break;
				
			default:
    			cout << " Opcion invalida " << endl;
    		break;
		}
		
	}while(opc2!=0);
}

void AgregarProducto(int mat[][6], int vendedor, int producto)
{
	int cant=0;
	
	cout << " Introduzca la cantidad de PRODUCTOS " << endl;
	cin >> cant;
	cout << endl;
	mat[vendedor-1][producto-1]+=cant;
}

void Mostrar(int mat[][6])
{
	
	SumaVyP(mat);
	
	cout << endl;
	
	for(int r=0; r<5; r++)
	{
		cout << endl; 
	}
		
	for(int r=0; r<5; r++)
	{
		cout << "\t Vendedor [" << r + 1 << "]\t";
		for(int c=0; c<6; c++)
		{
			cout << mat[r][c] << "\t";
		}
		
		cout << endl; 
	}
}

int SumaVyP(int mat[][6])
{
	int aux=0;
	
	for(int r=0; r<4; r++)
	{
		aux=0;
		for(int c=0; c<5; c++)
		{
			aux+=mat[r][c];
		}
		mat[r][5]=aux;
	}
	
	for( int c=0; c<5; c++)
	{
		aux=0;
		for(int r=0; r<4; r++)
		{
			aux+=mat[r][c];
		}
		mat[4][c]=aux;
	}
}          
