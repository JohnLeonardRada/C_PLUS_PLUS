#include<iostream>
using namespace std;

class tollbooth{
	private:
		int cars;
		float money;
		
	public:	tollbooth(): cars(0), money(0){
	}
		void payingcar(){
			++cars;
			money += 150;
		}
		
		void nonpayingcar(){
			++cars;
		}
		
		void display(){
			cout << "\nTotal Number of Cars: " << cars;
			cout << "\nTotal Cash Collected: " << money;
			cout << "\nProgram Exiting!";
		}
		

};

main(){
	
	tollbooth t1;
	int choice;
	
	do{
	
	
	cout <<	"\nEnter 1 for Each Non-Paying Car";
	cout << "\nEnter 2 for Each Paying Car";
	cout << "\nEnter 3 to Display Results and Exit the Program";
	
	cout << "\n\nEnter choice: ";
	cin >> choice;
	
	if (choice == 1){
		t1.nonpayingcar();
		system("pause");
		system("cls");
	}
	else if (choice == 2){
		t1.payingcar();
		system("pause");
		system("cls");
	}
	
	}while (choice == 1 || choice == 2);{
		t1.display();
		system("pause");
		system("cls");
	}
	
}
