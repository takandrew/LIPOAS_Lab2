#pragma once
#include <string>
#include <vector>
#include <iomanip>
#include "Menu.h"
#include "Files.h"
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

double round_up(double value, int decimal_places);

vector<GasData> processAvgData(vector<GasData> gotGasData, int neededYear, int neededMonth);

vector<GasData> processGasData(vector<GasData> gotGasData);

string printSymbNTimes(char symb, int nTimes);

void printTable(vector<GasData> gotGasData);

vector<GasData> getBrandAvgValues(vector<GasData> gotGasData);

vector<string> FullGasDataProcess(vector<GasData> gasData, bool needCout);

vector<string> GetTextFromGasData(vector<GasData> gotGasData);
