#pragma once
#include <iostream>
#include <string>
using namespace std;

enum RAM_TIPE
{
	DDR2=2,
	DDR3,
	DDR4
};

class RAM
{
	int tipeRAM;
	int frequencyRAM;
	int volume;

public:
	RAM() : tipeRAM (2), frequencyRAM(532), volume(1) {}
	RAM(int tipeRAM, int frequencyRAM, int volume) : tipeRAM(tipeRAM), frequencyRAM(frequencyRAM), volume(volume) {}

	void SetRAM(int tipeRAM, int frequencyRAM, int volume)
	{
		this->tipeRAM = tipeRAM;
		this->frequencyRAM = frequencyRAM;
		this->volume = volume;
	}

	void Print()const
	{
		cout << " Tipe RAM -> " << tipeRAM << " frequency RAM -> " << frequencyRAM << " volume RAM -> " << volume << endl;
	}
};
