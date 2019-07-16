/******************************************************************************
                                     PROBLEMA 3
3.- Realice un programa que permita dar como salida la población de dos países (a y b), 
teniendo en cuenta para tal propósito lo siguiente:
* En el Primer Año el País “a” tiene menos población que el país “b”
* Las Tazas de crecimiento de los países “a” y “b” son de 6% y 3% anuales respectivamente.
* Se debe dar como salidas las poblaciones desde el segundo año hasta que la población de 
“a” exceda a la población de “b”, además la cantidad de años que transcurrieron para que esto sucediera

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

    cout<<"La cantidad de años que transcurrieron para que A superara a de B es:  "<<crecimiento; 

    return 0;
}