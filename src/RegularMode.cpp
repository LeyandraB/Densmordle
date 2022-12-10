#include "RegularMode.h"

void RegularMode(RoomInfo** all_rooms)
{
    //initialized variables should for the most part be the same in all modes:
    char* referenceClassroom = GenerateRandomClassroom(all_rooms); //generates random classroom and assigns to the variable referenceClassroom
    bool check_ans_result = false;
    int numGuesses = 0;
    char* guessedClassroom;
    //**CHECK INPUT**//
    do 
    {
        try //followed by catch later
        {
            do //while guesses are invalid
            {
                cout << "Enter guess: ";
                for (int i = 0; i < 8; i++)  
                {
                    scanf("%c", &guessedClassroom[i]);
                }
            } while (!validBuilding(guessedClassroom) && !validRoomNumber(guessedClassroom) || !validRoomNumber(guessedClassroom));  //Fix this when you put the and before the or it puts the building twice
            numGuesses++;
            check_ans_result = checkAns(guessedClassroom, referenceClassroom);
        }
        catch (Invalid_Input& except)
        {
            cout << "Invalid input - " << except.msg_ptr << endl;
        }
    } while (check_ans_result == false);
    
    PlaySound(TEXT("WonGame.wav"), NULL, SND_ALIAS | SND_APPLICATION); //plays WonGame music when you guess correctly
    cout << "You won in " << numGuesses << " tries!" << endl;
    

}