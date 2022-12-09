#ifndef GENERATERANDOMCLASSROOM_H
#define GENERATERANDOMCLASSROOM_H

#include <random>
#include <ctime>
#include <windows.h>
#include <shellapi.h>
#include <mmsystem.h> //for music

#include "RoomInfo.h"
#include "MakeRooms.h"
#include "CheckInput.h"
#include "InputHandling.h"

char* GenerateRandomClassroom(RoomInfo** all_rooms);

#endif