#include <iostream>
using namespace std;

void menuVendedor();
void menuProducto(int vendedor);
void mostrar(int ventas[][6], int tam);
void agregar(int ventas[][6], int tam, int vendedor, int producto);

int main()
{
	int ventas[5][6]={0};

	
	return 0;
}

void menuVendedor()
{
	int vendedor=0, tam=5;;
	int ventas[5][6]={0};
	
	do
	{
		cout << endl;
		cout << " ELIGE EL VENDEDOR " << endl;
		cout << endl;
		cout << "Vendedor 1" << endl;
		cout << "Vendedor 2" << endl;
		cout << "Vendedor 3" << endl;
		cout << "Vendedor 4" << endl;
		cout << "Presiona 5 para mostrar tabla" << endl;
		cout << "Presiona 0 para salir" << endl;
		cout << "---> ";
		cin >> vendedor;
				
		switch (vendedor)
		{
			case 0:
				cout << endl;
    			cout << " * S A L I E N D O  D E L  P R O G R A M A * 		Presiona enter para salir...";
			break;
				
			case 1:
				menuProducto(1);
			break;
			
			case 2:
				menuProducto(2);
			break;
			
			case 3:
				menuProducto(3);
			break;
			
			case 4:
				menuProducto(4);
			break;
			
			case 5:
				mostrar(ventas,tam);
				cout << endl;
			break;
			
			default:
    			cout << " No existe ese vendedor " << endl;
    		break;
			
		}
		
	}while(vendedor!=0);
}


void menuProducto()
{
	int producto=0, opcion=0, tam=5,valor=0;
	int ventas[5][6]={0};
	
	//opcion=menuVendedor();
	
	do
	{
		cout << endl;
		cout << " ELIGE UN PRODUCTO " << endl;
		cout << endl;
		cout << "Producto 1" << endl;
		cout << "Producto 2" << endl;
		cout << "Producto 3" << endl;
		cout << "Producto 4" << endl;
		cout << "Producto 5" << endl;
		cout << "Presiona 6 para mostrar tabla " << endl;
		cout << "Presiona 0 para salir" << endl;
		cout << "---> ";
		cin >> producto;
				
				
		switch (producto)
		{
			case 0:
				cout << endl;
    			cout << " * S A L I E N D O  D E L  P R O G R A M A * 		Presiona enter para salir...";
			break;
			
			case 1:
				agregar(ventas,tam,vendedor,1);
				cout << endl;
			break;
			
			case 2:
				agregar(ventas,tam,vendedor,2);
				cout << endl;
			break;
			
			case 3:
				agregar(ventas,tam, vendedor,3);
				cout << endl;
			break;
			
			case 4:
				agregar(ventas,tam,vendedor,4);
				cout << endl;
			break;
			
			case 5:
				agregar(ventas,tam,vendedor,4);
				cout << endl;
			break;
			
			case 6:
				mostrar(ventas,tam);
				cout << endl;
			break;
			
			default:
    			cout << " No existe ese vendedor " << endl;
    		break;
		}
		
	}while(producto!=0);
}

#include <iostream>
using namespace std;

int menuVendedor();
int menuProducto();
void vendedores(int ventas[][6], int tam);
void mostrar(int ventas[][6], int tam);
void productos(int ventas[][6], int tam, int vendedor);
void agregar(int ventas[][6], int tam, int vendedor, int producto);
int suma(int ventas[][6]);

int main()
{
	int ventas[5][6]={0};
	
	vendedores(ventas,5);
	
	
	return 0;
}

void vendedores(int ventas[][6], int tam)
{	
	int opcion1=0;
	
	
	do
	{	
		opcion1=menuVendedor();
		switch(opcion1)
			{
				case 0:
					cout << endl;
    				cout << " ** S A L I E N D O  D E L  P R O G R A M A ** 		Presiona enter para salir...";
				break;
				
				case 1:
					productos(ventas, tam, opcion1);
				break;
			
				case 2:
					productos(ventas, tam, opcion1);
				break;
			
				case 3:
					productos(ventas, tam, opcion1);
				break;
			
				case 4:
					productos(ventas, tam, opcion1);
				break;
			
				case 5:
					mostrar(ventas, tam);
				break;
			
				default:
    				cout << " No existe ese vendedor " << endl;
    			break;
			
			}
		
	}while(opcion1!=0);
}

void productos(int ventas[][6], int tam, int vendedor)
{	
	int opcion2=0;
	
	
	do
	{
		opcion2=menuProducto();		
		switch (opcion2)
		{
			case 0:
				cout << endl;
    			cout << "	Presiona enter para salir de PRODUCTOS...	";
    			cout << endl;
			break;
			
			case 1:
				agregar(ventas,tam,vendedor,opcion2);
				cout << endl;
			break;
			
			case 2:
				agregar(ventas,tam,vendedor,opcion2);
				cout << endl;
			break;
			
			case 3:
				agregar(ventas,tam,vendedor,opcion2);
				cout << endl;
			break;
			
			case 4:
				agregar(ventas,tam,vendedor,opcion2);
				cout << endl;
			break;
			
			case 5:
				agregar(ventas,tam,vendedor,opcion2);
				cout << endl;
			break;
			
			case 6:
				mostrar(ventas, tam);
				cout << endl;
			break;
			
			default:
    			cout << " No existe ese vendedor " << endl;
    		break;
		}
		
	}while(opcion2!=0);
}

int menuVendedor()
{
	int vendedor;
		cout << endl;
		cout << " ELIGE EL VENDEDOR " << endl;
		cout << endl;
		cout << "Vendedor 1\t Vendedor 2\t Vendedor 3\t Vendedor 4\t" << endl;
		cout << "Presiona 5 para mostrar tabla" << endl;
		cout << "Presiona 0 para salir" << endl;
		cout << "---> ";
		cin >> vendedor;		
		
	return vendedor;
}


int menuProducto()
{
	int producto;
		cout << endl;
		cout << " ELIGE UN PRODUCTO " << endl;
		cout << endl;
		cout << "Producto 1\t Producto 2\t Producto 3\t Producto 4\t Producto 5\t" << endl;
		cout << "Presiona 6 para mostrar tabla " << endl;
		cout << "Presiona 0 para salir" << endl;
		cout << "---> ";
		cin >> producto;
	
	
	return producto;
}

void mostrar(int ventas[][6], int tam)
{
	int vendedor, producto;
	
	suma(ventas);
	
	cout << endl;
	
	for(int r=0; r<5; r++)
	{
		cout << "\t [" << r + 1 << "]";
	}
		cout << endl; 
	
	for(int r=0; r<5; r++)
	{
		cout << "[" << r + 1 << "]\t";
		for(int c=0; c<6; c++)
		{
			cout << ventas[r][c] << "\t";
		}
		
		cout << endl; 
	}
}

int suma(int ventas[][6])
{
	int aux=0;
	
	for(int r=0; r<4; r++)
	{
		aux=0;
		for(int c=0; c<5; c++)
		{
			aux+=ventas[r][c];
		}
		ventas[r][5]=aux;
	}
	
	for( int c=0; c<5; c++)
	{
		aux=0;
		for(int r=0; r<4; r++)
		{
			aux+=ventas[r][c];
		}
		ventas[4][c]=aux;
	}
} 


void agregar(int ventas[][6], int tam, int vendedor, int producto)
{
	int valor=0;
	
	cout << " Cuantos productos son? " << endl;
	cin >> valor;
	cout << endl;
	ventas[vendedor-1][producto-1]+=valor;
}
