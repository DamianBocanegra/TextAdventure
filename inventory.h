#include <iostream>
#include <vector>
//#include "item.h"

using namespace std;

class inventory
{
   private:
   //List of all items held
   vector<item> items;

   public:
   void add(item i)
   {
   	  items.push_back(i);
   }
   item getItem(int index)
   {
      return items[index];
   }


};