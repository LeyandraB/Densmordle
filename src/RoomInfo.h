#ifndef ROOMINFO_H
#define ROOMINFO_H

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class RoomInfo
{
    private:
        char room_number[3];
        char building_name[3];
        string picture_link;
    
    public:
        RoomInfo(char number[3],char building[3],string link);
        string GetLink();
        char classroom[8];
};

#endif
