#include "menu.h"

void Menu::choice() {
	cout << "Welcome to the " << v << ", how can I help you today?" << endl;
	cout << "1 - Create New Account\n"
		<< "2 - Search For an Account\n"
		<< "3 - Delete an Account\n";
	cin >> select;

}