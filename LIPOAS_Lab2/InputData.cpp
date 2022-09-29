#include "InputData.h"

vector<GasData> getGasDataFromText(vector<string> text, bool* isIncorrectData)
{
	vector<GasData> gotGasData;
	for (int i = 0; i < text.size(); i++)
	{
		GasData gotData = GasData{ -2,-2,-2,"-2",-2,-2,-2,-2,-1,-1,-1,-1,-1 };

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
		if (element.year == -2
			|| element.month == -2
			|| element.day == -2
			|| element.gas_brand == "-2"
			|| element.mileage == -2
			|| element.gallonPrice == -2
			|| element.gallonQuantity == -2
			|| element.totalSum == -2)
		{
			*isIncorrectData = true;
			cout << "Полученные из указанного файла данные некорректны. Пожалуйста, попробуйте еще раз." << endl
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


		gotGasData = getGasDataFromText(text, &isIncorrectData);

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