#pragma once
#include <iostream>
#include "SnackSlot.h"

using namespace std;


class VendingMachine {
private:
	SnackSlot** slots;
	int slotCount;
public:
	VendingMachine(int slotCount);
	
	void addSlot(SnackSlot* slot);

	int getEmptySlotsCount() const;
};
