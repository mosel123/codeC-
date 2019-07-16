
#include <iostream>
#include <string>
using namespace std;

void llenar(int vec[],int tam);
void recorrido(int vec[],int tam);

int main()
{
    int vec[1000];
    int tam=1000;
    
    llenar(vec,tam);
    recorrido(vec,tam);
    
    
    cout<<"Los numeros primos menores a 1000 son: "<<endl;
    for(int i=0;i<1000;i++)
    {
        if(vec[i]==1)
        {
            cout<<i<<endl;
        }
    }
   
   return 0;
}

void llenar(int vec[],int tam)
{
    vec[0]=false;
    vec[1]=false;
    for(int i=2;i<tam;i++)
    {
        vec[i]=true;
    }
}

void recorrido(int vec[],int tam)
{
    for (int i=2; i<tam; i++)
    {
    	if(vec[i]==1)
        for (int j=2; i*j<tam; j++)
        {
            vec[i*j]=false;
        }
    }
}
