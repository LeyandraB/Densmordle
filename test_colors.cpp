/* from https://www.zditect.com/guide/cpp/how-to-colorize-output-in-console-cpp.html*/
/*another helpful link: https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797*/

#include <iostream>

#define NC "\e[0m"
#define REDT "\e[0;31m"
#define GRNT "\e[0;32m"
#define YLWT "\e[0;33m"
#define REDB "\e[41m"
#define GRNB "\e[42m"
#define YLWB "\e[43m"


using std::cout; using std::endl;

int main()
{
    cout << REDT "red text" NC;
    cout << GRNT " green text " NC;
    cout << YLWT "yellow text" NC << endl;
    cout << REDB "Red background" NC << endl;
    cout << GRNB "Green background" NC << endl;
    cout << YLWB "Yellow background" NC << endl;
    cout << endl << REDB " F " << GRNB " U " << YLWB " N " NC << endl;
    cout << "reset to default colors with NC" << endl;

    return 0;
}