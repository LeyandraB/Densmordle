#include <iostream>
#include <cstring>
#include <random>
#include <ctime>
#include <windows.h>
#include <shellapi.h>
#include "RoomInfo.h"
#include "MakeRooms.h"

using namespace std;

int main(){
    
    //Creates random seed time
    srand(time(0));
    
    RoomInfo* all_rooms[60]; //create array of pointers to objects of class type "RoomInfo"
    MakeRooms(all_rooms); //create all RoomInfo objects and store in all_rooms

    //this for loop is to make sure the objects are all created nicely
    // for(int i = 0; i < 60; i++)
    // {
    //     cout << "classroom: " << all_rooms[i]->classroom << endl;
    //     cout << "link: " << all_rooms[i]->GetLink() << endl;
    // }


    //Generate random number and get the link and classroom name corresponding to that index
    int random_index = rand() % 60; 
    string link = all_rooms[random_index]->GetLink(); 
    char* referenceClassroom = all_rooms[random_index]->classroom; //this is the character string to be compared with (aka the reference)
    //next two lines are for error checking purposes; uncomment if necessary
    // cout << "Random Index: " << random_index << endl;
    // cout << all_rooms[random_index]->classroom << endl;

    //Open the link
    const char *openlink = link.c_str();
    ShellExecute(0, 0, openlink, 0, 0 , SW_SHOW ); //this line is okay, even though it says there's an error, it should compile        
    
    return 0;

}
