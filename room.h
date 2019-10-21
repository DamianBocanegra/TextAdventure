#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED



class Room
{
    private:
       string description;
       int roomNumber;
       int northRoom;
       int southRoom;
       int eastRoom;
       int westRoom;

    public:
        Room(string d,int rN, int n, int s, int e, int w)
        {
            description = d;
            roomNumber = rN;
            northRoom = n;
            southRoom = s;
            eastRoom = e;
            westRoom = w;

        }
        int getNorthRoom()
        {
            return northRoom;
        }
        int getSouthRoom()
        {
            return southRoom;
        }
        int getEastRoom()
        {
            return eastRoom;
        }
        int getWestRoom()
        {
            return westRoom;
        }
        string getDescription()
        {

            return description;
        }
        int getRoomNumber()
        {
            return roomNumber;
        }


};

#endif // ROOM_H_INCLUDED
