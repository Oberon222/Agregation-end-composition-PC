#pragma once
#include <iostream>
#include<string>
using namespace std;

class Admin
{
	string nameAdmin;
	int ageAdmin;
public:
	Admin() : nameAdmin("Empty"), ageAdmin(0) {}
	Admin(string nameAdmin, int ageAdmin) : nameAdmin(nameAdmin), ageAdmin(ageAdmin){}

	void SetAdminInfo(string nameAdmin, int ageAdmin)
	{
		this->nameAdmin = nameAdmin;
		this->ageAdmin = ageAdmin;
	}

	void Print()const
	{
		cout << "Admin name: " << nameAdmin << " Admin age: " << ageAdmin << endl;
	}
};
