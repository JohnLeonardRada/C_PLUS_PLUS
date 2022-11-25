#include<iostream>
using namespace std;

main()
{
	int numbers[10];
	int index;
	int sum;
	

	for (index = 0; index <= 9; ++index)
		{
		cout << "Enter integer " << index + 1 << ": ";
		cin >> numbers[index];
		}
	
	for (index = 0; index <= 9; ++index)
		{
			
			if(numbers[index] >= 5 || numbers[index] <=10 )
			sum = sum + numbers[index];
			cout << "\nThe sum of numbers between 5 and 10 is "<< sum << ".";
		}
 	
 	

}
