#include <iostream>

using namespace std;

int conv_tiemp(int seg, int min, int hr);
void conv_seg(int tiempo);

//01:05:23  01:05:59  01:59:59  23:59:59
//01:05:24  01:06:00  02:00:00  00:00:00

int main()
{
	int hr, min, seg;
	int tiempo=0;
	
   //ENTRADA 
   cout << "ingresa la hora:  ";
   cin >> hr;
   cout << "ingresa los minutos:  ";
   cin >> min;
   cout << "ingresa los segundos:  ";
   cin >> seg; 
   
   cout << "Tus segundos son: " << conv_tiemp(seg,min,hr);
   cout<<endl<<endl;
   
   cout<<"Ingresa los segundos a convertir: "<<endl;
   cin>>tiempo;
   
   conv_seg(tiempo);
   
   return 0;
   
}

int conv_tiemp(int seg, int min, int hr)
{
	
	int suma=0; 
	
	min*=60;
	hr*=3600;
	seg*=1;
	
	suma=min+hr+seg;
	
	return suma;
	
}

void conv_seg(int tiempo)
{
	int hr=0, min=0, seg=0;
	
	if(tiempo%3600==0)
		hr=tiempo/3600;
		
	else
		hr=tiempo/3600;
		tiempo%=3600;
	
		if (tiempo%60==0)
			min=tiempo/60;
		else
			min=tiempo/60;
			tiempo%=60;
			seg=tiempo;
		
	cout<<"Horas:  "<<hr<<" Minutos: "<<min<<" Segundos: "<<seg;

}



