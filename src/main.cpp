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
#include "TimedMode.h"
#include "LimitedMode.h"
#include "highestscore.h"

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
    cout << "  It's like Wordle...but instead you guess the BU classroom from the picture shown!" << endl;
    cout << "  When you enter your guess, please enter a space between the building name and classroom number." << endl;
    cout << "  For example, type 'CAS 100', not 'CAS100'." << endl << endl;
    cout << "You can choose 3 modes to play:" << endl;
    cout << "  (R) - Regular Mode: you have unlimited tries and unlimited time to guess the classroom" << endl;
    cout << "  (T) - Timed Mode: you have 1 minute to guess as many classrooms as you can" << endl;
    cout << "  (L) - Limited Mode: you have 6 tries to guess the classroom correctly" << endl;
    cout << "When in Mode selection, you can also quit the game, by typing 'Q'." << endl << endl;
    cout << "Helpful Tips:" << endl;
    cout << "  After you enter a classroom, if it is a valid guess, you will see if each character you" << endl;
    cout << "  entered is in the correct place (green), in the incorrect place but in the solution" << endl;
    cout << "  (yellow), or if it is not in the solution (red)." << endl << endl;
    cout << "Good luck!" << endl << endl;
    cout << "*********************************" << endl;

    char mode;
    bool play = true;
    unsigned int score = 0;

    while (play)
    {
        cout << "Choose a game mode:" << endl;
        cout << "   (R) Regular" << endl;
        cout << "   (T) Timed" << endl;
        cout << "   (L) Limited" << endl;
        cout << "or (Q) to quit" << endl << endl;
        cout << "Mode: ";
        try    
        {
            if(!(cin >> mode))
            {
                throw Invalid_Input("Not a mode");
                //cin.ignore();
            }
            while(getchar()!='\n')
                continue;
            switch (mode)
            {
                case 'R':
                {
                    RegularMode(all_rooms);
                }
                    break;
                case 'T':
                {
                    score = 0;
                    TimedMode(all_rooms, score);
                    cout << "In one minute, you guessed " << score << " rooms correctly!" << endl << endl;
                    display_highest_score(score);
                }
                    break;
                case 'L':
                {   
                    LimitedMode(all_rooms);
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
   
    //possiblity to do something before we return 0
      return 0;
}
