/*
											--> Name: Muhammad Muzammal
											--> Registration: 2020-ag-5773
											--> Degree: BS(CS)
											--> Semester: 3rd
											--> Section: B
*/
// The last project of 3rd semester
// .cpp program that Make the digital clock

// liberaries
#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;

// Class
class Time
{
	// public specifire
public:
	// variables
	bool x = true;
	int ampm;
	int hours = 0;
	int minutes = 0;
	int seconds = 0;

	// The function to take input from the user
	void inputData()
	{
		cout << "Enter the current time." << endl;
		cout << "Hours: ";
		cin >> hours;
		cout << "Minutes: ";
		cin >> minutes;
		cout << "Seconds: ";
		cin >> seconds;

		cout << "Press 1 for AM and 0 for PM: ";
		cin >> ampm;

		if (ampm == 1)
		{
			x = true;
		}
		else
		{
			x = false;
		}
	}

	// The function to decorate the output
	void displayTime()
	{

		cout << setfill(' ') << setw(48) << "Time Tabel" << endl;
		cout << setfill(' ') << setw(50) << "---------------" << endl;
		cout << setfill(' ') << setw(37);
		cout << "| " << setfill('0') << setw(2) << hours << ":";
		cout << setfill('0') << setw(2) << minutes << ":";
		cout << setfill('0') << setw(2) << seconds;
		if (x) // if x true then print "AM"
		{
			cout << " AM"
				 << " |" << endl;
		}
		else // otherwise "PM"
		{
			cout << " PM"
				 << " |" << endl;
		}
		cout << setfill(' ') << setw(50) << "---------------" << endl;
	}

	// The function that decribe the method
	void timer()
	{
		// call input function
		inputData();

		// Infinity loop because thim is continue until to kill the process
		while (true)
		{
			// System call to clear the screen
			system("cls");

			// call the display function to display output
			displayTime();

			// call sleep function to sleep for 1 second
			sleep(1);

			// increment seconds
			seconds++;

			// if seconds reach 60
			if (seconds == 60)
			{

				// increment minutes
				minutes++;
				seconds = 0;

				// if munutes reach 60
				if (minutes == 60)
				{

					// increment hours
					hours++;
					minutes = 0;

					// logic for 'x' that show "AM" and "PM" one time its true and next time it false and continue
					// when it become 12 it change the value of x.
					if (hours == 12)
					{
						if (x == true)
						{
							x = false;
						}
						else if (x == false)
						{
							x = true;
						}
					}

					// if hours reach 13 it start again from 1
					if (hours == 13)
					{
						hours = 1;
						minutes = 0;
						seconds = 0;
					}
				}
			}
		}
	}
};

// main function
int main()
{
	// call the class
	Time obj;

	// call the object of the class
	obj.timer();
	return 0;
}

// --> NOTE: Enter the correct time and time will start from that time and continue until to delet the
//  output terminal (if you are on VS code otehr wise close that terminal to stop the process).
