#include <iostream>

using namespace std;

class item
{
    private:
    string name;
    int quantity;
    int location;

    public:
    item(string n, int q, int l)
    {
    	name = n;
    	quantity = q;
    	location = l;
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
   int getLocation()
   {

       return location;
   }
};
