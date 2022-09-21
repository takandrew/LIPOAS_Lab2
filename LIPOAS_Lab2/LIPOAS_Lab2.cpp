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
	int i = 0;
	vector<GasData> processedGas = processGasData(createStarterPackOfData());
	i = 1;
	///TODO: Подчистить за собой надо и дальше делать 
	for (int j = 0; j < processedGas.size(); j++)
	{
		cout << processedGas[j].year << "/" <<
			processedGas[j].month << "/" <<
			processedGas[j].day << " " <<
			processedGas[j].gas_brand << " " <<
			processedGas[j].mileage << " " <<
			processedGas[j].gallonPrice << " " <<
			processedGas[j].gallonQuantity << " " <<
			processedGas[j].totalSum << " || " <<
			"mileageBtwnFillings: " << processedGas[j].mileageBtwnFillings << " | " <<
			"mileagePerGallon: " << processedGas[j].mileagePerGallon << " | " <<
			"mileagePrice: " << processedGas[j].mileagePrice << " | " <<
			"dayPrice: " << processedGas[j].dayPrice << " | " <<
			"gallonTimeInDays: " << processedGas[j].gallonTimeInDays << endl;
	} 
}

