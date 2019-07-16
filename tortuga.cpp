#include <stdio.h>
#include <iostream>

int Derecharecha(int &direc);
int girarizquierda(int &direc);
void mostrar(int mat[][20], int tam);
void avanzar(int mat[][20], int tam,int direc,int pluma,int &pr,int &pc,int pasos);

using namespace std;

int main()
{
    int mat[20][20] = {{0}}, tam=20;
    int opc;
    bool pluma = false;
    int direc=3;
    int pr=0,pc=0,pasos;
    
    
    cout<<"Menu:    "<<endl;
	cout<<endl<<" [1] = Subir la pluma \n [2] = Bajar la pluma \n [3] = Gira hacia la derecha \n [4] = Gira hacia la izquierda \n";
	cout<<" [5] = Avanzar \n [6] = Imprime el arreglo\n [7] = Salir\n"<<endl;
	
	do{
		cout<<"Ingresa el opcion que deseas:  \t"<<endl<<endl;
		cin>>opc;
		
		switch(opc)
		{
			case 1: 
				pluma=0;
            	cout << " La pluma esta arriba" << endl;
			break;
			
			case 2: 
				pluma=1;
            	cout << " Pluma hacia abajo" << endl;
			break;
			
			case 3: 
				direc += 1;
    			
            	if(direc==5)
                	direc=1;
            	cout << direc << " La tortuga giro a la derecha" << endl;
			break;
			
			case 4: 
			
				direc -= 1;
        		if(direc==0)
            		direc=4;
        		cout << direc << " Giraste a la izquierda" << endl;
			break;
			
			case 5: 
					
				cout<<"¿Cuantos pasos quieres avanzar?";
           		cin>>pasos;
           		avanzar(mat,tam,direc,pluma,pr,pc,pasos);
			break;
			
			case 6: 
				
				cout<<"Lo dibujado en el arreglo fue: "<<endl;
				mostrar(mat, 20);
			break;
			
			case 7: 
				cout<<"____saliendo del programa____";
			break;
			
			default: 
				cout<<"ERROR";
			break;
		}
		
	}while(opc!= 7);
	
	return 0;
}

void mostrar(int mat[][20], int tam)
{
	tam=20;
	
    for(int r=0;r<tam;r++)
    {
        for(int c=0;c<tam;c++)
        {
            if(mat[r][c]==1)
            {
                cout<<'*'<<"\t";
            }

        }
        cout<<endl<<endl ;
    }
}


void avanzar(int mat[][20], int tam,int direc,int pluma,int &pr,int &pc,int pasos)
{
    if(direc==1)
    {
        for(int i=1;i<=pasos;i++)
        {
            pc++;
            if(pc==20)
        	    pc=19;
            if(pluma==1)
            	mat[pr][pc]=1;
        }
    }
    else if(direc==2)
    {
        for(int i=1;i<=pasos;i++)
        {
            pr++;
            if(pr==20)
            	pr=19;
            if(pluma==1)
            	mat[pr][pc]=1;
        }
        
    }
    else if(direc==3)
    {
        for(int i=1;i<=pasos;i++)
        {
         	pc--;
            if(pr==-1)
            	pr=0;
            if(pluma==1)
            	mat[pr][pc]=1;
        }
    }
    else if(direc==4)
    {
        for(int i=1;i<=pasos;i++)
        {
            pr--;
            if(pr==-1)
            	pr=0;
            if(pluma==1)
            	mat[pr][pc]=1;
        }
    }
}
