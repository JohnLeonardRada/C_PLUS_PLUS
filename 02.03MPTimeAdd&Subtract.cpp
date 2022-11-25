#include<iostream>
using namespace std;

class times{
	private: 
		int hours;
		int minutes;
		int seconds;
	public: times(): hours(6), minutes(34), seconds(19){
	}
	times(int hrs, int mins, int secs): hours(hrs), minutes(mins), seconds(secs){
		hrs = 6;
		mins = 34;
		secs = 19;
	}
	
	void inputData(){
		// input for hours
		cout << "Enter the number of hours: ";
		cin >> this -> hours;
		while(this -> hours < 0 || this -> hours >= 25){
			cout << "Invalid Input... Try Again! ";
			cout << "Enter the number of hours: ";
			cin >> this -> hours;
		}
		// input for minutes
		cout << "Enter the number of minutes: ";
		cin >> this -> minutes;
		while(this -> minutes < 0 || this -> minutes < 60){
			cout << "Invalid Input... Try Again! ";
			cout << "Enter the number of minutes: ";
			cin >> this -> minutes;
		}
		if(this -> minutes == 60){
			this -> minutes = 0;
			this -> hours = this -> hours + 1;
		}
		// input for seconds
		cout << "Enter the number of seconds: ";
		cin >> this -> seconds;
		while(this -> seconds < 0 || this -> seconds < 60){
			cout << "Invalid Input... Try Again! ";
			cout << "Enter the number of seconds: ";
			cin >> this -> seconds;
		}
		if(this -> seconds == 60){
			this -> seconds = 0;
			this -> minutes = this -> minutes + 1;
		}
		// function to display
		void display(){
		cout << "\nThe " << name << " time is " <<  this->hours << " hours, " << this->minutes << " minutes, and " << this->seconds << " seconds." << endl;
		}
		
		times Add(const times& two){
			time temp;
			temp.hours = 0;
			temp.minutes = 0;
			temp.seconds = 0;
			
			temp.seconds = this -> seconds + two.seconds;
			if(temp.seconds >= 60){
				temp.seconds =  temp.seconds - 60;
				temp.minutes = temp.minutes + 1;
			}
			
			temp.minutes = temp. minutes + this -> minutes + two.minutes;
			if(temp.minutes >= 60){
				temp.minutes = temp.minutes - 60;
				temp.hours = temp.hours + 1;
			}
			
			temp.hours = temp.hours + this -> hours + two.hours;
			if(temp.hours >= 25){
				temp.hours = temp.hours -24;
			}
			return(temp)
		}
		
		times Subtract(const times& two){
			time temp;
			
			temp.hours = 0;
			temp.minutes = 0;
			temp.seconds = 0;
			
			temp.seconds = this -> seconds - two.seconds;
			if(temp.seconds < 0){
				temp.seconds = temp.seconds + 60;
				temp.minutes = temp.minutes + 1;
			}
			
			temp.minutes = temp.minutes - this -> minutes - two.minutes;
			if(temp.minutes < 0){
				temp.minutes = temp.minutes + 60;
				temp.hours = temp.hours + 1;
			}
			
			temp.hours = temp.hours - this -> hours - two.hours;
			if(temp.hours < 0){
				temp.hours = temp.hours + 24;
				
			} 
			return(temp);
	
			
		}
		void input(){
			cout << "2nd time" << endl;
			cout << "Enter Hours, Minutes, and Seconds of the 2nd time: " << endl;
		}
	
	}
};

main(){
	times t1, t2,t3,t4;
	t1.inputData();
	t2.inputData();

	
}
