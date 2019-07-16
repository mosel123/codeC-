/******************************************************************************
                               PROBLEMA 2
Leer un numero base y una potencia y mediante ciclos obtener el resultado de elevar 
el numero base a la potencia indicada.
Ejemplo base=3, potencia = 4, el resultado es 3^4, es decir = 3 x 3 x 3 x 3=81

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int mult,num,i,potencia;
    
    cout<<"Introduce el numero base: ";
    cin>>num;
    
    cout<<"Introduce la potencia a la que deseas elevar el numero: ";
    cin>>potencia;
    
    mult=1;
    
    for(int i=1; i<=potencia; i++)
        mult*=num;
        
        cout<<num<<" elevado a la "<<potencia<< " potencia, es igual a: "<<mult;
    
    return 0;
}