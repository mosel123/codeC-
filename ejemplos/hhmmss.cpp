#include <iostream>

using namespace std;

void conv_seg(int tiempo);
int conv_tiemp(int seg, int min, int hr);
int resta_seg(int segEnt, int segSal);

//01:05:23  01:05:59  01:59:59  23:59:59
//01:05:24  01:06:00  02:00:00  00:00:00

int main()
{
	int se, ss, me, ms, he, hs;
	int result=0;
	int segEnt, segSal, tiempo;
	
	//ENTRADA 
   cout << "ingresa la hora de entrada:  ";
   cin >> he;
   cout << "ingresa los minutos de entrada:  ";
   cin >> me;
   cout << "ingresa los segundos de entrada:  ";
   cin >> se;
   
   //SALIDA
   cout << "ingresa la hora de salida:  ";
   cin >> hs;
   cout << "ingresa los minutos de salida:  ";
   cin >> ms;
   cout << "ingresa los segundos de salida:  ";
   cin >> ss; 
   cout<<endl<<endl;
   
   conv_tiemp(se, me, he);
   conv_tiemp(ss, ms, hs);
   
   segEnt=conv_tiemp(se, me, he);
   segSal=conv_tiemp(ss, ms, hs);
   tiempo=resta_seg(segEnt,segSal);
	
   cout<<"Las horas que trancurrieron es:  "<<endl;
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

int resta_seg(int segEnt, int segSal)
{
	int rest=0;
	
	rest= segSal-segEnt;
	
	return rest;
}

