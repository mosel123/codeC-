#include <iostream>

using namespace std;

void comprimir(int vec[], int res[]);

int main()
{
    int vec[25]={1,2,2,2,2,3,1,1,1,2,4,4,4,2,5,5,2,2,3,3,3,4,4,4,5};
    int res[25]={0};
    
    comprimir(vec,res);
}

void comprimir(int vec[], int res[])
{
    int cont=0;
    int cont2=1;
    
    res[0]=vec[0];
    
    for(int i=1;i<=24;i++)
    {
        if(vec[i]==vec[i-1])
            cont++;
        else
        {
            res[cont2]=vec[i];
            cont2++;
        }
    }
    
    for(int i=(cont-1);i<=24;i++)
    {
        res[i]=-1;
    }
    cout<<"Vector principal:  ";
    for(int i=0;i<=24;i++)
        cout<<vec[i]<<",";
        
    cout<<endl<<"Vector resultante:   ";
    for(int i=0;i<=24;i++)
        cout<<res[i]<<",";
} 

