#include <fstream>
#include "RoomInfo.h"

using namespace std;

void MakeRooms(RoomInfo** rooms){ //can also add RoomInfo** rooms_ENG etc as arguments
    char building_chars[] = {'C','A','S'};
    char roomnum[] = {'1', '0', '3', '\0'};
    char digit_1;
    char digit_2;
    char digit_3;
    char letter_1,letter_2,letter_3;
    string string_link;
    ifstream fin;
    fin.open("Allrooms.txt");
    // loop to create CAS rooms
        while (!fin.eof()){
            fin >> letter_1 >> letter_2 >> letter_3 >> digit_1 >> digit_2 >> digit_3 >> string_link;
            roomnum[0] = digit_1;
            roomnum[1] = digit_2;
            roomnum[2] = digit_3;
            building_chars[0] = letter_1;
            building_chars[1] = letter_2;
            building_chars[2] = letter_3;
            rooms[i] = new RoomInfo(roomnum,building_chars,string_link);
        }
    fin.close();
    //create rooms in other buildings
    }
