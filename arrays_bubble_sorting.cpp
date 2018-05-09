/*
bubblesort
*/
#include <iostream>
#include <random>
using namespace std;

int main()
{
	int numbers[10] = {12,7,15,1,54,78,7,100,5,10};
	int temp = 0;
	
	
	
	for (int pass=0; pass<10; pass++)
	{
		for (int sort=0; sort<10; sort++)
		{
			if numbers[sort]>numbers[sort+1];
			{
				temp = numbers[sort+1];
				numbers[sort+1] = numbers[sort];
				numbers[sort] = temp;
			}
		}
	}
	
	for (int i=0; i<10; i++)
	{
		cout << numbers[i];
		if (i<9)
		{
		cout << ", ";
		}
	}
	
system("pause");
return 0;
}
