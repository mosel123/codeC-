using namespace std;

#include <iostream>

int es_simetrico(int vec[], int tam);
int evalua_ord(int vec[],int tam);

int main ()
{
	int vec[10]={1,2,3,4,5,5,4,3,2,1};
	
	int tam=10;
    
    evalua_ord(vec,tam);
    
    return 0;	
}

int es_simetrico(int vec[], int tam)
{
     for(int i=0, j=tam-1; i<tam/2; i++, j--)
    {
        if(vec[i]!=vec[j])
            return 0;   
    }  
       return 1;
}


int evalua_ord(int vec[],int tam)
{
	int a=0,b=0;
    for(int i=0;i<tam;i++)
    {
        if(vec[i]<vec[i+1])
        {
            a++;
            if(a==9)
                return 1;
            else 
			 if(vec[i]>vec[i+1])
                return 0;
        }
        else 
			if(vec[i]>vec[i+1])
        	{
            	b++;
            	if(b==9)
               	 return -1;
            	else 	
					if(vec[i]<vec[i+1])
                	  return 0;
            }
    }   	
}


