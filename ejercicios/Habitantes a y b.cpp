/******************************************************************************
                                     PROBLEMA 3
3.- Realice un programa que permita dar como salida la poblaci�n de dos pa�ses (a y b), 
teniendo en cuenta para tal prop�sito lo siguiente:
* En el Primer A�o el Pa�s �a� tiene menos poblaci�n que el pa�s �b�
* Las Tazas de crecimiento de los pa�ses �a� y �b� son de 6% y 3% anuales respectivamente.
* Se debe dar como salidas las poblaciones desde el segundo a�o hasta que la poblaci�n de 
�a� exceda a la poblaci�n de �b�, adem�s la cantidad de a�os que transcurrieron para que esto sucediera

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,crecimiento; 

    a=100; 
    b=200; 

    crecimiento=0; 

    while(a<=b)
    { 
        a*=1.06; 
        b*=1.03; 

        crecimiento++; 
    } 

    cout<<"La poblacion de A en habitantes es: "<<a<<endl;
    cout<<"La poblacion de B en habitantes es: "<<b<<endl;

    cout<<"La cantidad de a�os que transcurrieron para que A superara a de B es:  "<<crecimiento; 

    return 0;
}