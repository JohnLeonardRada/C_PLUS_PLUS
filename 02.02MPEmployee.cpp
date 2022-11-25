#include<iostream>
using namespace std;

class employee{
	private:
		int idnumber;
		int dependants;
		float hourlyrate;
		float hours;
	public: employee(): idnumber(0), dependants(0), hourlyrate(0), hours(0){
	}		
	
	void getdata(){
		cout<<"\nEnter the ID Number: ";
		cin>>idnumber;
		cout<<"\nEnter the hourly rate: ";
		cin>>hourlyrate;
		cout<<"\nEnter the number of hours worked with this week: ";
		cin>>hours;
		cout<<"\nEnter the number of dependents: ";
		cin>>dependants;
	}
	
	double grosspay(){
		float normalpay;
		float overtime;
		float remaining;
		double gross;
		
		if (hours > 40){
			remaining = hours - 40;
			normalpay = 40 * hourlyrate;
			overtime = remaining * hourlyrate * 1.5;
			gross = normalpay + overtime;
		}
		else if (hours <= 40){
			gross = hourlyrate * hours;
		}
		
		cout<<"\nThe gross pay is "<< gross;
		return(gross);
		
	}
	
	double netpay(double gross){
		float socialsectax;
		float hdf;
		float prof;
		float healthins;
		float net;
		
		socialsectax= gross * 0.015;
		cout<<"\nSocial Security Tax = "<<socialsectax;
		hdf = gross * 0.03;
		cout<<"\nHDF = "<<hdf;
		prof = gross * 0.10;
		cout<<"\nProfessional Income Tax = "<<prof;
		if (dependants >= 3){
			healthins= 300;
			cout<<"\nHealth Insurance = "<<healthins;
		}
		
		net = gross - (socialsectax + hdf + prof + healthins);
		cout<<"\nNet Take Home Pay for the Week = "<< net <<" pesos";
	}
	
};

main()
{
	employee e1, e2;
	e1.getdata();
	e1.netpay(e1.grosspay());
	e2.getdata();
	e2.netpay(e2.grosspay());
}


