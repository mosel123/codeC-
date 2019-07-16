#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
int Agregar(int v[],int valor, int pos);
int Eliminar(int v[], int tam, int pos);
int Buscar(int v[], int tam, int VB);
int Modificar(int v[], int valor, int pos);
int Insertar(int v[],int valor, int pos);
int Recorrer(int v[], int tam, int pos);
void Reporte(int v[], int tam);
int NA();
int main()
{
    int v[20] = {0}, tam = 20, opcion, valor, pos, vb, ag = 0;
    
    srand(time(NULL));
    
    do
    {
        cout << endl << "1.- Agregar 2.- Eliminar 3.- Buscar 4.- Modificar 5.- Insertar 6.- Reporte 0.- salir \n";
        cin >> opcion;
        
        switch(opcion)
        {
            case 1:
                if(ag == 20)
                {
                    cout << "VECTOR LLENO";
                }
                else
                {
                    valor = NA();
                    Agregar(v,valor,ag);
                    ag++;
                    cout << "Valor agregado";
                }
                break;
            case 2:
                cout << "Ingrese el valor a eliminar: ";
                cin >> valor;
                pos = Buscar(v,tam,valor);
                if(pos>=0)
                {
                    Eliminar(v,tam,pos);
                    ag--;
                }
                else
                {
                    cout << "Ingreso un valor no valido!";
                }
                break;
            case 3:
                cout << "Ingrese el valor a buscar: ";
                cin >> vb;
                pos = Buscar(v,tam,vb);
                if(pos>=0)
                {
                    cout<<"El valor "<<vb<<" esta en la posicion: " << pos;
                }
                else
                {
                    cout<<"El valor buscado no existe;";
                }
                break;
            case 4:
                cout << "Ingresa el valor a modificar: ";
                cin >> valor;
                pos = Buscar(v,tam,valor);
                cout << "Ingresa el nuevo valor: ";
                cin >> valor;
                if(pos>=0)
                {
                    Modificar(v,valor,pos);
                }
                else
                {
                    cout << "Ingresaste un valor no valido";
                }
                break;
            case 5:
                cout << "Ingrese la posicion en la que insertara el valor: ";
                cin >> pos;
                valor = NA();
                Insertar(v,valor, pos);
                break;
            case 6:
                Reporte(v,tam);
                break;
        }
        
    }while(!opcion == 0);

    return 0;
}
int Agregar(int v[],int valor, int pos)
{
    v[pos] = valor;
}
int Recorrer(int v[], int tam, int pos)
{
    for(int i = pos; i < tam; i++)
    {
        v[i] = v[i + 1];
    }
}
int Buscar(int v[], int tam, int VB)
{
    int pos = 0;
    for(int i = 0; i < tam; i++)
    {
        if(VB == v[i])
        {
            pos = i;
        }
        if(pos<0 || pos >19)
        {
            pos = -1;
        }
    }
    return pos;
}
void Reporte(int v[],int tam)
{
    cout << "El reporte es: ";
    
    for(int i = 0; i < tam; i++)
    {
        cout << " " << v[i];
    }
}
int NA()
{
    int resultado;
    
    resultado = 10 + rand() % (291);
    
    return resultado;
}
int Eliminar(int v[], int tam, int pos)
{
    v[pos] = 0;
    Recorrer(v,tam,pos);
}
int Modificar(int v[], int valor, int pos)
{
    v[pos] = valor;
}
int Insertar(int v[],int valor, int pos)
{
    v[pos] = valor;
}
