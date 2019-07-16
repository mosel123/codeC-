// Example program
#include <iostream>
#include <string>
using namespace std;

int funcionTriangulo(int b, int a, int h);

int main()
{
    /*
    int b, a, h;
  
    cout << "Ingresa la medida de la base: ";
    cin >> b;
    cout << "Ingresa la medida de la altura: ";
    cin >> a;
    cout << "Ingresa la medida de la hipotenusa: ";
    cin >> h;
  
     if ( funcionTriangulo(b, a, h) == 1 )
     {
        cout << "\nTus medidas SI son un triangulo rectangulo " << endl;
     } 
    else
     {
        cout << "\nNO es un triangulo rectangulo " << endl;
     }
     */
     
    for(int a=1; a<=200; a++)
    {
        for(int b=1; b<=200; b++)
        {
            for(int h=1; h<=200; h++)
            {
                if  (funcionTriangulo(a, b, h) == 1)
                {
                    cout << a << "      " << b << "     " << h << endl;
                }
            }
        }
    }
     
  return 0;
}

int funcionTriangulo(int b, int a, int h)
{
    int aa, bb ,hh;
    
    aa = a * a;
    bb = b * b;
    hh = h * h;
    
    if ( (aa + bb) == hh )
    {
        return 1;
        
    }
    else
    {
        return 0;
    }
    
}
