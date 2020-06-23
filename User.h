#pragma once
#include <iostream>
#include<string>
using namespace std;

class User
{
	string nameUser;
	int ageUser;
public:
	User() : nameUser("Empty"), ageUser(0){}
	User(string nameUser, int ageUser) : nameUser(nameUser), ageUser(ageUser){}

	void SetUserInfo(string nameUser, int ageUser)
	{
		this->nameUser = nameUser;
		this->ageUser = ageUser;
	}

	void Print()const
	{
		cout << "User name: " << nameUser << "User age: " << ageUser << endl;
	}
};

