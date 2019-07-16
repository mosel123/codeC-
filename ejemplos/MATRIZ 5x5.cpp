#include <iostream>

using namespace std;

int llenar(int mat[][5]);
void mostrar(int mat[][5]);
int llenar_inver(int mat[][5]);
void diagonal(int mat[][5]);
void diagonal2(int mat[][5]);
void mostrarArrDP (int mat[][5]);
void mostrarDP (int mat[][5]);
void mostrarArrDS (int mat[][5]);
void mostrarAbDS (int mat [][5]);
void GirarSDP(int mat[][5], int tam); 
void GirarSobDS (int mat[][5], int tam);

int main()
{
	int mat[5][5];
	int tam=5;
	
	cout << "        \t **Matriz normal**"<<endl;
	llenar (mat);
	mostrar (mat);
	cout << endl << endl;
	
/*	cout << "             **Matriz inversa**"<<endl;
    llenar_inver (mat,5);
    mostrar (mat,5);
    cout << endl << endl; */
    
	cout << "          **Tu diagonal principal**"<<endl;
	diagonal(mat);
    cout<<endl;
  	
    cout << "          **Tu diagonal SECUNDARIA**"<<endl;
	diagonal2(mat);
	cout<<endl;
	cout<<endl;
	
	cout<< "         **Valores arriba de la diagonal principal**"<<endl;
	mostrarArrDP (mat);
	cout<<endl;
	
	cout<< "         **Valores debajo de la diagonal principal**"<<endl;
	mostrarDP (mat);
	cout<<endl;
	
	cout<< "         **Valores arriba de la diagonal SECUNDARIA**"<<endl;
	mostrarArrDS (mat);
	cout << endl;
	
	cout<< "         **Valores debajo de la diagonal SECUNDARIA**"<<endl;
	mostrarAbDS (mat);
	cout<<endl;
	
	cout<< "         GIRO SOBRE LA DIAGONAL PRINCIPAL"<<endl;
	GirarSDP(mat, tam);
	mostrar(mat);
	cout<< endl;
	
	cout<< "         GIRO SOBRE LA DIAGONAL SECUNDARIA 	"<<endl;
	GirarSobDS(mat,tam);
	mostrar(mat);
	
	return 0;
}


int llenar(int mat[][5])
{
	int n = 1;
	
	for(int r = 0; r < 5; r++)
	{
		for(int c = 0; c < 5; c++)
			mat[r][c] = n++;
	}
	
}
	
void mostrar(int mat[][5])
{
	for(int r = 0; r < 5; r++)
	{
		for(int c = 0; c < 5; c++)
			cout << "\t" << mat[r][c];
			cout << endl;
	}	
	
}

int llenar_inver(int mat[][5])
{
	int n = 1;
	
	for(int c = 4; c >= 0; c --)
	{
		for(int r = 4; r >= 0; r --)
			mat[r][c] = n++;
	}
}


void diagonal(int mat[][5])
{
	for(int r=0; r<5; r++)
		cout << "\t" << " " << mat[r][r];
}


void diagonal2(int mat[][5])
{
	for(int r=0, c=4; r<5; r++, c--)
	cout<< "\t" << " " << mat[r][c];
}
 
 //MOSTRAR NUMEROS ARRIBA Y ABAJO DE DIAGONALES
 
void mostrarArrDP (int mat[][5])
{
	for (int r=0; r<5-1; r++)
	{
		for (int c=r+1; c<5; c++)
		{
		cout << "\t" << " " << mat [r][c];
		}
	}
	
}

void mostrarDP (int mat[][5])
{
	for (int c=0; c<5-1; c++)
	{
		for (int r=c+1; r<5; r++)
		{
		cout << "\t" << " " << mat [r][c];
		}
	}
}

 void mostrarArrDS (int mat[][5])
{
	for (int r=0; r<5-1; r++)
	{

		for (int c=0; c<5-1-r; c++)
		{
		cout << "\t" << " " << mat [r][c];	
		}
	}
}

 void mostrarAbDS (int mat [][5])
{
	for (int r=4; r>=0; r--)
	{
		for (int c=4; c>5-1-r; c--)
		{
		cout << "\t" << " " << mat [r][c];
		}
	}
}

//GIRAR SOBRE DIAGONAL PRINCIPAL Y SECUNDARIA 

void GirarSDP(int mat[][5], int tam)
{
	int aux=0, aux2=0;
	
	for (int r=0; r<tam-1; r++)
	{
		for (int c= r+1; c<tam; c++)
		{
			aux= mat[r][c];
			aux2= mat[c][r];
			mat [r][c]= aux2;
			mat [c][r]=aux;
		}
	}	
} 

void GirarSobDS (int mat[][5], int tam)
{
	int aux=0, aux2=0;
	
	for (int r=0,i=tam-1; r<tam; r++, i--)
	{
		for (int c=0, j=tam-1; c<tam-1-r; c++, j--)
		{
			aux= mat[r][c];
			aux2= mat[j][i];
			mat [r][c]= aux2;
			mat [j][i]=aux;
		}
	}	
}
