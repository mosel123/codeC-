using namespace std;

#include <iostream>

void llenar (int vec[], int tam, int valor);
int suma (int vec[], int tam);
void Mos_Ascen (int vec[], int tam);
void Mos_Desc (int vec[], int tam);
void Girar_arr(int vec[], int tam, int aux);
void Girar_abajo(int vec[], int tam, int aux);

int main ()
{
	int vec [10];
	int n, tam=10, sum=0;
	
	cout<<"Introduce un numero: ";
	cin>>n;
	
	cout<<"\n";
/*	
	for(int i=0;i<10;i++)
	{	
		vec[i]=n++;
		
	} */
	
/*	//ORDEN ACENDENTE 
	for(int i=0;i<10;i++)
	{	
		cout<<"La posicion ["<<i<<"]"<<"\t"<<"=  "<<vec[i]<<endl;
	}
	
	cout<<"\n"; */
	
	//ORDEN DESENDENTE 
/*	for(int i=9;i>=0;i--)
	{	
		cout<<"La posicion ["<<i<<"]"<<"\t"<<"=  "<<vec[i]<<endl;
	}
	
	cout<<"\n"; */
	
	//SUMA
/*	for(int i=0;i<10;i++)
	{	
		sum+=vec[i];
	}
		cout<<"La suma de las posiciones es igual a: "<<sum<<endl;
	
	return 0;
} */


void llenar (int vec[], int tam, int valor)
{
		for(int i=0;i<tam;i++)
		vec[i]=valor++;
}

int suma (int vec[], int tam)
{
	int sum=0;
	
		for(int i=0;i<tam;i++)
	{	
		sum+=vec[i];
	}
			cout<<"La suma de las posiciones es igual a: "<<sum<<endl;
	
	return sum;
}

void Mos_Ascen (int vec[], int tam)
{
	for(int i=0;i<tam;i++)
	{	
		cout<<"La posicion ["<<i<<"]"<<"\t"<<"=  "<<vec[i]<<endl;
	}
}

void Mos_Desc (int vec[], int tam)
{
	for(int i=tam-1;i>=0;i--)
	{	
		cout<<"La posicion ["<<i<<"]"<<"\t"<<"=  "<<vec[i]<<endl;
	}
}

void Girar_arr(int vec[], int tam, int aux)
{
	aux=vec[0];
	
	for(int i=0;i<tam-1;i++)
	{
		vec[i]=vec[i+1]
	}
	
	vec[tam-1]=aux;
}

void Girar_abajo(int vec[], int tam, int aux)
{
	aux=vec[0];
	
	for(int i=tam-1;i>=0;i--)
	{
		vec[i]=vec[i-1]
	}
	
	vec[tam+1]=aux;
}


