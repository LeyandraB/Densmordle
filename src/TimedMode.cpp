#include "TimedMode.h"

using namespace std;

void minute_timer(bool &time_over) {
    for(int i=0;i<60;i++)
    {
        this_thread::sleep_for(std::chrono::seconds(1));
    }
    cout << "Time's up! One minute has passed. Enter a final guess: " << endl;
    time_over = true;
    while(getchar()!= '\n')
        continue;
}

void TimedMode(RoomInfo** all_rooms, unsigned int& score)
{
    bool check_ans_result = false;
    int numGuesses = 0;

    bool time_over = false;
    auto f = std::async(std::launch::async, [&time_over]{ minute_timer(time_over); });
    //auto future = std::async(std::launch::async, minute_timer, time_over); /**/
    char* guessedClassroom;
    //**CHECK INPUT**//
    cout << "Timer started. You have 1 minute..." << endl;
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
                } while (!time_over && (!validBuilding(guessedClassroom) && !validRoomNumber(guessedClassroom) || !validRoomNumber(guessedClassroom)));  //Fix this when you put the and before the or it puts the building twice
                numGuesses++;
                check_ans_result = checkAns(guessedClassroom, referenceClassroom);
            }
            catch (Invalid_Input& except)
            {
                cout << "Invalid input - " << except.msg_ptr << endl;
                while(getchar()!= '\n')
                    continue;
                //cin.getline();
            }
        } while (check_ans_result == false && !time_over);
        if(check_ans_result)
        {
            score += 1;
            cout << "You got it in " << numGuesses << " tries!" << endl; //Fix the tries
            numGuesses = 0;
            PlaySound(TEXT("WonGame.wav"), NULL, SND_ASYNC); //plays WonGame music when you guess correctly
            check_ans_result = false;
        }
    }while(!time_over);
    
     if(score!=0)
    {
        display_highest_score(score);
    }
   
}
