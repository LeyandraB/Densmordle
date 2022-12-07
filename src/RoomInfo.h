#ifndef ROOMINFO_H
#define ROOMINFO_H

#include <iostream>
#include <string>

using namespace std;

class RoomInfo
{
    private:
        char room_number[3];
        char aorb;
        char building_name[3];
        string picture_link;
    
    public:
        RoomInfo(char number[3],char building[3],string link);
        RoomInfo(char number[3],char aorb,char building[3],string link);
        string GetLink();
        char classroom[7];
};

#endif
