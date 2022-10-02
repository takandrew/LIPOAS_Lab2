#include "Testing.h"

void ClearGasDataVector(vector<GasData>& gotGasData)
{
	int vectorSize = (int)gotGasData.size();
	for (int i = 0; i < vectorSize; i++)
	{
		gotGasData.pop_back();
	}
}

bool doubleAreSame(double a, double b)
{
	return fabs(a - b) < 0.001;
}

bool AreVectorGasDataEqual(vector<GasData> firstGasData, vector<GasData> secondGasData)
{
	if (firstGasData.size() != secondGasData.size())
		return false;

	for (int i = 0; i < firstGasData.size(); i++)
	{
		if (firstGasData[i].year != secondGasData[i].year ||
			firstGasData[i].month != secondGasData[i].month ||
			firstGasData[i].day != secondGasData[i].day ||
			firstGasData[i].gas_brand != secondGasData[i].gas_brand ||
			firstGasData[i].mileage != secondGasData[i].mileage ||
			!doubleAreSame(firstGasData[i].gallonPrice, secondGasData[i].gallonPrice) ||
			!doubleAreSame(firstGasData[i].gallonQuantity, secondGasData[i].gallonQuantity) ||
			!doubleAreSame(firstGasData[i].totalSum, secondGasData[i].totalSum) ||
			firstGasData[i].mileageBtwnFillings != secondGasData[i].mileageBtwnFillings ||
			!doubleAreSame(firstGasData[i].mileagePerGallon, secondGasData[i].mileagePerGallon) ||
			!doubleAreSame(firstGasData[i].mileagePrice, secondGasData[i].mileagePrice) ||
			!doubleAreSame(firstGasData[i].dayPrice, secondGasData[i].dayPrice) ||
			!doubleAreSame(firstGasData[i].gallonTimeInDays, secondGasData[i].gallonTimeInDays))
			return false;
	}

	return true;
}

void Testing()
{
	bool isSuccess = true;

	// Тестирование модуля вычисления числа дней в месяце и году
	int testYearFirst = 1974, testMonthFirst = 2;
	int daysInMonthFirst = 28, daysinYearFirst = 365;
	int testDaysInMonthFirst = -1, testDaysInYearFirst = -1;
	checkDateNumbers(testYearFirst, testMonthFirst, &testDaysInMonthFirst, &testDaysInYearFirst);

	int testYearSecond = 1976, testMonthSecond = 2;
	int daysInMonthSecond = 29, daysinYearSecond = 366;
	int testDaysInMonthSecond = -1, testDaysInYearSecond = -1;
	checkDateNumbers(testYearSecond, testMonthSecond, &testDaysInMonthSecond, &testDaysInYearSecond);

	if (!(daysInMonthFirst == testDaysInMonthFirst && daysinYearFirst == testDaysInYearFirst) ||
		(!(daysInMonthSecond == testDaysInMonthSecond && daysinYearSecond == testDaysInYearSecond)))
	{
		cout << endl << "Тестирование модуля вычисления числа дней в месяце и году провалено." << endl;
		isSuccess = false;
	}

	// Тестирование модуля обработки записей учета бензина
	vector<GasData> dataVector;
	GasData record1 = GasData{ 1974, 3, 27, "Texaco", 24370, 59.9, 13.5, 8.00, -1, -1, -1, -1, -1 };
	GasData record2 = GasData{ 1974, 10, 1, "Arco", 32455, 57.9, 9.8, 5.65, -1, -1, -1, -1, -1 };
	dataVector.push_back(record1); dataVector.push_back(record2);

	vector<GasData> testDataVector;
	GasData testRecord1 = GasData{ 1974, 3, 27, "Texaco", 24370, 59.9, 13.5, 8.00, 8085, 598.89, 13.5, 27.75, 16.45 };
	testDataVector.push_back(testRecord1); testDataVector.push_back(record2);

	dataVector = processGasData(dataVector);

	if (!AreVectorGasDataEqual(dataVector, testDataVector))
	{
		cout << endl << "Тестирование модуля обработки записей учета бензина провалено." << endl;
		isSuccess = false;
	}
	ClearGasDataVector(dataVector);
	ClearGasDataVector(testDataVector);

	// Тестирование модуля вычисления средних значений
	dataVector = processGasData(createStarterPackOfData());

	GasData record3 = GasData{ 1974, 8, 0, "", 28505, 60.59, 11.63, 7.02, 264, 25.67, 11.63, 5.07, 3.08 };
	GasData record4 = GasData{ 0, 0, 0, "", 28252, 60.17, 11.71, 7.03, 245, 22.77, 11.42, 5.36, 3.23 };
	testDataVector.push_back(record3);
	testDataVector.push_back(record4);

	if (!AreVectorGasDataEqual(processAvgData(dataVector, 1974, 8), testDataVector))
	{
		cout << endl << "Тестирование модуля вычисления средних значений провалено." << endl;
		isSuccess = false;
	}
	ClearGasDataVector(dataVector);
	ClearGasDataVector(testDataVector);

	// Тестирование модуля вычисления средних значений по брендам
	GasData record5 = GasData{ 1974, 8, 31, "Exxon", 30643, 56.9, 13.3, 7.6, 235, 17.67, 13.3, 4.61, 2.64 };
	GasData record6 = GasData{ 1974, 9, 6, "Shell", 30878, 59.9, 13.2, 7.9, 304, 23.04, 13.2, 4.31, 2.58 };
	GasData record7 = GasData{ 1974, 9, 10, "Shell", 31182, 59.9, 13, 7.8, 285, 21.93, 13, 4.36, 2.62 };
	dataVector.push_back(record5); dataVector.push_back(record6); dataVector.push_back(record7);

	GasData record8 = GasData{ 0, 0, 0, "Exxon", 30643, 56.9, 13.3, 7.6, 235, 17.68, 13.3, 4.62, 2.64 };
	GasData record9 = GasData{ 0, 0, 0, "Shell", 31030, 59.9, 13.1, 7.85, 294, 22.49, 13.1, 4.34, 2.6 };
	testDataVector.push_back(record8); testDataVector.push_back(record9);

	if (!AreVectorGasDataEqual(getBrandAvgValues(dataVector), testDataVector))
	{
		cout << endl << "Тестирование модуля вычисления средних значений по брендам провалено." << endl;
		isSuccess = false;
	}
	ClearGasDataVector(dataVector);
	ClearGasDataVector(testDataVector);

	// Тестирование модуля вывода определенного числа символов
	string testResult = ".....";
	if (printSymbNTimes('.', 5) != testResult)
	{
		cout << endl << "Тестирование модуля вывода определенного числа символов провалено." << endl;
		isSuccess = false;
	}

	if (isSuccess)
	{
		cout << endl << "Тестирование успешно пройдено." << endl;
	}
}