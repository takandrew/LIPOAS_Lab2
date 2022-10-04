#pragma once
#include <vector>
#include "GasData.h"
#include "Files.h"

using namespace std;

const double dataNotSet = -2;

vector<GasData> getGasDataFromText(vector<string> text, bool* isIncorrectData);
vector<GasData> textInputFile();
vector<GasData> textInputManual();