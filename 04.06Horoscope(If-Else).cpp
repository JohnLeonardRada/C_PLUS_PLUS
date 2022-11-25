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

   	if ((month ==3 && (day >= 21 && day <= 31)) || (month == 4 && (day >= 1 && day <= 19)))
      cout << "\nYour horoscope sign is Aries.";
   	else
      if ((month == 4 && (day >= 20 && day <= 30)) || (month == 5 && (day >= 1 && day <= 20)))
         cout << "\nYour horoscope sign is Taurus.";
      else
         if ((month == 5 && (day >= 21 && day <= 31)) || (month == 6 && (day >= 1 && day <= 21)))
	        cout << "\nYour horoscope sign is Gemini.";
	     else
            if ((month == 6 && (day >= 22 && day <= 30)) || (month == 7 && (day >= 1 && day <= 22)))
	           cout << "\nYour horoscope sign is Cancer.";
	        else
               if ((month == 7 && (day >= 23 && day <= 31)) || (month == 8 && (day >= 1 && day <= 22)))
	              cout << "\nYour horoscope sign is Leo.";
	           else
                  if ((month == 8 && (day >= 23 && day <= 31)) || (month == 9 && (day >= 1 && day <= 22)))
	                 cout << "\nYour horoscope sign is Virgo.";
	              else
                     if ((month == 9 && (day >= 23 && day <= 30)) || (month == 10 && (day >= 1 && day <= 23)))
	                    cout << "\nYour horoscope sign is Libra.";
	                 else
                        if ((month == 10 && (day >= 24 && day <= 31)) || (month == 11 && (day >= 1 && day <= 21)))
                           cout << "\nYour horoscope sign is Scorpio.";
                        else
                           if ((month == 11 && (day >= 22 && day <= 30)) || (month == 12 && (day >= 1 && day <= 21)))
                              cout << "\nYour horoscope sign is Sagittarius.";
                           else
                              if ((month == 12 && (day >= 22 && day <= 31)) || (month == 1 && (day >= 1 && day <= 19)))
	                             cout << "\nYour horoscope sign is Capricorn.";
	                          else
	                             if ((month == 1 && (day >= 20 && day <= 31)) || (month == 2 && (day >= 1 && day <= 18)))
	                                cout << "\nYour horoscope sign is Aquarius.";
	                             else
                                    if ((month == 2 && (day >= 19 && day <= 28)) || (month == 3 && (day >= 1 && day <= 20)))
	                                   cout << "\nYour horoscope sign is Pisces.";
									else
									   cout << "\n\nYou entered an invalid date! Program Terminating!";
}
