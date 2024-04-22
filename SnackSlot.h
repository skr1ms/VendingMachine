#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Snack.h"

class SnackSlot {
private:
	int quantity = 0;
	std::vector<Snack*> snacks;

public:
	SnackSlot(int quantity) : quantity(quantity) {};

	void addSnack(Snack* nameSnack) {
		if (snacks.size() < quantity) {
			snacks.push_back(nameSnack);
		}
		else {
			std::cout << "The bar has been added to the slot" << std::endl;
		}
	}

	~SnackSlot() = default;
};

