#include <iostream>
#include <string>
using namespace std;

void histograma(int n);

int main()
{
  histograma(5);
  histograma(10);
}

void histograma(int n)
{
    for(int i=1; i<=n; i++)
	    cout << " * ";
    cout << endl;
    
}
