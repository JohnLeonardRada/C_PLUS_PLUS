#include<iostream>
using namespace std;

class tollbooth{
	private:
		int numOfCars;
		float money;
	public:
		tollbooth(): numOfCars(0), money(0.0){
		}
		
		void payingcar(){
			this -> numOfCars = this -> numOfCars + 1;
			this -> money = this -> money + 150;
		}
		
		void nonpayingcar(){
			this -> numOfCars = this -> numOfCars + 1;
		}
		
		void display(){
			cout << "\nThe total number of cars entered: " << this -> numOfCars << endl;
			cout << "Total money collected: " << this -> money << endl;
		}
};

main(){
	
	tollbooth edsa;
	int choice;
	
		do{
				cout << "Enter 1 for Each Non-paying Car" << endl;
				cout << "Enter 2 for Each Paying Car" << endl;
				cout << "Enter 3 to Display" << endl;
				cout << "Enter 4 to Exit Program" << endl;
				cout << "\nEnter choice: ";
				cin >> choice;
				
				switch(choice){
					case 1: 
						edsa.nonpayingcar();
						cout << "Input Recieved..." << endl;
						system("pause");
						system("cls");
					break;
					
					case 2:
						edsa.payingcar();
						cout << "Input Recieved..." << endl;
						system("pause");
						system("cls");
					break;
					
					case 3:
						edsa.display();
						system("pause");
						system("cls");
					break;
					
					default:
						cout << "\nInvalid Entry... Try Again!" << endl;
						system("pause");
						system("cls");
					break;
				}
			}while (choice != 1 || choice != 2 || choice != 3);
		
	
}
