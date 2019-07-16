/******************************************************************************
                                  PROBLEMA 1
Leer un numero y mostrar el factorial del numero, mismo que se describe con el 
símbolo n! ejemplo: 5! y se obtiene multiplicando todos los números de 
el 1 al numero = 1 *2 *3 *4 *5 = 120. No probar con números mayores a 19.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num, mult; 
    float factorial;
    
    cout<<"Introduce un numero para calcular su factorial: ";
    cin>>num;
    
    factorial=1;
    
    if (num<=19)
    {
        for(mult=1; mult<=num; mult++)
             factorial*=mult;
             cout<<"El factorial de "<<num<<" es: "<<factorial;
    }
    else
        cout<<"Opcion invalida."<<endl;
    
    return 0;
}
