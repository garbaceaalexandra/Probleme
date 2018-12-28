// Cel mai mare numar Fibonacci mai mic sau egal cu n
#include "pch.h"
#include <iostream>
int n,a,b,c;
int main()
{
    std::cout << "Alege numarul n:\n";
	std::cout << "n= ";
	std::cin >> n;
	a = 0;
	b = 1;
	while (a+b<=n)
	{
		c = a + b;
		a=b;
		b = c;

	}
	std::cout <<"Cel mai mare numar Fibonacci mai mic decat "<<n<<" este: "<< c;

	
}

