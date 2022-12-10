#include "LimitedMode.h"

using namespace std;

void LimitedMode(RoomInfo** all_rooms)
{
    bool check_ans_result = false;
    int numGuesses = 0;

    bool time_over = false;
    char* guessedClassroom;
    //**CHECK INPUT**//
    cout << "You have 6 tries to guess this room." << endl;
    do
    {
        char* referenceClassroom = GenerateRandomClassroom(all_rooms);
        do
        {
            try
            {
                do
                {
                    cout << "Enter guess: ";
                    for (int i = 0; i < 8; i++)
                    {
                        scanf("%c", &guessedClassroom[i]);
                    }
                } while ((numGuesses < 6) && (!validBuilding(guessedClassroom) && !validRoomNumber(guessedClassroom) || !validRoomNumber(guessedClassroom)));  //Fix this when you put the and before the or it puts the building twice
                numGuesses++;
                check_ans_result = checkAns(guessedClassroom, referenceClassroom);
                if (!check_ans_result)
                {
                    cout << "You have " << 6-numGuesses << " remaining guesses." << endl;
                }
            }
            catch (Invalid_Input& except)
            {
                cout << "Invalid input - " << except.msg_ptr << endl;
                while(getchar()!= '\n')
                    continue;
                //cin.getline();
            }
        } while (check_ans_result == false && (numGuesses < 6));
        
        if(check_ans_result)
        {
            cout << "You got it in " << numGuesses << " tries!" << endl; //Fix the tries
            numGuesses = 0;
            PlaySound(TEXT("WonGame.wav"), NULL, SND_ASYNC); //plays WonGame music when you guess correctly
            return;
            check_ans_result = false;
        }
    }while((numGuesses < 6));

    cout << "You lose!" << endl;
    PlaySound(TEXT("LoseGame.wav"), NULL, SND_ASYNC);
}
