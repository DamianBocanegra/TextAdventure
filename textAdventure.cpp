#include<iostream>
#include<vector>
#include<string>
#include "item.h"
#include "inventory.h"

using namespace std;


//Structure for room
struct Room
{
    string description;
    int northRooms;
    int southRooms;
    int eastRooms;
    int westRooms;

};

//Protypes
Room createNewRoom(string, int, int, int, int);
void interpertAction(string);
void interpertDirection(string);
void takeItem(string);
inventory createWorldItems(int);

//Global vars
vector<Room> roomList;
Room current_room;
bool done = false;
inventory worldItems;
inventory playerInventory;

int main()
{
    roomList.push_back(createNewRoom("In this room you see a room to the north and to the east.", 2, 0, 0, 0));
    roomList.push_back(createNewRoom("You see a room to the east, north, and another to the south.", 3, 1, 4, 0));
    roomList.push_back(createNewRoom("This room is empty you can only go south.", 0, 2, 0, 0));
    roomList.push_back(createNewRoom("There is a dead body in here. You may only go west", 0, 0, 0, 2));

    worldItems = createWorldItems(1);
    current_room = roomList[0];
    string response;

    while(!done)
    {
        cout << current_room.description << endl;
        cout << "What do you want to do." << endl;

        getline(cin, response);
        cout << '\n' << endl;

        interpertAction(response);
    }

    return 0;
}

Room createNewRoom(string des, int n, int s, int e, int w)
{
    Room r;

    r.description = des;
    r.northRooms = n;
    r.southRooms = s;
    r.eastRooms = e;
    r.westRooms = w;

    return r;

}

void interpertAction(string res)
{
     if(res.find("go") != string::npos)
     {
         interpertDirection(res);
     }
     else if(res.find("quit") != string::npos )
     {
         done = true;
     }
     else if(res.find("take") != string::npos)
     {
         takeItem(res);
     }
     else
     {
         cout << "I don't understand." << endl;
     }
}
void takeItem(string res)
{
    for(int i =0; i < worldItems.length(); i++)
    {
        if(worldItems.getItem(i).getName() == res)
        {

        }
    }
}

void interpertDirection(string res)
{
    if(res.find("north") != string::npos)
    {
        cout << "command is go north." << endl;
        if(current_room.northRooms != 0)
        {
            current_room = roomList[current_room.northRooms - 1];
        }
    }
    else if(res.find("south") != string::npos)
    {
        cout << "command is go south." << endl;
        if(current_room.southRooms != 0)
        {
            current_room = roomList[current_room.southRooms - 1];
        }
    }
    else if(res.find("west") != string::npos)
    {
        cout << "command is go west." << endl;
        if(current_room.westRooms != 0)
        {
            current_room = roomList[current_room.westRooms - 1];
        }

    }
    else if (res.find("east") != string::npos)
    {
        cout << "command is go east." << endl;
        if(current_room.eastRooms != 0)
        {
            current_room = roomList[current_room.eastRooms - 1];
        }
    }
    else
    {
        cout << "I don't understand." << endl;
    }

}

inventory createWorldItems(int arg)
{
   inventory inv;
   inv.add(item("Potion", 1, 1));
   inv.add(item("Elixir", 1, 2));
   inv.add(item("Ether", 1, 3));
   inv.add(item("Revive", 1, 4));

   return inv;
}


