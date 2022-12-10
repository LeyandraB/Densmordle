#include "TimedMode.h"


using namespace std;


void minute_timer() {
    for(int i=0;i<60;i++)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    cout << "Game Over: one minute has passed."<<endl;
    time_over = true;
}

void TimedMode(RoomInfo** all_rooms, unsigned int& score)
{

    char* referenceClassroom = GenerateRandomClassroom(all_rooms);
    cout << "Room: ";
    for(int i = 0; i < 8; i++)
        cout << referenceClassroom[i];
    bool check_ans_result = false;
    int numGuesses = 0;

    bool time_over = false;
    auto future = std::async(minute_timer);
    char* guessedClassroom;
    //**CHECK INPUT**//
 
    do {
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
            } while (!validBuilding(guessedClassroom) && !validRoomNumber(guessedClassroom) || !validRoomNumber(guessedClassroom));  //Fix this when you put the and before the or it puts the building twice
            numGuesses++;
            check_ans_result = checkAns(guessedClassroom, referenceClassroom);
        }
        catch (Invalid_Input& except)
        {
            cout << "Invalid input - " << except.msg_ptr << endl;
        }
    } while (check_ans_result == false);
    score += 1;
    cout << "You won in " << numGuesses << " tries!" << endl; //Fix the tries
    PlaySound(TEXT("WonGame.wav"), NULL, SND_ALIAS | SND_APPLICATION); //plays WonGame music when you guess correctly
}while(!time_over);
}
