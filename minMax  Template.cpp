#include<iostream>
using namespace std;

// Creating a template for min function.
template <typename T>

// Function to find the smallest value out of two numbers.
T min(T& num1, T& num2)
{
	// Simple conditional logic to find the smallest number.
	if (num1 < num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}


// Creating a template for the max function.
template <class T>

// Function to find the largest value of the two numbers.
T max(T& num3, T& num4)
{
	// Simple conditional logic to find the largest number.
	if (num3 > num4)
	{
		return num3;
	}
	else
	{
		return num4;
	}
}

int main()
{
	char choice = 0;
	do {
		int num1, num2;
		double  num3, num4;
		// Getting user input for the two integers.
		cout << "Enter two values for two integers" << endl;
		cout << "---------------------------------" << endl;
		cout << "Enter a value for integer num1: ";
		cin >> num1;
		cout << "Enter a value for integer num2: ";
		cin >> num2;
		cout << endl;

		// Getting user input for the two floats.
		cout << "Enter two values for two floats" << endl;
		cout << "-------------------------------" << endl;
		cout << "Enter a value for float num3: ";
		cin >> num3;
		cout << "Enter a value for float num4: ";
		cin >> num4;
		cout << endl;

		// Calling the min and and max functions.
		// Then display the results.
		cout << "The minimum values" << endl;
		cout << "-------------------------------" << endl;
		cout << "The smallest integer: " << min(num1, num2) << endl;
		cout << "The largest integer:" <<  max(num1, num2) << endl;
		cout << "The smallest float: " << min(num3, num4) << endl;
		cout << "The largest float: " << max(num3, num4) << endl;
		cout << "Would you like to run the program again (Y/N): ";
		cin >> choice;
		cout << endl;
	    } while (choice == 'Y' || choice == 'y');
	    return 0;
}