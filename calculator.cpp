
// liberary
#include <iostream>
using namespace std;
mzml
// class with name project
class project
{

// access specefire
public:

// veriabels
	double first;
	double second;
	int a, d;

// menue function
	void menue()
	{
		cout << "\tChose the number for operator." << endl;
		cout << "\t1. Addition(+) \n";
		cout << "\t2. Subtraction(-) \n";
		cout << "\t3. Multiplication(*) \n";
		cout << "\t4. Division(/) \n";
		cin >> d;
	}
	
	// constructor to initializ default value
	project()
	{
		first = 0;
		second = 0;
		a = 0;
		d = 0;
	}

// input function
	void input()
	{
		cout << "\tEnter Firts value: ";
		cin >> first;
		cout << "\tEnter the Second value: ";
		cin >> second;
	}

// addition functio
	void addition()
	{

		a = first + second;
		cout << "\t-----------------------------------------" << endl;
		cout << "\t\tThe answer of ";
		cout << first << "+" << second << " = " << a << endl;
		cout << "\t-----------------------------------------\n"
			 << endl;
	}

// subtraction function
	void subtraction()
	{

		a = first - second;
		cout << "\t-----------------------------------------" << endl;
		cout << "\t\tThe answer of ";
		cout << first << "-" << second << " = " << a << endl;
		cout << "\t-----------------------------------------\n"
			 << endl;
	}

// multiplication function
	void multiplication()
	{

		a = first * second;
		cout << "\t-----------------------------------------" << endl;
		cout << "\t\tThe answer of ";
		cout << first << "*" << second << " = " << a << endl;
		cout << "\t-----------------------------------------\n"
			 << endl;
	}

// division function
	void division()
	{
		double f;
		void input();
		f = first / second;
		cout << "\t-----------------------------------------" << endl;
		cout << "\t\tThe answer of ";
		cout << first << "/" << second << " = " << f << endl;
		cout << "\t-----------------------------------------\n"
			 << endl;
	}

// error function
	void error()
	{
		cout << "\t-----------------------------------------" << endl;
		cout << "\t\tChoose the correct one..!" << endl;
		cout << "\t-----------------------------------------\n"
			 << endl;
	}

// output function
	void output()

	{
		// infinity loop
		while (true)
		{
			// function to clear screen
			system("cls");

			// conditions
			if (d == 1)
			{
				input();
				addition();
				menue();
			}

			else if (d == 2)
			{
				input();
				subtraction();
				menue();
			}

			else if (d == 3)
			{
				input();
				multiplication();
				menue();
			}

			else if (d == 4)
			{
				input();
				division();
				menue();
			}

			else
			{
				error();
				menue();
			}
		}
	}
};

// main function
int main()
{
	// call the class
	project obj;

	// call the object of the class
	obj.output();

	return 0;
}
