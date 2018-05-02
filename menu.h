
#ifndef MENU_H
#define MENU_H
#pragma once


#include<string>
#include<iostream>
using namespace std;



void menu();

class profile {
public:
	string source;
	string account;
	void setSource();
	void setAccount();
	void setPassword();
private:
	string password;
};
#endif // !MENU_H