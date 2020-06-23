#pragma once
#include <iostream>
#include <string>
using namespace std;

class PowerSupply
{
	int power;
	int numberOfConnectors;
public:
	PowerSupply() : power(250), numberOfConnectors(1){}
	PowerSupply(int power, int numberOfConnectors) : power(power), numberOfConnectors(numberOfConnectors) {}

	void SetPowerSupply(int power, int numberOfConnectors)
	{
		this->power = power;
		this->numberOfConnectors = numberOfConnectors;
	}

	void Print()const
	{
		cout << "Characteristic Power Supply: power -> " << power << " Number of Connectors -> " << numberOfConnectors << endl;
	}
};
