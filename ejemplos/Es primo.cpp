#include <iostream>

using namespace std;

int cuentaDiv (int num);
bool EsPrimo (int num);

int main()
{
	int n;
	
	cout<<"Introduce un numero:    ";
	cin>>n;
	cout<<"Divisores:  "<<cuentaDiv(n)<<endl;
	cout<<"Es:  "<<EsPrimo(n);
	

	return 0;
}


int cuentaDiv (int num)
{
	int cont=0;
	
	for(int i=1;i<=num; i++)
		if (num%i==0)
			cont ++;
	return cont;	
}

bool EsPrimo (int num)
{
	if(cuentaDiv(num)==2)
		return true;
	else
		return false;
}

