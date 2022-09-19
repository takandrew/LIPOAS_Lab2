#pragma once
#include <string>
#include <vector>
using namespace std;

class GasData
{
public:
	int year;
	int month;
	int day;
	string gas_brand;
	int mileage;
	double gallonPrice;
	double gallonQuantity;
	double totalSum;
	int mileageBtwnFillings;
	int mileagePerGallon;
	int mileagePrice;
	int dayPrice;
	int gallonOneTime; //В чем измеряется время?
};

vector<GasData> createStarterPackOfData();