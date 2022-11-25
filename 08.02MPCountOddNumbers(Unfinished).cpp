#include<iostream>
using namespace std;


double odd(int t[10], double index)
{
		int odd=0;
		for(int index=0; index<10; ++index)
		{
			if(t[i]%2 == 1)
			++odd;	
		}
		cout << "There are " << odd << " odd integers in the array!" << endl << endl;
		
}

main()
{
	int numbers[10];
	int index;
	int count;
	
	for (index = 0; index <= 9; ++index)
		{
		cout << "Enter integer " << index + 1 << ": ";
		cin >> numbers[index];
		}
	
	count = odd(t,index)
			
}
