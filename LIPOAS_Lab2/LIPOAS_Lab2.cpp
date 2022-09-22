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
	///TODO: Из алгоритмов осталось только подсчитывать средние значения среди всех за небольшой период (видимо нужно спрашивать у пользователя) и среди всех записей 
	//printGasData(processedGas);
	getBrandAvgValues(processedGas);
}

