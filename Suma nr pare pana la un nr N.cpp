// Suma numerelor pare pana la un numar N
#include "pch.h"
#include <iostream>
int N, sum = 0;
int main()
{
    std::cout << "Alege un numar \n";
	std::cout << "N= ";
	std::cin >> N;
	for (int i = 2; i < N; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}

	std::cout << "Suma numerelor pare pana la " << N << " este: " << sum;

}

