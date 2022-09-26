#include <iostream>
#include "Menu.h"
#include "Testing.h"
#include <vector>
#include "Files.h"
#include "GasData.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	Greeting();
	SetConsoleCP(1251);
	vector<GasData> testGas = createStarterPackOfData();
	vector<GasData> processedGas = processGasData(createStarterPackOfData());
	///TODO: Подчистить за собой надо и дальше делать 
	printTable(processedGas);
}

