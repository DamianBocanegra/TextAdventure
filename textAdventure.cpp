#include<iostream>
#include<vector>

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

//Global vars
vector<Room> roomList;
Room current_room;
bool done = false;

int main()
{
    roomList.push_back(createNewRoom("In this room you see a room to the north and there is a lamp to the east.", 2, 0, 0, 0));
    roomList.push_back(createNewRoom("You see a room to the east, north, and another to the south.", 3, 1, 4, 0));
    roomList.push_back(createNewRoom("This room is empty you can only go south.", 0, 2, 0, 0));
    roomList.push_back(createNewRoom("There is a dead body in here. You may only go west", 0, 0, 0, 2));

    current_room = roomList[0];
    string response;

    while(!done)
    {
        cout << current_room.description << endl;
        cout << "What do you want to do." << endl;

        cin >> response;
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
     if(res == "north")
      {
        if(current_room.northRooms != 0)
        {
            current_room = roomList[current_room.northRooms - 1];
        }
      }

      else if(res == "south")
      {
        if(current_room.southRooms != 0)
        {
            current_room = roomList[current_room.southRooms - 1];
        }
      }

      else if(res == "east")
      {
        if(current_room.eastRooms != 0)
        {
            current_room = roomList[current_room.eastRooms - 1];
        }
      }

      else if(res == "west")
      {
        if(current_room.westRooms != 0)
        {
            current_room = roomList[current_room.westRooms - 1];
        }
      }

      else if(res == "quit")
      {
          done = true;
      }

      else
      {
          cout << "I don't understand." << endl;
      }
}



