#include<iostream>
using namespace std;

int main()
{
    float sueldo;
    
    cout << "Ingresa tu sueldo actual: ";
    cin >> sueldo;
    
    if((sueldo >= 0) && (sueldo <= 1000))
    {
        sueldo = sueldo + (sueldo * 0.18);
    }
    else
    {
        if((sueldo >= 1001) && (sueldo <= 1100))
        {
            sueldo = sueldo + (sueldo * 0.15);
        }
        else
        {
            if((sueldo >= 1101) && (sueldo <= 1200))
            {
                sueldo = sueldo + (sueldo * 0.12);
            }
            else
            {
                if((sueldo >= 1201) && (sueldo <= 1300))
                {
                    sueldo = sueldo + (sueldo * 0.10);
                }
                else
                {
                    if((sueldo >= 1300))
                    {
                        sueldo = sueldo + (sueldo * 0.08);
                    }
                }
            }
        }
    }
    
    cout << "\nTu nuevo sueldo es: " << sueldo;
    
    return 0;
}

