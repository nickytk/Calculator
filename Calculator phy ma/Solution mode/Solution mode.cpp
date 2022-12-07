#include<iostream>
#include<math.h>
#include<conio.h>
#include <iomanip>
#include<string>
#include<stdlib.h>

using namespace std;

void displaymenu() {
	cout << "========================================= \n";
	cout << " \t\tMENU BETA\t \n";
	cout << "========================================= \n";
	cout << "1.Physicals" << endl;
	cout << "2.Mathmathematics" << endl;
	cout << "3.exit" << endl;
}

void displayPhysic() {
	cout << "========================================= \n";
	cout << " \t     PHYSICALS \t \n";
	cout << "========================================= \n";
	cout << "1.Find Speed" << endl;
	cout << "2.Freefall Distance" << endl;
	cout << "3.Freefall Velocity" << endl;
	cout << "4.Force" << endl;
	cout << "5.Back to Menu" << endl;
}

void speed() {
	float speed, Distance, Sec;
	cout << "Enter Distance (meter): ";
	cin >> Distance;
	cout << "Enter Time (second): ";
	cin >> Sec;
	speed = Distance/Sec;
	cout << "Speed Value = " << speed << " m/s" << endl;
	displaymenu();
}

void ffd() {
	float h, t;
	cout << "Enter Time (second) : ";
	cin >> t;
	h = (0.5)*9.8* pow(t, 2);
	cout << "Free Fall distance = " << h << " m" << endl;
	displaymenu();
}

void ffv() {
	float v, t;
	cout << "Enter Time (second) : ";
	cin >> t;
	v = 9.8*t;
	cout << "Free Fall Velocity = " << v << " m/s" << endl;
	displaymenu();
}

void force() {
	float n, force, ma, mass=0, acc;
	cout << "How many Mass you want to add : ";
	cin >> n;
	cout << "Enter Mass one by one : " << endl;
	for (int i = 1; i <= n; i++) {
		cin >> ma;
		mass = mass + ma;
	}
	cout << "Enter Acceleration : ";
	cin >> acc;
	force = mass * acc;
	cout << "Force Value = " << force << " Newton" << endl;
	displaymenu();
}

void displayMath() {
	cout << "========================================= \n";
	cout << " \t  MATHEMATICS \t \n";
	cout << "========================================= \n";
	cout << "1.Add" << endl;
	cout << "2.Sub" << endl;
	cout << "3.Multi" << endl;
	cout << "4.Division" << endl;
	cout << "5.Factorial" << endl;
	cout << "6.Back to Menu" << endl;
}

void add() {
	int n, sum = 0, number;
	cout << "How many numbers you want to add : ";
	cin >> n;
	cout << "Enter number one by one : " << endl;
	for (int i = 1; i <= n; i++) {
		cin >> number;
		sum = sum + number;
	}
	cout << "Sum value = " << sum << endl;
	displaymenu();
}

void sub() {
	int sub, num1, num2;
	cout << "Enter The First and Second Number : ";
	cin >> num1 >> num2;
	sub = num1 - num2;
	cout << "Subtraction value = " << sub << endl;
	displaymenu();
	}

void multi()
{
	int mul, num1, num2;
	cout << " \n Enter the First and Second Number = ";
	cin >> num1 >> num2;
	mul = num1 * num2;
	cout << "Multiplication Valve = " << mul << endl;
	displaymenu();
}

void division()
{
	int num1, num2, div = 0;
	cout << " \n Enter the First and Second Number = ";
	cin >> num1 >> num2;
	while (num2 == 0)
	{
		cout << "\n Divisor canot be zero"
			"\n Please enter the divisor once again: ";
		cin >> num2;
	}
	div = num1 / num2;
	cout << " Division Value = " << div << endl;
	displaymenu();
}

void factorial() {
	int num, i;
	long int fact;
	fact = 1;
	cout << "Enter number : ";
	cin >> num;
	for (i = 1; i <= num; i++) {
		fact = fact * i;
	}
	cout << "Factorial value = " << fact << endl;
	displaymenu();
}

int main() {
	int choice, choice1, choice2 ;
	displaymenu();
	while (1) {
		cout << "Enter your selection : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			displayPhysic();
			cout << "Enter your selection : ";
			cin >> choice1;
			switch (choice1) {
			case 1:
				speed();
				break;
			case 2:
				ffd();
				break;
			case 3:
				ffv();
				break;
			case 4:
				force();
				break;
			case 5:
				displaymenu();
				break;
			default:
				cout << "Invalid";
			return 0;
			}
			break;

		case 2:
			displayMath();
			cout << "Enter your selection : ";
			cin >> choice2;
			switch (choice2) {
			case 1:
				add();
				break;
			case 2:
				sub();
				break;
			case 3:
				multi();
				break;
			case 4:
				division();
				break;
			case 5:
				factorial();
				break;
			case 6:
				displaymenu();
				break;
			default:
				cout << "Invalid";
			return 0;
			}
			break;
		case 3:
			exit;
			return 0;
		default:
			cout << "Invalid";
			return 0;
		}
	}
}