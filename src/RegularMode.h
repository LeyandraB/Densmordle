#ifndef REGULARMODE_H
#define REGULARMODE_H

#include <windows.h>
#include <shellapi.h>
#include <mmsystem.h> //for music

#include "RoomInfo.h"
#include "MakeRooms.h"
#include "GenerateRandomClassroom.h"
#include "CheckInput.h"
#include "InputHandling.h"

void RegularMode(RoomInfo**);
/*
    RegularMode lets you guess the classroom until you get it, and tells you how many
    tries it took you to get it right. The RoomInfo** all_rooms is passed into the function
    So it can be used to generate a random classroom

*/

#endif