#include "ShapeController.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void writeInFile(string toWrite)
{
	ofstream myfile;
	myfile.open("C:\\Users\\HP\\source\\repos\\Figures\\FiguresDataOutput.txt", fstream::app);
	myfile << toWrite + "\n";
	myfile.close();
}
int getSizeOfArr(string url)
{
	string x;
	ifstream inFile;
	inFile.open(url);
	int size = 0;
	while (getline(inFile, x))
	{
		size++;
	}
	return size;
}
