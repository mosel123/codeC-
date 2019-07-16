#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    
    cout<<"Por favor introduzca el primer numero: ";
    cin>>num1;
    
    cout<<"Por favor introduzca el segundo numero: ";
    cin>>num2;
    
    cout<<endl;
    
    if(num1>num2)
    {
        if(num1%num2==0)
             cout<<num1<<" es multiplo de "<<num2;
         else
             cout <<num1<<" mo es multiplo de "<<num2;
    }
    else
        {
             if(num2%num1==0)
                cout<<num2<<" es multiplo de " <<num1;
             else
                cout<<num2<<" no es multiplo de " <<num1;

        }

    return 0;
}