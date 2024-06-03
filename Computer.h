#pragma once
#include <iostream>
#include <cstring>
using namespace std;

struct Computer {
	char name[100] = "";
	float frequency = 0;
	int RAM = 0;
	bool DVDROM = 0;
	float price = 0;

	void showComputer() {
		cout << "Name: " << name << endl;
		cout << "Frequency: " << frequency <<" GHz" << endl;
		cout << "RAM: " << RAM << " Gb" << endl;
		cout << "DVDROM: " << (DVDROM ? "yes" : "no") << endl;
		cout << "Price: " << price << " UAH" << endl << endl;
	}
};