#include "Get_total_rooms.h"
#include <fstream>
using namespace std;

const int Get_total_rooms(string filename){
ifstream inf;
inf.open(filename);
if (!inf.is_open()) {
    cout << "Error: Failed to open file!" << endl;
    exit(1);
}
string line;
int lineCount = 0;
 while (getline(inf, line)) {
 	lineCount++;
 }
inf.close();
return lineCount;
}
