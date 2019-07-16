using namespace std;

#include <iostream>
#include <conio.h>
#include <string>
#include <math.h>

int f(int i);

int main() {

	for(int i=1;i<=10;i++)
		cout<<i<<"\t"<<f(i)<<endl;

	return 0;
}

int f(int i) {
	
	int x=i; 
	
	if (x==1)
		return 2;
	else
		if(x==0)
			return 1;		
	    else
			return f(x-1)+f(x-2);
	
}
