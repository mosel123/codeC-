using namespace std;

#include <iostream>
#include <conio.h>
#include <string>
#include <math.h>

int f(int x);

int main() {

	for(int i=1;i<=5;i++)
		cout<<i<<"\t"<<f(i)<<endl;

	return 0;
}

int f(int i) {
	
	int x=i; 
	
	if (x==1 || x==0)
		return 1;
	else
		return x*f(x-1);
	
}
