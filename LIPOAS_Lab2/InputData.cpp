#include "InputData.h"

vector<GasData> getGasDataFromText(vector<string> text, bool* isIncorrectData)
{
	int monthAmount = 12;
	vector<GasData> gotGasData;
	for (int i = 0; i < text.size(); i++)
	{
		GasData gotData = GasData{ (int)dataNotSet,(int)dataNotSet,(int)dataNotSet,
			to_string(dataNotSet),(int)dataNotSet,dataNotSet,dataNotSet,
			dataNotSet,(int)dataUnknown,dataUnknown,dataUnknown,
			dataUnknown,dataUnknown };

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
						if (gotData.year == dataNotSet)
						{
							gotData.year = stoi(currentNote);
							currentNote = "";
							if (gotData.year != (int)dataUnknown && gotData.year <= numZero)
							{
								*isIncorrectData = true;
								cout << "Год не может быть отрицательным либо нулевым (для неопределенного значения используйте -1)" << endl;
								break;
							}
						}
						else if (gotData.month == dataNotSet)
						{
							gotData.month = stoi(currentNote);
							currentNote = "";
							if (gotData.month != (int)dataUnknown && (gotData.month <= numZero || gotData.month > monthAmount))
							{
								*isIncorrectData = true;
								cout << "Значение месяца некорректно (для неопределенного значения используйте -1)" << endl;
								break;
							}
						}
						else if (gotData.day == dataNotSet)
						{
							gotData.day = stoi(currentNote);
							currentNote = "";
							int daysInMonth = (int)dataUnknown;
							int daysInYear = (int)dataUnknown;
							checkDateNumbers(gotData.year, gotData.month, &daysInMonth, &daysInYear);
							if (gotData.day != (int)dataUnknown && (gotData.day <= numZero || gotData.day > daysInMonth))
							{
								*isIncorrectData = true;
								cout << "Значение дня некорректно (для неопределенного значения используйте -1)" << endl;
								break;
							}
						}
						else if (gotData.gas_brand == to_string(dataNotSet))
						{
							gotData.gas_brand = currentNote;
							currentNote = "";
						}
						else if (gotData.mileage == dataNotSet)
						{
							gotData.mileage = stoi(currentNote);
							currentNote = "";
						}
						else if (gotData.gallonPrice == dataNotSet)
						{
							gotData.gallonPrice = stod(currentNote);
							currentNote = "";
						}
						else if (gotData.gallonQuantity == dataNotSet)
						{
							gotData.gallonQuantity = stod(currentNote);
							currentNote = "";
						}
						else if (gotData.totalSum == dataNotSet)
						{
							gotData.totalSum = stod(currentNote);
							currentNote = "";
						}
					}
					catch (...)
					{
						*isIncorrectData = true;
						break;
					}
				}
			}
		}
		gotGasData.push_back(gotData);
	}

	for (auto element : gotGasData)
	{
		if (element.year == dataNotSet
			|| element.month == dataNotSet
			|| element.day == dataNotSet
			|| element.gas_brand == to_string(dataNotSet)
			|| element.mileage == dataNotSet
			|| element.gallonPrice == dataNotSet
			|| element.gallonQuantity == dataNotSet
			|| element.totalSum == dataNotSet)
		{
			*isIncorrectData = true;
			cout << "Полученные данные некорректны. Пожалуйста, попробуйте еще раз." << endl
				<< "Данные должны быть представлены в следующем виде:" << endl
				<< "год месяц день маркаБензина пробег ценаГаллона количествоГаллонов общаяСтоимость" << endl
				<< "Данные об одной записи должны быть записаны в одну строчку и не должны содержать" << endl
				<< "значения: «-2», так как оно зарезервировано в программе для служебных целей." << endl
				<< "Если конкретного значения у какой-либо характеристики нет, то следует его записать в виде «-1»" << endl
				<< "Данные о новой записи следует записывать с новой строчки." << endl;
			break;
		}
		else
			*isIncorrectData = false;
	}
	return gotGasData;
}

vector<GasData> textInputFile()
{
	vector<GasData> gotGasData;
	vector<string> text;
	bool isIncorrectData = true;
	while (isIncorrectData)
	{
		ifstream fin;
		int fileReadCorrectCheck = 0;
		cout << "Обратите внимание, что для корректного чтения данных дробная часть"
			<< " в числах должна отделяться запятой, а не точкой." << endl;
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
		while (text.size() == numZero) {
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


		gotGasData = getGasDataFromText(text, &isIncorrectData);

		if (isIncorrectData)
		{
			int gotGasDataSize = (int)gotGasData.size();
			for (int i = 0; i < gotGasDataSize; i++)
				gotGasData.pop_back();
			int textSize = (int)text.size();
			for (int i = 0; i < textSize; i++)
				text.pop_back();
		}
	}

	return gotGasData;
}

vector<GasData> textInputManual()
{
	vector<GasData> gotGasData;
	vector<string> text;
	bool isIncorrectData = true;
	while (isIncorrectData)
	{
		cout << endl << "Данные должны быть представлены в следующем виде:" << endl
			<< "год месяц день маркаБензина пробег ценаГаллона количествоГаллонов общаяСтоимость" << endl
			<< "Данные об одной записи должны быть записаны в одну строчку и не должны содержать" << endl
			<< "значения: «-2», так как оно зарезервировано в программе для служебных целей." << endl
			<< "Если конкретного значения у какой-либо характеристики нет, то следует его записать в виде «-1»" << endl
			<< "Данные о новой записи следует записывать с новой строчки." << endl;
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

		gotGasData = getGasDataFromText(text, &isIncorrectData);

		if (isIncorrectData)
		{
			int gotGasDataSize = (int)gotGasData.size();
			for (int i = 0; i < gotGasDataSize; i++)
				gotGasData.pop_back();
			int textSize = (int)text.size();
			for (int i = 0; i < textSize; i++)
				text.pop_back();
		}
	}

	return gotGasData;
}