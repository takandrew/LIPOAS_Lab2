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
	printTable(processedGas);
	cout << endl << endl;

	///TODO: Из алгоритмов осталось только подсчитывать средние значения среди всех за небольшой период (видимо нужно спрашивать у пользователя) и среди всех записей 
	getBrandAvgValues(processedGas);
}

