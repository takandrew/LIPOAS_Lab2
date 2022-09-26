#pragma once
#include <string>
#include <vector>
#include <iomanip>
#include <iostream>
#include <cmath>
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
	double mileagePerGallon;
	double mileagePrice;
	double dayPrice;
	double gallonTimeInDays;
};

vector<GasData> createStarterPackOfData();

void checkDateNumbers(int year, int month, int* daysInMonth, int* daysInYear);

vector<GasData> processGasData(vector<GasData> gotGasData);

void printTable(vector<GasData> gotGasData);

void getBrandAvgValues(vector<GasData> gotGasData);
