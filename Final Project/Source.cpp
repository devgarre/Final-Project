// Source.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <chrono>
#include <windows.h>

using namespace std;
int timeFrame;

void timer()
{
	Sleep(timeFrame * 60000);
}

string name(string input)
{
	string userInput = "";
	cout << input;
	cin >> userInput;
	return userInput;
}

void talkBack(string userName) 
{
	cout << "It's time to get up and walk around, " << userName << "." << endl;
	cout << "There's really no point though as we are all going to meet our end on an unexpected day that even the supercomputer, Deep Thought, cannot predict." << endl;
}

string rerun(string repeat) 
{
	cout << "Would you like to start another timer?(Y/N): ";
	cin >> repeat;
	return repeat;
}

int * modifyTimer() 
{
	cout << "How long would you like the timer to last?" << endl;
	cin >> timeFrame;
	return &timeFrame;
}