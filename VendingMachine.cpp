#include "SnackSlot.h"
#include "VendingMachine.h"

VendingMachine::VendingMachine(const int slotCount) {
	this->slotCount = slotCount;
	slots = new SnackSlot * [slotCount];
	for (int i = 0; i < slotCount; ++i) {
		slots[i] = nullptr;
	}
}

int VendingMachine::getEmptySlotsCount() const {
	int count = 0;
	for (int i = 0; i < slotCount; ++i) {
		if (slots[i] == nullptr) {
			++count;
		}
	}
	return count;
}

void VendingMachine::addSlot(SnackSlot* slot) {
	for (int i = 0; i < slotCount; ++i) {
		if (slots[i] == nullptr) {
			slots[i] = slot;
			break;
		}
	}
}
