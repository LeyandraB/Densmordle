#ifndef TIMEDMODE_H
#define TIMEDMODE_H

#include <windows.h>
#include <shellapi.h>
#include <mmsystem.h> //for music
#include <chrono>
#include <iostream>
#include <future>
#include "RoomInfo.h"
#include "MakeRooms.h"
#include "GenerateRandomClassroom.h"
#include "CheckInput.h"
#include "InputHandling.h"

void TimedMode(RoomInfo**);

#endif
