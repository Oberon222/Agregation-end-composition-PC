#pragma once
#include <iostream>
using namespace std;
class Processor
{
	int numbOfCors;
	int frequencyCPU;
	bool videoCore;

public:

	Processor() : numbOfCors(2), frequencyCPU(800), videoCore(0) {}
	Processor(int numbOfCors, int frequencyCPU, bool videoCore) : numbOfCors(numbOfCors), frequencyCPU(frequencyCPU), videoCore(videoCore) {}

	void SetProcessor(int numbOfCors, int frequencyCPU, bool videoCore)
	{
		this->numbOfCors = numbOfCors;
		this->frequencyCPU = frequencyCPU;
		this->videoCore = videoCore;
	}

	void Print()const
	{
		cout << " Number Of Cors ->" << numbOfCors << endl;
		cout << "Frequency CPU ->" << frequencyCPU << endl;
		cout << "Video Core ->" << videoCore << endl;
	}
};
