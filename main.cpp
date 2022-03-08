#include <iostream>
#include <cmath>
#include "shapes-2D.cpp"
#include "shapes-3D.cpp"

using namespace std;

void showMenu() {
	cout << "\n********** MENU *********" << endl;
	cout << "|  " << "1. Square" << "\t\t|" << endl;
	cout << "|  " << "2. Rectangle" << "\t\t|" << endl;
	cout << "|  " << "3. Triangle" << "\t\t|" << endl;
	cout << "|  " << "4. Circle" << "\t\t|" << endl;
	cout << "|  " << "5. Parallelogram" << "\t|" << endl;
	cout << "|  " << "6. Trapezium" << "\t\t|" << endl;
	cout << "|  " << "7. Exit" << "\t\t|" << endl;
	cout << "*************************" << endl;
}


int main() {
	
	cout << "\nWelcome to Area Calculator App for 2-D shapes.\n" << endl;
	
	int option;
		
	do {
	showMenu();
	cout << "Select shape to calculate area: ";
	cin >> option;
	system("clear");

	switch(option) {
	case 1: square(); break;
	case 2: rectangle(); break;
	case 3: triangle(); break;	
	case 4: circle(); break;
	case 5: parallelogram(); break;
	case 6: trapezium(); break;

	}

	if (!(option <= 7))
	{
		cout << "\nInvalid input! Try again: \n";
	}
	
	
	} while(option != 7);

	return 0;	
}
