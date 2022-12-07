#include <random>
#include <ctime>
#include <windows.h>
#include <shellapi.h>

#include "RoomInfo.h"
#include "MakeRooms.h"
#include "CheckInput.h"

using namespace std;

int main() 
{
    int numGuesses = 0;
    char* guessedClassroom = new char[8];

    RoomInfo* all_rooms[60]; //create array of pointers to objects of class type "RoomInfo"
    MakeRooms(all_rooms); //create all RoomInfo objects and store in all_rooms

    //Print a welcome message and instructions
    cout << "*********************************" << endl;
    cout << "Welcome to Densmordle!" << endl << endl;
    cout << "It's time to guess what BU classroom the image is taken in." << endl;
    cout << "When you enter your guess, please enter a space between the building name and classroom number." << endl;
    cout << "For example, type 'CAS 100', not 'CAS100'." << endl << endl;
    cout << "Good luck!" << endl;
    cout << "*********************************" << endl;
    
    //**BUILD CLASSROOMS AND GET A RANDOM ONE**//
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

    //**CHECK INPUT**//
    do 
    {
        do 
        {
            cout << "Enter guess: ";
            for (int i = 0; i < 8; i++)  
            {
                scanf("%c", &guessedClassroom[i]);
            }        
        } while (!validBuilding(guessedClassroom) && !validRoomNumber(guessedClassroom) || !validRoomNumber(guessedClassroom));  //Fix this when you put the and before the or it puts the building twice
            numGuesses++;
        /*
        if (checkAns(guessedClassroom, referenceClassroom))
            break;
        else
            continue;
        */
    } while (checkAns(guessedClassroom, referenceClassroom) == false);

    cout << "You won in " << numGuesses << " tries!" << endl; //Fix the tries
  

      return 0;
}