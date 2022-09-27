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

	int neededYear = 1974;
	int neededMonth = 9;
	cout << "Средние значения за " << neededMonth << " месяц " << neededYear << " года и по всем данным:" << endl << endl;
	printTable(processAvgData(processedGas, neededYear, neededMonth));
	cout << endl << endl; 
	
	getBrandAvgValues(processedGas);
}

