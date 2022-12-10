#include <random>
#include <ctime>
#include <windows.h>
#include <shellapi.h>
#include <mmsystem.h> //for music

#include "RoomInfo.h"
#include "MakeRooms.h"
#include "CheckInput.h"
#include "InputHandling.h"
#include "RegularMode.h"

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
    cout << "Instructions:" << endl;
    cout << "  It's time to guess what BU classroom the image is taken in." << endl;
    cout << "  When you enter your guess, please enter a space between the building name and classroom number." << endl;
    cout << "  For example, type 'CAS 100', not 'CAS100'." << endl << endl;
    //cout << "  You can type 'q', anytime to quite the game." << endl;
    cout << "  Good luck!" << endl << endl;
    cout << "*********************************" << endl;

    char mode;
    bool play = true;
    unsigned int score = 0;

    while (play)
    {
        cout << "Choose a game mode:" << endl;
        cout << "  (R) Regular" << endl;
        cout << "  (T) Timed" << endl;
        cout << "  (L) Limited" << endl;
        cout << "or (Q) to quit" << endl << endl;
        cout << "Mode: ";
        try    
        {
            if(!(cin >> mode))
            {
                throw Invalid_Input("Not a mode");
            }
            getchar();
            switch (mode)
            {
                case 'R':
                {
                    RegularMode(all_rooms);
                }
                    break;
                case 'T':
                {
                    TimedMode(all_rooms, score);
                }
                    break;
                case 'L':
                {   
                    //LimitedMode()
                }
                    break;
                case 'Q':
                {
                    play = false;
                    break;
                }
                default:
                    throw Invalid_Input("Not a valid command or mode");
                    break;
            }
        }
        catch (Invalid_Input& except)
        {
            cout << "Invalid input - " << except.msg_ptr << endl;
            cin.clear();
            cin.ignore(10,'\n');
        }
    }
    display_highest_score(score);
    //possiblity to do something before we return 0
      return 0;
}
