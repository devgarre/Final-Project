// Final Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

string userName;
string repeat = "Y";

int main()
{
	cout << "Hello, my name is Marvin the Paranoid Android. I have been assigned to make sure you don't meet your demise any sooner than you have to." << endl;
	string userEnter = "Please enter your name so I can refer to you by it during the brief time we have left on this planet: ";
	userName = name(userEnter);
	while (repeat == "Y" || repeat == "y") {
		modifyTimer();
		timer();
		talkBack(userName);
		repeat = rerun(repeat);
	}
	cout << "Goodbye. See you in the meaningless abyss of the afterlife, if it even exists." << endl;
	
	system("pause");
    return 0;
}

