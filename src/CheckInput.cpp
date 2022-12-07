#include "CheckInput.h"

bool validBuilding(char* guess)
{
    if (guess[0] == 'A' && guess[1] == 'B' && guess[2] == 'G') 
    return true;
    else if (guess[0] == 'A' && guess[1] == 'L' && guess[2] == 'B')
        return true;
    else if (guess[0] == 'C' && guess[1] == 'A' && guess[2] == 'S')
        return true;
    else if (guess[0] == 'C' && guess[1] == 'F' && guess[2] == 'A')
        return true;
    else if (guess[0] == 'C' && guess[1] == 'G' && guess[2] == 'S')
        return true;
    else if (guess[0] == 'C' && guess[1] == 'O' && guess[2] == 'M')
        return true;
    else if (guess[0] == 'E' && guess[1] == 'P' && guess[2] == 'C')
        return true;
    else if (guess[0] == 'E' && guess[1] == 'V' && guess[2] == 'N')
        return true;
    else if (guess[0] == 'G' && guess[1] == 'S' && guess[2] == 'U')
        return true;
    else if (guess[0] == 'H' && guess[1] == 'A' && guess[2] == 'R')
        return true;
    else if (guess[0] == 'M' && guess[1] == 'C' && guess[2] == 'H')
        return true;
    else if (guess[0] == 'M' && guess[1] == 'O' && guess[2] == 'R')
        return true;
    else if (guess[0] == 'P' && guess[1] == 'H' && guess[2] == 'O')
        return true;
    else if (guess[0] == 'R' && guess[1] == 'K' && guess[2] == 'C')
        return true;
    else if (guess[0] == 'S' && guess[1] == 'A' && guess[2] == 'R')
        return true;
    else if (guess[0] == 'S' && guess[1] == 'C' && guess[2] == 'I')
        return true;
    else if (guess[0] == 'S' && guess[1] == 'H' && guess[2] == 'A')
        return true;
    else if (guess[0] == 'W' && guess[1] == 'E' && guess[2] == 'D')
        return true;
    else if (guess[0] == 'I' && guess[1] == 'N' && guess[2] == 'S')
        return true;
    else if (guess[0] == 'K' && guess[1] == 'C' && guess[2] == 'B')
        return true;
    else if (guess[0] == 'L' && guess[1] == 'A' && guess[2] == 'W')
        return true;
    else if (guess[0] == 'L' && guess[1] == 'E' && guess[2] == 'V')
        return true;
  //else if (guess[0] == 'S' && guess[1] == 'A' && guess[2] == 'R') sar is in here twice
   // return true;
    else
        cout << "Invalid, not a building! " << endl;
    return false;
}

bool validNumber(char* guessedNumber, int i)
{
    if (guessedNumber[i] == 'B' || guessedNumber[i] == '0' || guessedNumber[i] == '1' || guessedNumber[i] == '2' || guessedNumber[i] == '3' || guessedNumber[i] == '4' || guessedNumber[i] == '5' || guessedNumber[i] == '6' || guessedNumber[i] == '7' || guessedNumber[i] == '8' || guessedNumber[i] == '9' )
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool validRoomNumber(char* guess)
{
    for(int i = 4; i < 7; i++)
    {
        if (validNumber(guess, i) == true)
        {
            continue;
        }
        else
            cout << "Invalid, not a room number!" << endl;
            return false;
    }
    return true;
}


bool checkAns(char* guess, char* real)
{
 //If the letter of the first 3 char is equal to any of the real guess first 3 char it will print the correct color else print it red
  
  //first char check
    if(guess[0] == real[0] || guess[0] == real[1] || guess[0] == real[2])
    {
        if(guess[0] == real[0])
        {
            cout << GRNB << guess[0];
        }
        else if (guess[0] == real[1])
        {
            cout << YLWB << guess[0];
        }
        else if(guess[0] == real[2])
        {
            cout << YLWB << guess[0];
        }
    }
    else if (guess[0] != real[0] && guess[0] != real[1] && guess[0] != real[2])
    {
        cout << REDB << guess[0];
    }
    //second char check
    if(guess[1] == real[0] || guess[1] == real[1] || guess[1] == real[2])
    {
        if(guess[1] == real[0])
        {
            cout << YLWB << guess[1];
        }
        else if (guess[1] == real[1])
        {
            cout << GRNB << guess[1];
        }
        else if(guess[1] == real[2])
        {
            cout << YLWB << guess[1];
        }
    }
    else if (guess[1] != real[0] && guess[1] != real[1] && guess[1] != real[2])
    {
        cout << REDB << guess[1];
    }

//third char check
    if(guess[2] == real[0] || guess[2] == real[1] || guess[2] == real[2])
    {
        if(guess[2] == real[0])
        {
            cout << YLWB << guess[2] << NC << " ";
        }
        else if (guess[2] == real[1])
        {
            cout << YLWB << guess[2] << NC << " ";
        }
        else if(guess[2] == real[2])
        {
            cout << GRNB << guess[2] << NC << " ";
        }
    }
    else if (guess[2] != real[0] && guess[2] != real[1] && guess[2] != real[2])
    {
        cout << REDB << guess[2] << NC << " ";
    }

//space is guess[3] and real[3] so to leave it grayed out it is ignored
  //If the letter of the last 3 char is equal to any of the real guess last 3 char it will print the correct color else print it red

    //fourth char check
    if(guess[4] == real[4] || guess[4] == real[5] || guess[4] == real[6])
    {
        if(guess[4] == real[4])
        {
            cout << GRNB << guess[4];
        }
        else if (guess[4] == real[5])
        {
            cout << YLWB << guess[4];
        }
        else if(guess[4] == real[6])
        {
            cout << YLWB << guess[4];
        }
    }
    else if (guess[4] != real[4] && guess[4] != real[5] && guess[4] != real[6])
    {
        cout << REDB << guess[4];
    }

    //fifth char check
    if(guess[5] == real[4] || guess[5] == real[5] || guess[5] == real[6])
    {
        if(guess[5] == real[4])
        {
            cout << YLWB << guess[5];
        }
        else if (guess[5] == real[5])
        {
            cout << GRNB << guess[5];
        }
        else if(guess[5] == real[6])
        {
            cout << YLWB << guess[5];
        }
    }
    else if (guess[5] != real[4] && guess[5] != real[5] && guess[5] != real[6])
    {
        cout << REDB << guess[5];
    }
  
    //sixth char check
    if(guess[6] == real[4] || guess[6] == real[5] || guess[6] == real[6])
    {
        if(guess[6] == real[4])
        {
        cout << YLWB << guess[6] << NC << endl;
        }
        else if (guess[6] == real[5])
        {
        cout << YLWB << guess[6] << NC << endl;
        }
        else if(guess[6] == real[6])
        {
        cout << GRNB << guess[6] << NC << endl;
        }
    }
    else if (guess[6] != real[4] && guess[6] != real[5] && guess[6] != real[6])
    {
        cout << REDB << guess[6] << NC << endl;
    }
    
    if (guess[0] == real[0] && guess[1] == real[1] && guess[2] == real[2] && guess[4] == real[4] && guess[5] == real[5] && guess[6] == real[6])
    {
        return true;
    }
    else
        return false;
}