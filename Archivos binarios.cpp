using namespace std;

#include <iostream>
#include <fstream>

int main ()  //LEER 
{
	char c1='A', c2=64;
	int i1=105999, i2=-1;
	double d=3.141592111;
	
	ifstream arch("D:\\files\\dibujo.bmp", ios::in| ios::binary);
	
	arch.read ((char *) &c1, sizeof(c1));
	arch.read ((char *) &c2, sizeof(c2));
	arch.read ((char *) &i1, sizeof(i1));
	arch.read ((char *) &i2, sizeof(i2));
	arch.read ((char *) &d,  sizeof(d)); 
	
	
	
	arch.seekg(18);   //IRSE DIRECTAMENTE A LA LINEA 
	arch.read ((char *) &i2, sizeof(i2));
	cout << "SALIDA"<< endl;
	
	
	
	cout << c1 << endl;
	cout << c2 << endl;
	cout << i1 << endl;
	cout << i2 << endl;
	cout << d << endl;
	
	arch.close();
	
	return 0;	
}
