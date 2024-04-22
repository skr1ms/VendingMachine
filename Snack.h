#pragma once
#include <iostream>
#include <string>

using namespace std;

class Snack {
private:
	string snackName;
	int price;
public:
	Snack(const string snackName, const int price) : snackName(snackName), price(price) {};

	void setName(string snackNmae);

	void setPrice(int price);

	~Snack() = default;
};