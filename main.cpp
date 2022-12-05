#include <iostream>
#include <stdio.h>
#include <string.h>

#define NC "\e[0m"
#define REDB "\e[41m"
#define GRNB "\e[42m"
#define YLWB "\e[43m"

using namespace std;

bool validBuilding(char*);
bool validNumber(char);
bool validRoomNumber(char*);
void checkAns(char*, char*);

int main() {
  int numGuesses = 0;
  char* guessedClassroom = new char[8];
  char* referenceClassroom = "CAS B50";

  do {
    cout << "Enter guess: ";
    for (int i = 0; i < 8; i++)  {
      scanf("%c", &guessedClassroom[i]);
    }
    checkAns(guessedClassroom, referenceClassroom);
  } while (*guessedClassroom != *referenceClassroom);



  /* do 
  {
    cout << "Enter guess: ";
    do 
    {
      for (int i = 0; i < 7; i++)  
      {
        scanf("%c", &guessedClassroom[i]);
      }        
    } while (!validBuilding(guessedClassroom) || !validRoomNumber(guessedClassroom)); 

    checkAns(guessedClassroom, referenceClassroom);
    numGuesses++;
  } while (guessedClassroom != referenceClassroom);

  cout << "You won in " << numGuesses << " tries!" << endl; 
  */
  
  // cout << endl << referenceClassroom << endl;

  return 0;
}


/*
bool validBuilding(char* guess)  {
  if (guess[3] != ' ')
    return false;
  
  string guessedBuilding;
  guessedBuilding = guess[0] + guess[1] + guess[2];
  
  if (guessedBuilding == "ABG") 
    return true;
  else if (guessedBuilding == "ALB")
    return true;
  else if (guessedBuilding == "CAS")
    return true;
  else if (guessedBuilding == "CFA")
    return true;
  else if (guessedBuilding == "CGS")
    return true;
  else if (guessedBuilding == "COM")
    return true;
  else if (guessedBuilding == "EPC")
    return true;
  else if (guessedBuilding == "EVN")
    return true;
  else if (guessedBuilding == "GSU")
    return true;
  else if (guessedBuilding == "HAR")
    return true;
  else if (guessedBuilding == "MCH")
    return true;
  else if (guessedBuilding == "MOR")
    return true;
  else if (guessedBuilding == "PHO")
    return true;
  else if (guessedBuilding == "RKC")
    return true;
  else if (guessedBuilding == "SAR")
    return true;
  else if (guessedBuilding == "SCI")
    return true;
  else if (guessedBuilding == "SHA")
    return true;
  else if (guessedBuilding == "WED")
    return true;
  else if (guessedBuilding == "INS")
    return true;
  else if (guessedBuilding == "KCB")
    return true;
  else if (guessedBuilding == "LAW")
    return true;
  else if (guessedBuilding == "LEV")
    return true;
  else if (guessedBuilding == "SAR")
    return true;
  return false;
}

//this needs to pass in a for loop instead and it will pass the specific value and then yo want to use an or statement that will check all for correct numbers
bool validNumber(char* guessedNumber)  {  
  for (int i = 4; i < 7; i++)  {
    if (guessedNumber[i] == 'B')
      return true;
    else if (guessedNumber[i] == '0')
      return true;
    else if (guessedNumber[i] == '1')
      return true;
    else if (guessedNumber[i] == '2')
      return true;
    else if (guessedNumber[i] == '3')
      return true;
    else if (guessedNumber[i] == '4')
      return true;
    else if (guessedNumber[i] == '5')
      return true;
    else if (guessedNumber[i] == '6')
      return true;
    else if (guessedNumber[i] == '7')
      return true;
    else if (guessedNumber[i] == '8')
      return true;
    else if (guessedNumber[i] == '9')
      return true;
    return false;
  }
  
}

bool validRoomNumber(char* guess)  {
  if (validNumber(guess[4]) == true && validNumber(guess[5]) == true && validNumber(guess[6]))
    return true;
  return false;
}
*/

//function that checks each of the letters and numbers and displays it in the accurate colors 
//It passes the guessed answer and the real/correct answer
void checkAns(char* guess, char* real)
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
  
  }
    //cout << endl << REDB " F " << GRNB " U " << YLWB " N " NC << endl;
