#include<iostream>
#include<cmath>
using namespace std;

double comp_mean (double x1, double x2, double x3, double x4, double x5)
{
	double mean;
	mean = 0;
	
	mean = x1 + x2 + x3 + x4 + x5;
	mean = mean / 5;
	return (mean);
}

double comp_std (double x, double x1, double x2, double x3, double x4, double x5)
{
	double mean;
	double std;
	std = 0;
	
	mean = comp_mean(x1,x2,x3,x4,x5);
	std = sqrt((pow(x1-mean,2))+(pow(x2-mean,2))+(pow(x3-mean,2))+(pow(x4-mean,2))+(pow(x5-mean,2))/ 5);
	return(std);	
}

main ()
{
	double x;
	double x1;
	double x2;
	double x3;
	double x4;
	double x5;
	double mean;
	float std;
	
	cout << "Enter the value for x1: ";
	cin >> x1;
	cout << "Enter the value for x2: ";
	cin >> x2;
	cout << "Enter the value for x3: ";
	cin >> x3;
	cout << "Enter the value for x4: ";
	cin >> x4;
	cout << "Enter the value for x5: ";
	cin >> x5;
	
	mean = comp_mean(x1,x1,x3,x4,x5);
	cout << "\nThe mean is " << mean << ".";
	
	std = comp_std(x,x1,x2,x3,x4,x5);
	cout << "\nThe standard deviation is " << std << ".";
}
