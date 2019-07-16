#include <iostream>

using namespace std;

int cuentaDiv (int num);

int main()
{
	cout<< cuentaDiv (10);
		
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



