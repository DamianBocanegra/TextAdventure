#include <iostream>

using namespace std;

class item
{
    private: 
    string name;
    int quantity;

    public:
    item(string n, int q)
    {
    	name = n;
    	quantity = q;
    }

    string getName()
    {
    	return name;
    }

    int getQuantity()
    {
    	return quantity;
    }
    void raiseQuantity()
    {
    	quantity += 1;
    }

   void lowerQuantity()
   {
   	quantity -= 1;
   }
};