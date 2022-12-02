#include "RoomInfo.h"

//Constructor Definitions
RoomInfo::RoomInfo(char number[3],char building[3], string link)
{
    room_number[0] = number[0];
    room_number[1] = number[1];
    room_number[2] = number[2];
    building_name[0] = building[0];
    building_name[1] = building[1];
    building_name[2] = building[2];
    picture_link = link;
    //classroom
    for(int i = 0; i < 3; i++)
    {
        classroom[i] = building_name[i];
    } 
    for (int i = 3; i < 6; i++)
    {
        classroom[i] = room_number[i-3];
    }

}

RoomInfo::RoomInfo(char number[3],char ab,char building[3],string link)
{
    room_number[0] = number[0];
    room_number[1] = number[1];
    room_number[2] = number[2];
    aorb = ab;
    building_name[0] = building[0];
    building_name[1] = building[1];
    building_name[2] = building[2];
    picture_link = link;
    //classroom
    for(int i = 0; i < 3; i++)
    {
        classroom[i] = building_name[i];
    } 
    for (int i = 3; i < 6; i++)
    {
        classroom[i] = room_number[i-3];
    }
}

//Member Function Definitions
string RoomInfo::GetLink()
{
    return picture_link;
}