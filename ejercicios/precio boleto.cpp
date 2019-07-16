#include <iostream>
using namespace std;

int main()
{
   float precio,dia,distancia,descuento;

    cout << "Introduce tu distancia recorrida en km: ";
    cin >> distancia;

    cout << "Introduce tus dias de viaje: ";
    cin >> dia;

        if(dia >= 7 && distancia >=800)
        {     
            descuento=(distancia*0.17*0.3);
            precio=((distancia * 0.17) - descuento);
        }
        else
             precio = distancia * 0.17;

      cout << "El precio de tu boleto es:  " << precio;

    return 0;
}
