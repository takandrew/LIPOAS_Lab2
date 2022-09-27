#include "Menu.h"
#include "Testing.h"
#include <vector>
#include "Files.h"
#include "GasData.h"
using namespace std;

vector<GasData> textInputFile(vector<string> text)
{
	int isIncorrectData = true;
	vector<GasData> gotGasData;
	while (isIncorrectData)
	{
		ifstream fin;
		int fileReadCorrectCheck = 0;
		cout << "Введите путь к файлу:" << endl;
		string path;
		cin >> path;

		fileReadCorrectCheck = FileReadCorrectChecking(path);
		while (fileReadCorrectCheck == false) { // Проверка корректности файла
			cout << "Ошибка открытия файла. Пожалуйста попробуйте еще раз." << endl;
			cout << "Введите путь к файлу:" << endl;
			cin >> path;
			fileReadCorrectCheck = FileReadCorrectChecking(path);
		}
		string buffer = "\0";
		fin.open(path);
		while (!fin.eof()) { // Чтение текста из файла
			while (getline(fin, buffer))
				text.push_back(buffer);
		}
		fin.close();
		while (text.size() == 0) {
			cout << "Данный файл не содержит текст. Пожалуйста попробуйте еще раз." << endl;
			cout << "Введите путь к файлу:" << endl;
			cin >> path;
			fileReadCorrectCheck = FileReadCorrectChecking(path);
			while (fileReadCorrectCheck == false) { // Проверка корректности файла
				cout << "Ошибка открытия файла. Пожалуйста попробуйте еще раз." << endl;
				cout << "Введите путь к файлу:" << endl;
				cin >> path;
				fileReadCorrectCheck = FileReadCorrectChecking(path);
			}
			buffer = "\0";
			fin.open(path);
			while (!fin.eof()) { // Чтение текста из файла
				while (getline(fin, buffer))
					text.push_back(buffer);
			}
			fin.close();
		}

		for (int i = 0; i < text.size(); i++)
		{
			GasData gotData = GasData{ -2,-2,-2,"-2",-2,-2,-2,-2,-2,-2,-2,-2,-2 };

			string currentNote = "";
			text[i].push_back(' ');
			for (int j = 0; j < text[i].size(); j++)
			{
				if (text[i][j] != ' ')
				{
					currentNote += text[i][j];
				}
				else
				{
					if (currentNote == "")
					{
						continue;
					}
					else
					{
						try
						{
							if (gotData.year == -2)
							{
								gotData.year = stoi(currentNote);
								currentNote = "";
							}
							else if (gotData.month == -2)
							{
								gotData.month = stoi(currentNote);
								currentNote = "";
							}
							else if (gotData.day == -2)
							{
								gotData.day = stoi(currentNote);
								currentNote = "";
							}
							else if (gotData.gas_brand == "-2")
							{
								gotData.gas_brand = currentNote;
								currentNote = "";
							}
							else if (gotData.mileage == -2)
							{
								gotData.mileage = stoi(currentNote);
								currentNote = "";
							}
							else if (gotData.gallonPrice == -2)
							{
								gotData.gallonPrice = stod(currentNote);
								currentNote = "";
							}
							else if (gotData.gallonQuantity == -2)
							{
								gotData.gallonQuantity = stod(currentNote);
								currentNote = "";
							}
							else if (gotData.totalSum == -2)
							{
								gotData.totalSum = stod(currentNote);
								currentNote = "";
							}
							else if (gotData.mileageBtwnFillings == -2)
							{
								gotData.mileageBtwnFillings = stoi(currentNote);
								currentNote = "";
							}
							else if (gotData.mileagePerGallon == -2)
							{
								gotData.mileagePerGallon = stod(currentNote);
								currentNote = "";
							}
							else if (gotData.mileagePrice == -2)
							{
								gotData.mileagePrice = stod(currentNote);
								currentNote = "";
							}
							else if (gotData.dayPrice == -2)
							{
								gotData.dayPrice = stod(currentNote);
								currentNote = "";
							}
							else if (gotData.gallonTimeInDays == -2)
							{
								gotData.gallonTimeInDays = stod(currentNote);
								currentNote = "";
							}
						}
						catch(...)
						{
							isIncorrectData = true;
							break;
						}
					}
				}
			}
			gotGasData.push_back(gotData);
		}

		for (auto element : gotGasData)
		{
			if (element.year == -2
				|| element.month == -2
				|| element.day == -2
				|| element.gas_brand == "-2"
				|| element.mileage == -2
				|| element.gallonPrice == -2
				|| element.gallonQuantity == -2
				|| element.totalSum == -2
				|| element.mileageBtwnFillings == -2
				|| element.mileagePerGallon == -2
				|| element.mileagePrice == -2
				|| element.dayPrice == -2
				|| element.gallonTimeInDays == -2)
			{
				isIncorrectData = true;
				cout << "Полученные из указанного файла данные некорректны. Пожалуйста, попробуйте еще раз." << endl
					<< "Данные должны быть представлены в следующем виде:" << endl
					<< "год месяц день маркаБензина пробег ценаГаллона количествоГаллонов" << endl
					<< "общаяСтоимость пробегМеждуЗаправками пробегНаОдинГаллон стоимостьПробегаВОднуМилю" << endl
					<< "стоимостьОдногоДня времяРасходованияОдногоГаллона." << endl
					<< "Данные об одной записи должны быть записаны в одну строчку и не должны содержать" << endl
					<< "значений: «-1» и «-2», так как они зарезервированы в программе для служебных целей." << endl
					<< "Данные о новой записи следует записывать с новой строчки." << endl;
				break;
			}
			else
				isIncorrectData = false;
		}
		if (isIncorrectData)
		{
			int gotGasDataSize = gotGasData.size();
			for (int i = 0; i < gotGasDataSize; i++)
				gotGasData.pop_back();
			int textSize = text.size();
			for (int i = 0; i < textSize; i++)
				text.pop_back();
		}
	}

	return gotGasData;
}

vector<string> textInputManual(vector<string> text)
{
	cout << "Введите текст:" << endl;
	cout << "Чтобы завершить ввод текста, нажмите Enter дважды." << endl;
	string buffer = "\0";
	bool firstTry = true;
	while (true) {
		getline(cin, buffer);
		if (buffer != "\0")
			text.push_back(buffer);
		else {
			if (text.size() == false) {
				if (firstTry == true)
					firstTry = false;
				else {
					cout << "Вы не ввели текст. Пожалуйста, попробуйте еще раз." << endl;
					cout << "Введите текст:" << endl;
					cout << "Чтобы завершить ввод текста, нажмите Enter дважды." << endl;
				}
			}
			else
				break;
		}
	}
	//TODO: Ну а теперь текст распарсить и закинуть в вектор объектов класса)))))))
	return text;
}

int main()
{
	setlocale(LC_ALL, "RU");
	Greeting();
	SetConsoleCP(1251);
	while (true) {
		vector<string> text;
		vector<GasData> gasData;
		if (MenuImportData() == true) { // Проверка происхождения исходных данных
			gasData = textInputFile(text);
			cout << endl << "Полученный из файла текст:" << endl;
			///TODO: вывод данных на экран. Скорее всего просто вызов уже написанной функции
		}
		else { // Ввод текста с клавиатуры
			//text = textInputManual(text);
			//if (MenuExportData() == true) // Возможность вывода исходного текста в файл
			//	FileWriteData(text);
		}
		
		if (MenuResult() == true) // Возможность выбора сохранения результата программы в файл
		{
			///TODO: Запись результата в файл. Подготовить данные к нужному виду
			//FileWriteData(resultStr);
		}
		if (Menu() == false) // Вызов основного меню после завершения работы программы
			return false;
	}
	return 0;
}

