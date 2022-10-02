#include "GasData.h"

vector<GasData> createStarterPackOfData()
{
	vector<GasData> dataVector;
	GasData record1 = GasData{ 1974, 3, 27, "Texaco", 24370, 59.9, 13.5, 8.00, -1, -1, -1, -1, -1 };
	GasData record2 = GasData{ 1974, 4, 5, "Texaco", 24434, 59.9, 5.5, 3.30, -1, -1, -1, -1, -1 };
	GasData record3 = GasData{ 1974, 4, 11, "Texaco", 24596, 59.9, 8.2, 4.88, -1, -1, -1, -1, -1 };
	GasData record4 = GasData{ 1974, 4, 23, "Mobil", 24862, 58.8, 12.9, 7.60, -1, -1, -1, -1, -1 };
	GasData record5 = GasData{ 1974, 5, 13, "Mobil", 25057, 61.9, 13.9, 8.60, -1, -1, -1, -1, -1 };
	GasData record6 = GasData{ 1974, 6, 11, "Arco", 25239, 62.9, 12.5, 7.85, -1, -1, -1, -1, -1 };
	GasData record7 = GasData{ 1974, 7, 12, "Texaco", 25435, 63.3, 14.2, 8.90, -1, -1, -1, -1, -1 };
	GasData record8 = GasData{ 1974, 7, 19, "Chevron", 25713, 58.8, 12.4, 7.27, -1, -1, -1, -1, -1 };
	GasData record9 = GasData{ 1974, 7, 28, "Arco", 26135, 60.9, 14.1, 8.60, -1, -1, -1, -1, -1 };
	GasData record10 = GasData{ 1974, 8, 7, "Mobil", 26384, 60.4, 13.1, 8.00, -1, -1, -1, -1, -1 };
	GasData record11 = GasData{ 1974, 8, 8, "Shell", 26712, 59.9, 13.3, 7.90, -1, -1, -1, -1, -1 };
	GasData record12 = GasData{ 1974, 8, 16, "Shell", 26997, 60.9, 13.6, 8.30, -1, -1, -1, -1, -1 };
	GasData record13 = GasData{ 1974, 8, 22, "Ericson", 27068, 60.9, 4.0, 2.45, -1, -1, -1, -1, -1 };
	GasData record14 = GasData{ 1974, 8, 22, "American", 27362, 61.6, 11.8, 7.25, -1, -1, -1, -1, -1 };
	GasData record15 = GasData{ 1974, 8, 23, "American", 27606, 63.4, 10.3, 6.54, -1, -1, -1, -1, -1 };
	GasData record16 = GasData{ 1974, 8, 25, "DX", 27913, 60.9, 13.6, 8.29, -1, -1, -1, -1, -1 };
	GasData record17 = GasData{ 1974, 8, 26, "Conoco", 28163, 60.9, 10.8, 6.55, -1, -1, -1, -1, -1 };
	GasData record18 = GasData{ 1974, 8, 26, "Texaco", 28487, 57.9, 14.0, 8.10, -1, -1, -1, -1, -1 };
	GasData record19 = GasData{ 1974, 8, 27, "Phillips", 28771, 53.9, 12.2, 6.60, -1, -1, -1, -1, -1 };
	GasData record20 = GasData{ 1974, 8, 28, "Chevron", 29114, 59.9, 14.8, 8.90, -1, -1, -1, -1, -1 };
	GasData record21 = GasData{ 1974, 8, 28, "Shell", 29337, 58.9, 10.2, 6.00, -1, -1, -1, -1, -1 };
	GasData record22 = GasData{ 1974, 8, 28, "Texaco", 29661, 60.9, 13.9, 8.35, -1, -1, -1, -1, -1 };
	GasData record23 = GasData{ 1974, 8, 29, "Exxon", 29912, 65.9, 10.8, 7.10, -1, -1, -1, -1, -1 };
	GasData record24 = GasData{ 1974, 8, 29, "Shell", 30147, 65.9, 10.3, 6.70, -1, -1, -1, -1, -1 };
	GasData record25 = GasData{ 1974, 8, 30, "Texaco", 30317, 60.9, 7.6, 4.60, -1, -1, -1, -1, -1 };
	GasData record26 = GasData{ 1974, 8, 31, "Exxon", 30643, 56.9, 13.3, 7.60, -1, -1, -1, -1, -1 };
	GasData record27 = GasData{ 1974, 9, 06, "Shell", 30878, 59.9, 13.2, 7.90, -1, -1, -1, -1, -1 };
	GasData record28 = GasData{ 1974, 9, 10, "Shell", 31182, 59.9, 13.0, 7.80, -1, -1, -1, -1, -1 };
	GasData record29 = GasData{ 1974, 9, 14, "Texaco", 31467, 57.9, 13.1, 7.60, -1, -1, -1, -1, -1 };
	GasData record30 = GasData{ 1974, 9, 18, "Arco", 31711, 57.9, 10.1, 5.85, -1, -1, -1, -1, -1 };
	GasData record31 = GasData{ 1974, 9, 24, "Arco", 31984, 57.9, 12.5, 7.25, -1, -1, -1, -1, -1 };
	GasData record32 = GasData{ 1974, 9, 27, "Arco", 32225, 57.9, 9.9, 5.70, -1, -1, -1, -1, -1 };
	GasData record33 = GasData{ 1974, 10, 1, "Arco", 32455, 57.9, 9.8, 5.65, -1, -1, -1, -1, -1 };

	dataVector.push_back(record1);
	dataVector.push_back(record2);
	dataVector.push_back(record3);
	dataVector.push_back(record4);
	dataVector.push_back(record5);
	dataVector.push_back(record6);
	dataVector.push_back(record7);
	dataVector.push_back(record8);
	dataVector.push_back(record9);
	dataVector.push_back(record10);
	dataVector.push_back(record11);
	dataVector.push_back(record12);
	dataVector.push_back(record13);
	dataVector.push_back(record14);
	dataVector.push_back(record15);
	dataVector.push_back(record16);
	dataVector.push_back(record17);
	dataVector.push_back(record18);
	dataVector.push_back(record19);
	dataVector.push_back(record20);
	dataVector.push_back(record21);
	dataVector.push_back(record22);
	dataVector.push_back(record23);
	dataVector.push_back(record24);
	dataVector.push_back(record25);
	dataVector.push_back(record26);
	dataVector.push_back(record27);
	dataVector.push_back(record28);
	dataVector.push_back(record29);
	dataVector.push_back(record30);
	dataVector.push_back(record31);
	dataVector.push_back(record32);
	dataVector.push_back(record33);

	return dataVector;

}

void checkDateNumbers(int year, int month, int* daysInMonth, int* daysInYear)
{
	int daysInFebruary;
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				*daysInYear = 366;
				daysInFebruary = 29;
			}
			else
			{
				*daysInYear = 365;
				daysInFebruary = 28;
			}
		}
		else
		{
			*daysInYear = 366;
			daysInFebruary = 29;
		}
	}
	else
	{
		*daysInYear = 365;
		daysInFebruary = 28;
	}

	if (month == 1 || month == 3 || month == 5 
		|| month == 7 || month == 8 || month == 10
		|| month == 12)
	{
		*daysInMonth = 31;
	}
	else if (month == 2)
	{
		*daysInMonth = daysInFebruary;
	}
	else
	{
		*daysInMonth = 30;
	}
}

double round_up(double value, int decimal_places) {
	const double multiplier = std::pow(10.0, decimal_places);
	return std::ceil(value * multiplier) / multiplier;
}

vector<string> GetTextFromGasData(vector<GasData> gotGasData)
{
	vector<string> text;
	for (int i = 0; i < gotGasData.size(); i++)
	{
		string textNote = to_string(gotGasData[i].year) + " " + to_string(gotGasData[i].month) +
			" " + to_string(gotGasData[i].day) + " " + gotGasData[i].gas_brand +
			" " + to_string(gotGasData[i].mileage) + " " + to_string(gotGasData[i].gallonPrice) +
			" " + to_string(gotGasData[i].gallonQuantity) + " " + to_string(gotGasData[i].totalSum) +
			" " + to_string(gotGasData[i].mileageBtwnFillings) + " " + to_string(gotGasData[i].mileagePerGallon) +
			" " + to_string(gotGasData[i].mileagePrice) + " " + to_string(gotGasData[i].dayPrice) +
			" " + to_string(gotGasData[i].gallonTimeInDays);
		text.push_back(textNote);
	}

	return text;
}

vector<GasData> processAvgData(vector<GasData> gotGasData, int neededYear, int neededMonth)
{
	vector<GasData> avgData;
	GasData zeroData = GasData{ 0,0,0,"",0,0,0,0,0,0,0,0,0 };
	avgData.push_back(zeroData);
	avgData.push_back(zeroData);
	for (int i = 0; i < avgData.size(); i++)
	{
		int counter = 0;
		for (int j = 0; j < gotGasData.size(); j++)
		{
			if (i == 0)
			{
				if (gotGasData[j].year == neededYear && gotGasData[j].month == neededMonth)
				{
					avgData[i].mileage += gotGasData[j].mileage != -1 ? gotGasData[j].mileage : 0;
					avgData[i].gallonPrice += gotGasData[j].gallonPrice != -1 ? gotGasData[j].gallonPrice : 0;
					avgData[i].gallonQuantity += gotGasData[j].gallonQuantity != -1 ? gotGasData[j].gallonQuantity : 0;
					avgData[i].totalSum += gotGasData[j].totalSum != -1 ? gotGasData[j].totalSum : 0;
					avgData[i].mileageBtwnFillings += gotGasData[j].mileageBtwnFillings != -1 ? gotGasData[j].mileageBtwnFillings : 0;
					avgData[i].mileagePerGallon += gotGasData[j].mileagePerGallon != -1 ? gotGasData[j].mileagePerGallon : 0;
					avgData[i].mileagePrice += gotGasData[j].mileagePrice != -1 ? gotGasData[j].mileagePrice : 0;
					avgData[i].dayPrice += gotGasData[j].dayPrice != -1 ? gotGasData[j].dayPrice : 0;
					avgData[i].gallonTimeInDays += gotGasData[j].gallonTimeInDays != -1 ? gotGasData[j].gallonTimeInDays : 0;
					counter++;
				}
			}
			else
			{
				avgData[i].mileage += gotGasData[j].mileage != -1 ? gotGasData[j].mileage : 0;
				avgData[i].gallonPrice += gotGasData[j].gallonPrice != -1 ? gotGasData[j].gallonPrice : 0;
				avgData[i].gallonQuantity += gotGasData[j].gallonQuantity != -1 ? gotGasData[j].gallonQuantity : 0;
				avgData[i].totalSum += gotGasData[j].totalSum != -1 ? gotGasData[j].totalSum : 0;
				avgData[i].mileageBtwnFillings += gotGasData[j].mileageBtwnFillings != -1 ? gotGasData[j].mileageBtwnFillings : 0;
				avgData[i].mileagePerGallon += gotGasData[j].mileagePerGallon != -1 ? gotGasData[j].mileagePerGallon : 0;
				avgData[i].mileagePrice += gotGasData[j].mileagePrice != -1 ? gotGasData[j].mileagePrice : 0;
				avgData[i].dayPrice += gotGasData[j].dayPrice != -1 ? gotGasData[j].dayPrice : 0;
				avgData[i].gallonTimeInDays += gotGasData[j].gallonTimeInDays != -1 ? gotGasData[j].gallonTimeInDays : 0;
				counter++;
			}
		}
		if (i == 0)
		{
			avgData[i].year = neededYear;
			avgData[i].month = neededMonth;
		}
		if (counter != 0)
		{
			avgData[i].mileage /= counter;
			avgData[i].gallonPrice /= counter;
			avgData[i].gallonQuantity /= counter;
			avgData[i].totalSum /= counter;
			avgData[i].mileageBtwnFillings /= counter;
			avgData[i].mileagePerGallon /= counter;
			avgData[i].mileagePrice /= counter;
			avgData[i].dayPrice /= counter;
			avgData[i].gallonTimeInDays /= counter;

			avgData[i].gallonPrice = round_up(avgData[i].gallonPrice, 2);
			avgData[i].gallonQuantity = round_up(avgData[i].gallonQuantity, 2);
			avgData[i].totalSum = round_up(avgData[i].totalSum, 2);
			avgData[i].mileagePerGallon = round_up(avgData[i].mileagePerGallon, 2);
			avgData[i].mileagePrice = round_up(avgData[i].mileagePrice, 2);
			avgData[i].dayPrice = round_up(avgData[i].dayPrice, 2);
			avgData[i].gallonTimeInDays = round_up(avgData[i].gallonTimeInDays, 2);
		}
	}
	

	return avgData;
}

vector<GasData> processGasData(vector<GasData> gotGasData)
{
	for (int i = 0; i < gotGasData.size(); i++)
	{
		if (i == 0)
		{
			if (gotGasData.size() == 1)
				break;
			else
				continue;
		}

		gotGasData[i - 1].mileageBtwnFillings = gotGasData[i].mileage - gotGasData[i - 1].mileage;

		gotGasData[i - 1].mileagePerGallon = gotGasData[i - 1].mileageBtwnFillings / gotGasData[i - 1].gallonQuantity;
		gotGasData[i - 1].mileagePerGallon = round_up(gotGasData[i - 1].mileagePerGallon, 2);

		gotGasData[i - 1].mileagePrice = gotGasData[i - 1].mileageBtwnFillings / gotGasData[i - 1].mileagePerGallon;
		gotGasData[i - 1].mileagePrice = round_up(gotGasData[i - 1].mileagePrice, 2);

		int daysInMonth;
		int daysInYear;

		checkDateNumbers(gotGasData[i].year, gotGasData[i].month, &daysInMonth, &daysInYear);

		int daysInPrMonth;
		int daysInPrYear;

		checkDateNumbers(gotGasData[i - 1].year, gotGasData[i - 1].month, &daysInPrMonth, &daysInPrYear);

		double timeBtwnFilling = gotGasData[i].day + (daysInMonth - gotGasData[i - 1].day) + daysInMonth * (gotGasData[i].month - gotGasData[i - 1].month) +
			daysInYear * (gotGasData[i].year - gotGasData[i - 1].year);

		gotGasData[i - 1].dayPrice = timeBtwnFilling / gotGasData[i - 1].totalSum;
		gotGasData[i - 1].dayPrice = round_up(gotGasData[i - 1].dayPrice, 2);

		gotGasData[i - 1].gallonTimeInDays = timeBtwnFilling / gotGasData[i - 1].gallonQuantity;
		gotGasData[i - 1].gallonTimeInDays = round_up(gotGasData[i - 1].gallonTimeInDays, 2);
	}
	return gotGasData;
}

string printSymbNTimes(char symb, int nTimes)
{
	string neededStr = "";
	for (int i = 0; i < nTimes; i++)
	{
		neededStr += symb;
	}
	return neededStr;
}


void printTable(vector<GasData> gotGasData)
{
	int maxColSize = 17;

	cout << "year" << setw(maxColSize / 2) <<
		"month" << setw(maxColSize / 2) <<
		"day" << setw(maxColSize) <<
		"gas brand" << setw(maxColSize) <<
		"mileage" << setw(maxColSize) <<
		"gallonPrice" << setw(maxColSize) <<
		"gallonQuantity" << setw(maxColSize) <<
		"totalSum" << setw(maxColSize) <<
		"milBtwnFillings" << setw(maxColSize) <<
		"milPerGallon" << setw(maxColSize) <<
		"milPrice" << setw(maxColSize) <<
		"dayPrice" << setw(maxColSize) <<
		"galTimeInDays" << endl;

	string nUnderlineInPrint = printSymbNTimes('_', 190);
	cout << nUnderlineInPrint << endl;

	for (int j = 0; j < gotGasData.size(); j++)
	{
		string printedYear = gotGasData[j].year != 0 ? std::to_string(gotGasData[j].year) : "   -";
		string printedMonth = gotGasData[j].month != 0 ? std::to_string(gotGasData[j].month) : "-";
		string printedDay = gotGasData[j].day != 0 ? std::to_string(gotGasData[j].day) : "-";

		cout << printedYear << setw(maxColSize / 2) <<
			printedMonth << setw(maxColSize / 2) <<
			printedDay << setw(maxColSize) <<
			gotGasData[j].gas_brand << setw(maxColSize) <<
			gotGasData[j].mileage << setw(maxColSize) <<
			gotGasData[j].gallonPrice << setw(maxColSize) <<
			gotGasData[j].gallonQuantity << setw(maxColSize) <<
			gotGasData[j].totalSum << setw(maxColSize) <<
			gotGasData[j].mileageBtwnFillings << setw(maxColSize) <<
			gotGasData[j].mileagePerGallon << setw(maxColSize) <<
			gotGasData[j].mileagePrice << setw(maxColSize) <<
			gotGasData[j].dayPrice << setw(maxColSize) <<
			gotGasData[j].gallonTimeInDays << endl;
	}
	cout << nUnderlineInPrint << endl;
}

vector<GasData> getBrandAvgValues(vector<GasData> gotGasData)
{
	vector<string> BrandNames;
	for (int i = 0; i < gotGasData.size(); i++)
	{
		if (std::find(BrandNames.begin(), BrandNames.end(), gotGasData[i].gas_brand) != BrandNames.end()) {
			/* contains */
		}
		else {
			BrandNames.push_back(gotGasData[i].gas_brand);
		}
	}

	vector<GasData> brandAvgValues;
	for (auto element : BrandNames)
	{
		GasData record = GasData{ 0, 0, 0, element, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
		brandAvgValues.push_back(record);
	}

	for (int i = 0; i < brandAvgValues.size(); i++)
	{
		int counter = 0;

		for (int j = 0; j < gotGasData.size(); j++)
		{
			if (brandAvgValues[i].gas_brand == gotGasData[j].gas_brand)
			{
				brandAvgValues[i].mileage += gotGasData[j].mileage != -1 ? gotGasData[j].mileage : 0;
				brandAvgValues[i].gallonPrice += gotGasData[j].gallonPrice != -1 ? gotGasData[j].gallonPrice : 0;
				brandAvgValues[i].gallonQuantity += gotGasData[j].gallonQuantity != -1 ? gotGasData[j].gallonQuantity : 0;
				brandAvgValues[i].totalSum += gotGasData[j].totalSum != -1 ? gotGasData[j].totalSum : 0;
				brandAvgValues[i].mileageBtwnFillings += gotGasData[j].mileageBtwnFillings != -1 ? gotGasData[j].mileageBtwnFillings : 0;
				brandAvgValues[i].mileagePerGallon += gotGasData[j].mileagePerGallon != -1 ? gotGasData[j].mileagePerGallon : 0;
				brandAvgValues[i].mileagePrice += gotGasData[j].mileagePrice != -1 ? gotGasData[j].mileagePrice : 0;
				brandAvgValues[i].dayPrice += gotGasData[j].dayPrice != -1 ? gotGasData[j].dayPrice : 0;
				brandAvgValues[i].gallonTimeInDays += gotGasData[j].gallonTimeInDays != -1 ? gotGasData[j].gallonTimeInDays : 0;
				counter++;
			}
		}

		if (counter != 0)
		{
			brandAvgValues[i].mileage /= counter;
			brandAvgValues[i].gallonPrice /= counter;
			brandAvgValues[i].gallonQuantity /= counter;
			brandAvgValues[i].totalSum /= counter;
			brandAvgValues[i].mileageBtwnFillings /= counter;
			brandAvgValues[i].mileagePerGallon /= counter;
			brandAvgValues[i].mileagePrice /= counter;
			brandAvgValues[i].dayPrice /= counter;
			brandAvgValues[i].gallonTimeInDays /= counter;

			brandAvgValues[i].gallonPrice = round_up(brandAvgValues[i].gallonPrice, 2);
			brandAvgValues[i].gallonQuantity = round_up(brandAvgValues[i].gallonQuantity, 2);
			brandAvgValues[i].totalSum = round_up(brandAvgValues[i].totalSum, 2);
			brandAvgValues[i].mileagePerGallon = round_up(brandAvgValues[i].mileagePerGallon, 2);
			brandAvgValues[i].mileagePrice = round_up(brandAvgValues[i].mileagePrice, 2);
			brandAvgValues[i].dayPrice = round_up(brandAvgValues[i].dayPrice, 2);
			brandAvgValues[i].gallonTimeInDays = round_up(brandAvgValues[i].gallonTimeInDays, 2);
		}
	}
	return brandAvgValues;
}

vector<string> FullGasDataProcess(vector<GasData> gasData, bool needCout)
{
	int neededYear = -1;
	int neededMonth = -1;
	bool isDateIncorrect = true;
	while (isDateIncorrect)
	{
		cout << "Введите год и месяц, данные которых необходимо усреднить:" << endl;
		cout << "Введите год:" << endl;
		neededYear = NumInInt();
		if (neededYear <= 0)
		{
			isDateIncorrect = true;
			cout << endl << "Год введен некорректно. Пожалуйста, введите данные заново" << endl;
			continue;
		}
		cout << "Введите месяц" << endl;
		neededMonth = NumInInt();
		if (neededMonth <= 0 || neededMonth > 12)
		{
			isDateIncorrect = true;
			cout << endl << "Месяц введен некорректно. Пожалуйста, введите данные заново" << endl;
		}
		else
			isDateIncorrect = false;
	}

	vector<GasData> processedGasData;
	vector<GasData> avgGasData;
	vector<GasData> avgBrandGasData;

	processedGasData = processGasData(gasData);
	avgGasData = processAvgData(processedGasData, neededYear, neededMonth);
	avgBrandGasData = getBrandAvgValues(processedGasData);

	vector<string> text;
	vector<string> gasDataText;
	vector<string> processedGasDataText;
	vector<string> processedAvgDataText;
	vector<string> avgBrandGasDataText;

	gasDataText = GetTextFromGasData(gasData);
	processedGasDataText = GetTextFromGasData(processedGasData);
	processedAvgDataText = GetTextFromGasData(avgGasData);
	avgBrandGasDataText = GetTextFromGasData(avgBrandGasData);

	text.push_back("Исходные данные:");
	for (int i = 0; i < gasDataText.size(); i++)
	{
		text.push_back(gasDataText[i]);
	}
	text.push_back("");
	text.push_back("Обработанные данные:");
	for (int i = 0; i < processedGasDataText.size(); i++)
	{
		text.push_back(processedGasDataText[i]);
	}
	text.push_back("");
	string aboutAvgText = "Средние значения за " + to_string(neededYear) + " год " + to_string(neededMonth) + " месяц и за все время";
	text.push_back(aboutAvgText);
	for (int i = 0; i < processedAvgDataText.size(); i++)
	{
		text.push_back(processedAvgDataText[i]);
	}
	text.push_back("");
	text.push_back("Средние значения по брендам бензина:");
	for (int i = 0; i < avgBrandGasDataText.size(); i++)
	{
		text.push_back(avgBrandGasDataText[i]);
	}

	if (needCout)
	{
		cout << endl << "Исходные данные:" << endl << endl;
		printTable(gasData);
		cout << endl << "Преобразованные данные:" << endl << endl;
		printTable(processedGasData);
		cout << endl << "Средние значения за " << to_string(neededYear) << " год " << to_string(neededMonth) << " месяц и за все время:" << endl << endl;
		printTable(avgGasData);
		cout << endl << "Средние значения по брендам бензина:" << endl << endl;
		printTable(avgBrandGasData);
	}

	return text;
}
