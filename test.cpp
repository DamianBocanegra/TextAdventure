#include <iostream>
#include "item.h"
#include "inventory.h"

using namespace std;


int main()
{
   

   inventory inv;

   inv.add(item("Potion", 1));
   inv.add(item("Elixir", 1));
   inv.add(item("Ether", 1));
   inv.add(item("Revive", 1));

   cout << inv.getItem(0).getName() << endl;
   cout << inv.getItem(1).getName() << endl;
   cout << inv.getItem(2).getName() << endl;
   cout << inv.getItem(3).getName() << endl;

   return 0;
}