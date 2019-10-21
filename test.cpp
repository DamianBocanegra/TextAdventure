#include <iostream>
#include "item.h"
#include "inventory.h"
#include "room.h"

using namespace std;


int main()
{


   inventory inv;

   Room rm = Room("test room", 1,0,0,0,0);

   inv.add(item("Potion", 1, 1));
   inv.add(item("Elixir", 1, 2));
   inv.add(item("Ether", 1, 3));
   inv.add(item("Revive", 1, 4));

   cout << inv.getItem(0).getName() << endl;
   cout << inv.getItem(1).getName() << endl;
   cout << inv.getItem(2).getName() << endl;
   cout << inv.getItem(3).getName() << endl;

   cout << rm.getDescription() << endl;

   if(rm.getRoomNumber() == inv.getItem(0).getLocation())
   {
       cout << rm.getDescription() << " contains the item " << inv.getItem(0).getName() << endl;
   }

   string str;
   getline(cin, str);
   if(str.find("go") != string::npos)
   {
       cout << str << endl;
   }

   if(str.find("north") != string::npos)
   {
       cout << "String contains north" << endl;
   }

   return 0;
}
