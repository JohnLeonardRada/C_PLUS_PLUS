#include <iostream>
using namespace std;

main ()
{
	int day;
	int month;

    cout << "Enter the month of your birthday: ";
  	cin >> month;
 	cout << "Enter the day of your birthday: ";
	cin >> day;
   
   switch (month) 
   {              
   	
        case 1:   //check for January
            if (day >= 1 && day <= 19)
                cout << "\nYour horoscope sign is Capricorn.";
            else
                if (day >= 20 && day <= 31)
                    cout << "\nYour horoscope sign is Aquarius.";
                else   //This means day is not between 1 amd 31.
                    cout << "\n\nYou entered an invalid date! Program Terminating!";
            break;
            
        case 2:   //check for February
            if (day >= 1 && day <= 18)
                cout << "\nYour horoscope sign is Aquarius.";
            else
                if (day >= 19 && day <= 28)
                    cout << "\nYour horoscope sign is Pisces.";
                else
                    cout << "\n\nYou entered an invalid date! Program Terminating!";
            break;
            
        case 3:   //check for March
            if (day >= 1 && day <= 20)
                cout << "\nYour horoscope sign is Pisces.";
            else
                if (day >= 21 && day <= 31)
                    cout << "\nYour horoscope sign is Aries.";
                else
                    cout << "\n\nYou entered an invalid date! Program Terminating!";
            break;
            
        case 4:      //check for April
            if (day >= 1 && day <= 19)
                cout << "\nYour horoscope sign is Aries.";
            else
                if (day >= 20 && day <= 30)
                    cout << "\nYour horoscope sign is Taurus.";
                else
                    cout << "\n\nYou entered an invalid date! Program Terminating!";
            break;
            
        case 5:   //check for May
            if (day >= 1 && day <= 20)
                cout << "\nYour horoscope sign is Taurus.";
            else
                if (day >= 21 && day <= 31)
                    cout << "\nYour horoscope sign is Gemini.";
                else
                    cout << "\n\nYou entered an invalid date! Program Terminating!";
            break;
            
        case 6:   //check for June
            if (day >= 1 && day <= 21)
                cout << "\nYour horoscope sign is Gemini.";
            else
                if (day >= 22 && day <= 30)
                    cout << "\nYour horoscope sign is Cancer.";
                else
                    cout << "\n\nYou entered an invalid date! Program Terminating!";
            break;
            
        case 7:   //check for July   
            if (day >= 1 && day <= 22)
                cout << "\nYour horoscope sign is Cancer.";
            else
                if (day >= 23 && day <= 31)
                    cout << "\nYour horoscope sign is Leo.";
                else
                    cout << "\n\nYou entered an invalid date! Program Terminating!";
            break;
            
            
        case 8:   //check for August   
            if (day >= 1 && day <= 22)
                cout << "\nYour horoscope sign is Leo.";
            else
                if (day >= 23 && day <= 31)
                    cout << "\nYour horoscope sign is Virgo.";
                else
                    cout << "\n\nYou entered an invalid date! Program Terminating!";
            break;
            
            
        case 9:   //check for September   
            if (day >= 1 && day <= 22)
                cout << "\nYour horoscope sign is Virgo.";
            else
                if (day >= 23 && day <= 30)
                    cout << "\nYour horoscope sign is Libra.";
                else
                    cout << "\n\nYou entered an invalid date! Program Terminating!";
            break;
                
        case 10:   //check for October   
            if (day >= 1 && day <= 23)
                cout << "\nYour horoscope sign is Libra.";
            else
                if (day >= 24 && day <= 31)
                    cout << "\nYour horoscope sign is Scorpio.";
                else
                    cout << "\n\nYou entered an invalid date! Program Terminating!";
            break;
        
         case 11:   //check for November   
            if (day >= 1 && day <= 21)
                cout << "\nYour horoscope sign is Scorpio.";
            else
                if (day >= 22 && day <= 30)
                    cout << "\nYour horoscope sign is Sagittarius.";
                else
                    cout << "\n\nYou entered an invalid date! Program Terminating!";
            break;
        
        case 12:   //check for December   
            if (day >= 1 && day <= 21)
                cout << "\nYour horoscope sign is Sagittarius.";
            else
                if (day >= 22 && day <= 31)
                    cout << "\nYour horoscope sign is Aquarius.";
                else
                    cout << "\n\nYou entered an invalid date! Program Terminating!";
            break;
            
        default:   
            cout << "\nYour horoscope sign is Sagittarius.";
	}
}

