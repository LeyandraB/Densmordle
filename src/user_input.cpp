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
    
    srand(time(0));
    
    RoomInfo* rooms_in_CAS[20];
    MakeRooms(rooms_in_CAS);

    //Can uncomment this to make sure all the output in each object is correct
    // for(int i = 0; i < 20; i++)
    // {
    //     cout << "classroom: " << rooms_in_CAS[i]->classroom << endl;
    //     cout << "link: " << rooms_in_CAS[i]->GetLink() << endl;
    // }
    // if (rooms_in_CAS[0]->classroom[0] == 'C')
    // {
    //     cout << "classroom[0] IS " << rooms_in_CAS[0]->classroom[0] << endl;
    // }
    // else
    //     cout << "not a match. " << rooms_in_CAS[0]->classroom[0] << " is not 'C'" << endl;

    //Generate random number and get the link and classroom name
    int random_index = rand() % 20;
    string link = rooms_in_CAS[random_index]->GetLink();
    //cout << "Random Index: " << random_index << endl;
    char* reference_classroom = rooms_in_CAS[random_index]->classroom;
    //cout << rooms_in_CAS[random_index]->classroom << endl;

    //Open the link
    const char *openlink = link.c_str();
    ShellExecute(0, 0, openlink, 0, 0 , SW_SHOW ); //this line is okay, even though it says there's an error, it should compile        
    
    return 0;

}
