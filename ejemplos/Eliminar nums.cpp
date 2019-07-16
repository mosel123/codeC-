//Leer un vector (procurar poner secuencias de numero repetidas) y crear una función llamada comprimir, 
//que reciba el vector y el tamaño y elimine las secuencias repetidas dejando solo el primer numero,
//metiendo el valor -1 al final del arreglo por cada valor eliminado.

//Ejemplo {1,2,2,2,2,3,1,1,1,2,4,4,4,2,5,5,2,2,3,3,3,4,4,4,5} quedaría {1,2,3,1,2,4,5,2,3,4,5,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}

using namespace std;
#include <iostream>

void comprimir (int vec[], int tam);
void llenar (int inicial[], int pos, int valor);

int main ()
{
	//int vec[25]={1,2,2,2,2,3,1,1,1,2,4,4,4,2,5,5,2,2,3,3,3,4,4,4,5};
	//int tam=25;
	
	int inicial[25], aux[25], final[25];
	int pos,i, j=0, z=0, k, cont, num, tam=25;
	
	cout<<"Digite las posiciones del vector:  ";
	cin>>pos;
	
	llenar (inicial,pos,tam);
	
	
	
	
	
	cout<<"vector final sin repeticiones: ";
	comprimir(final,pos);
	

	return 0;	
}


void comprimir (int final[], int pos)
{
	int num, j=0, z=0, k, cont;
	int aux[25], inicial[25];
	
	
	 for(int i=0; i<pos; i++)
	 {
	 	cont=0;
	 	
	 	num=inicial[i];
	 	
	 	aux[j]=num;
	 	j++;
	 	
		for(k=0; k<pos;k++)
		{
			if (aux[k]==num)
			{
				cont++;
			}	
		}
        
        if(cont==1)
        {
    		final[z]=num;
    		z++;
		}
        
     }
     
}

void llenar (int inicial[], int pos, int tam)
{
		for(int i=0;i<tam;i++)
		inicial[i]=pos++;
}


/*void eliminar (int vec[], int tam)
{
	int pos=2;
	 
	for(int i=0; i<tam;i++)
		if(i==pos)
		{
			while(i<tam)
			{
				vec[i]=vec[i+1];
				i++;
			
			}
		}	
	
	
} */
