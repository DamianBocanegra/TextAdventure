#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED


class Room
{
    private:
       string description;
       item itemsInRoom[5];
       int northRoom;
       int southRoom;
       int eastRoom;
       int westRoom;

    public:
        Room(string d, int n, int s, int e, int w)
        {
            description = d;
            northRoom = n;
            southRoom = s;
            eastRoom = e;
            westRoom = w;

        }
        void addItems(item im, int index)
        {
            itemsInRoom[index] = im;
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


};

#endif // ROOM_H_INCLUDED
