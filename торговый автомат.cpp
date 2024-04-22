#include <iostream>
#include "VendingMachine.h"
#include "Snack.h"
#include "SnackSlot.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    Snack* bounty = new Snack("Bounty", 150);
    Snack* snickers = new Snack("Snickers", 120);
    SnackSlot* slot = new SnackSlot(10);
    slot->addSnack(bounty); 
    slot->addSnack(snickers);
    VendingMachine* machine = new VendingMachine(5);
    machine->addSlot(slot);    
    
    cout << "Количество полностью свободных слотов: " << machine->getEmptySlotsCount();

    delete machine;
    delete slot;
    delete snickers;
    delete bounty;

    return 0;
}
