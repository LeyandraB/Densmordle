#include "GenerateRandomClassroom.h"

/*
    This function gets a random classroom from the array of all_rooms and returns the
    name of the classroom as type char*
*/
char* GenerateRandomClassroom(RoomInfo** all_rooms)
{
    //Creates random seed time
    srand(time(0));
    
    //Generate random number and get the link and classroom name corresponding to that index
    int random_index = rand() % 60; 
    string link = all_rooms[random_index]->GetLink(); 
    char* referenceClassroom = all_rooms[random_index]->classroom; //this is the character string to be compared with (aka the reference)

    //Open the link
    const char *openlink = link.c_str();
    ShellExecute(0, 0, openlink, 0, 0 , SW_SHOW ); //this line is okay, even though it says there's an error, it should compile
    //*****************************
    cout << "Random classroom Generated" << endl;
    return referenceClassroom;
}