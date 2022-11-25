#include<iostream>
#include<string.h>
using namespace std;

main()
{
	char x[10];
	int index;
	
	for (index = 0; index <= 9; ++index)
	{
		{
		cout << "Enter integer " << index + 1 << ": ";
		cin >> x[index];
		}
	}
	if (x[index] >= 'A' && x[index]<='Z')
		{
		x[index] = x[index] + 31;
		cout << "\nThe converted letter is " << x << ".";
		
		}
		else
			if (x[index] >= 'a' && x[index]<='z')
			{
			x[index] = x[index] - 31;
			cout << "\nThe converted letter is " << x << ".";
			}
			else
				cout << "\nThe character is " << x << ".";

}
