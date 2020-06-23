#include <iostream>
#include <string>
#include"Processor.h"
#include"RAM.h"
#include"Motherboard.h"
#include"Power Supply.h"
#include"Admin.h"
#include"User.h"
#include "PC.h"
using namespace std;

int main() {
	
	PC pc1(4);
	PC pc2;

	Admin admin1("Vova",18);
	User user1("Sasha", 12);
	pc1.AggregateAdmin(&admin1);
	pc1.AggregateUser(&user1);
	Processor proc1(4, 1800, true);
	pc1.AddProcessor(proc1);
	
	pc1.PrintPC();
	pc2.PrintPC();

	system("pause");
	return 0;
}