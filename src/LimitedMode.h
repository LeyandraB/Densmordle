#ifndef LIMITEDMODE_H
#define LIMITEDMODE_H

#include <windows.h>
#include <shellapi.h>
#include <mmsystem.h> //for music

#include "RoomInfo.h"
#include "MakeRooms.h"
#include "GenerateRandomClassroom.h"
#include "CheckInput.h"
#include "InputHandling.h"

void LimitedMode(RoomInfo**);
/*
    LimitedMode lets you guess the classroom until you get it or you've run out of tries.
    The RoomInfo** all_rooms is passed into the function to be used to generate a random 
    classroom

*/

#endif