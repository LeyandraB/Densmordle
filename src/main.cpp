#include <random>
#include <ctime>
#include <windows.h>
#include <shellapi.h>
#include <mmsystem.h> //for music

#include "RoomInfo.h"
#include "MakeRooms.h"
#include "CheckInput.h"
#include "InputHandling.h"

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

    cout << "Choose a game mode:" << endl;
    cout << "  (R) Regular" << endl;
    cout << "  (T) Timed" << endl;
    cout << "  (L) Limited" << endl << endl;
    cout << "Mode: ";
    //cin >> mode;
    
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

    bool check_ans_result = false;
    //**CHECK INPUT**//
    do 
    {
        try{
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
          check_ans_result = checkAns(guessedClassroom, referenceClassroom);
        }

      catch (Invalid_Input& except)
      {
          cout << "Invalid input - " << except.msg_ptr << endl;
      }
       
    } while (check_ans_result == false);

    cout << "You won in " << numGuesses << " tries!" << endl; //Fix the tries
    PlaySound(TEXT("WonGame.wav"), NULL, SND_ALIAS | SND_APPLICATION); //plays WonGame music when you guess correctly
    cout << "Would you like to Play Again?" << endl;

      return 0;
}
