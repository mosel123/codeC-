
#include <iostream>
#include <string>
int esSIMETRICO(int numero[], int tam);
int evaluaorden(int numero[],int tam);
using namespace std;

int main()
{
    int numero[10]={1,2,3,4,5,5,4,3,2,1},tam=10;
    
    cout<<evaluaorden(numero,tam);
  
}
int esSIMETRICO(int numero[], int tam)
{
    for(int i=0;i<tam;i++)
    {
        if(numero[i]==numero[tam-(i+1)])
        {
            if(i==(tam/2))
            {
                return 1;
            }
        }else //if(!(numero[i]==numero[tam-(i+1)]))
        {
            return 0;
        }
    }
    
}
int evaluaorden(int numero[],int tam)
{
    int a=0,b=0;
    for(int i=0;i<tam;i++)
    {
        if(numero[i]<numero[i+1])
        {
            a++;
            if(a==9)
            {
                return 1;
            }
            else if(numero[i]>numero[i+1])
            {
                return 0;
            }
        }
        else if(numero[i]>numero[i+1])
        {
            b++;
            if(b==9)
            {
                return -1;
            }
            else if(numero[i]>numero[i+1])
            {
                return 0;
            }
        }
        
    }
}
