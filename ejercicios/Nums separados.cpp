#include <iostream>
using namespace std;

int main()
{
    int m,o,n,s,e;
    int dig;

        cout << "Introduce una cifra con 5 digitos: ";
        cin >> dig;
        
        if (dig<=99999)
        {
            m = (dig/10000); 
            o = (dig/1000)%10; 
            n = (dig/100)%10; 
            s = (dig/10)%10; 
            e =  dig%10; 
            
            cout<<endl;
            
            cout<<"Separacion de digitos: " << m << "   " << o << "   " << n << "   " << s << "   " << e;
        }
        else
           cout<< "ERROR, por favor lee las instrucciones.";
        
      
    return 0;
}