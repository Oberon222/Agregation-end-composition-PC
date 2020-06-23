#pragma once
#include <iostream>
#include <string>
using namespace std;

class Motherboard
{
	string makerMotherboard;
	int numbUSB;
public:
	Motherboard() : makerMotherboard("ASUS"), numbUSB(1){}
	Motherboard(string makerMotherboard, int numbUSB) :makerMotherboard(makerMotherboard), numbUSB(numbUSB) {}

	void SetMotherboard(string makerMotherboard, int numbUSB)
	{
		this->makerMotherboard = makerMotherboard;
		this->numbUSB = numbUSB;
	}

	void Print()const
	{
		cout << "Motherboard: maker -> " << makerMotherboard << " number USB -> " << numbUSB << endl;
	}
};