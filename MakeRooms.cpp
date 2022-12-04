#include <fstream>
#include "RoomInfo.h"

using namespace std;

void MakeRooms(RoomInfo** rooms_CAS){ //can also add RoomInfo** rooms_ENG etc as arguments
    char cas[] = {'C','A','S'};
    char roomnum[] = {'1', '0', '3', '\0'};
    char digit_1;
    char digit_2;
    char digit_3;
    string string_link;
    ifstream fin;
    fin.open("Allrooms.txt");
    // loop to create CAS rooms
    for (int i = 0; i < 20 ; i++){
        while (!fin.eof()){
            fin >>digit_1>>digit_2>>digit_3 >> string_link;
            cout <<digit_1<<digit_2<<digit_3 << ' ' << string_link;
            roomnum[0] = digit_1;
            roomnum[1] = digit_2;
            roomnum[2] = digit_3;
            rooms_CAS[i] = new RoomInfo(roomnum,cas,string_link);
        }}
    fin.close();
    //create rooms in other buildings
    }
