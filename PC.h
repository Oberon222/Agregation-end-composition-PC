#pragma once
#include"Processor.h"
#include"RAM.h"
#include"Motherboard.h"
#include"Power Supply.h"
#include"Admin.h"
#include"User.h"
#include <iostream>
#include <string>
using namespace std;

class PC
{
	Processor processor;
	RAM* ram;
	int counterRAM;
	Motherboard motherboard;
	PowerSupply powerSupply;
	Admin* admin;
	User* user;

public:
	PC()  {};
	PC(int counterRAM) : counterRAM(counterRAM)
	{
		ram = new RAM[counterRAM];
		admin = nullptr;
		user = nullptr;
	}
	~PC()
	{
		if (ram != nullptr) delete ram;
	};

	void AggregateAdmin(Admin* admin)
	{
		this->admin = admin;
	}

	void AggregateUser(User* user)
	{
		this->user = user;
	}


	bool RemoveAdmin()
	{
		if (admin == nullptr) return false;
		admin = nullptr;
		return true;
	}

	bool RemovUser()
	{
		if (user == nullptr) return false;
		else
			user = nullptr;
		return true;
	}

	void AddProcessor(Processor other)
	{
		this->processor = other;
	}

	void AddMotherboard(Motherboard other)
	{
		this->motherboard = other;
	}

	void AddPowerSupply(PowerSupply other)
	{
		this->powerSupply = other;
	}

	
	void AddRAM(int tipeRAM, int frequencyRAM, int volume)
	{
		for (int i = 0; i < counterRAM; i++) {
			ram[i].SetRAM(tipeRAM, frequencyRAM, volume);
		}
	}

	void PrintPC()const
	{
		cout << "Processor " << endl;
		processor.Print();
		for (int i = 0; i < counterRAM; i++) {
			cout << "RAM number " << i + 1;
			ram->Print();
			cout << endl;
		}
		cout << " Power Sypply" << endl;
		powerSupply.Print();
		cout << "Motherboard" << endl;
		motherboard.Print();
		if (admin != nullptr) admin->Print();
		if (user != nullptr) user->Print();
	}
};


