// GPR410031.cpp : Définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>

#define MAX_RANGE 1000
#define MULTIPLE_LENGTH 2

int main()
{
	int multiple[MULTIPLE_LENGTH]{ 3,5 };
	int sum = 0;
	for (int i = 0; i < MAX_RANGE; i++)
	{
		for (int j = 0; j < MULTIPLE_LENGTH; j++)
		{
			if (i % multiple[j] == 0)
			{
				sum += i;
				break;
			}
		}
	}
	std::cout << "Sum of multiple 3 et 5: " << sum<<"\n";
	system("pause");
    return EXIT_SUCCESS;
}

