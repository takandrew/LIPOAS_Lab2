#include "Menu.h"
#include "Testing.h"
#include <vector>
#include "Files.h"
#include "GasData.h"
#include "InputData.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	Greeting();
	SetConsoleCP(1251);
	while (true) {
		vector<GasData> gasData;
		enum MenuImportDataCase { File = 1, Manual, FromBook };
		int menuImportResult = MenuImportData();
		if (menuImportResult == File) { // Проверка происхождения исходных данных
			gasData = textInputFile();
			cout << endl << "Полученные из файла данные:" << endl;
			printTable(gasData);
		}
		else if (menuImportResult == Manual) { // Ввод текста с клавиатуры
			gasData = textInputManual();
			cout << endl << "Введенные данные:" << endl;
			printTable(gasData);
			if (MenuExportData() == true) // Возможность вывода исходного текста в файл 
			{
				FileWriteData(GetTextFromGasData(gasData));
			}
		}
		else if (menuImportResult == FromBook)
		{
			gasData = createStarterPackOfData();
			cout << endl << "Исходные данные:" << endl;
			printTable(gasData);
		}

		//TODO: НЕ РАБОТАЕТ!!!!!!
		vector<string> text = FullGasDataProcess(gasData);

		if (MenuResult() == true) // Возможность выбора сохранения результата программы в файл
		{
			FileWriteData(text);
		}
		if (Menu() == false) // Вызов основного меню после завершения работы программы
			return false;
	}
	return 0;
}

