#include "menu.h"



void menu(){
	int select;
	string v = "vault";
	cout << "Welcome to the " << v << ", how can I help you today?" << endl;
	cout << "1 - Create New Account\n"
		<< "2 - Search For an Account\n"
		<< "3 - Delete an Account\n";
	cin >> select;
	switch (select) {
	case 1:
		profile s;
		s.setSource();
	}
}



void profile::setSource()
{
	cout << "Please input a source for your account name\n"
		<< "ex: Netflix, Hulu, Youtube, etc." << endl;
	cin >> source;
	profile a;
	a.setAccount();
}

void profile::setAccount()
{
	cout << "Please enter a username to save\n";
	cin >> account;
	profile p;
	p.setPassword();
}

void profile::setPassword()
{
	cout << "enter a password for " << account << endl;
	cin >> password;

}

