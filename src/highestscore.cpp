
#include <iostream>
#include <fstream>
#include "highestscore.h"


void display_highest_score(int &score) {
    std::ifstream fi;
    fi.open("highestscore.txt");

    if (!fi.is_open())
    std::cout<<"error, input file could not be opened";
    
    int n;
    if(fi >> n){
    if (n < score){
        std::cout << "Score: " << score << std::endl;
        std::cout << "New High Score: " << score << std::endl ;
        fi.close();
        std::ofstream fo;
        fo.open("highestscore.txt",std::ofstream::out | std::ofstream::trunc);
        if (!fo.is_open())
            std::cout<<"error, output file could not be opened";
        fo << score;
        fo.close();
    }
    else {
        std::cout << "Score: " << score << std::endl;
        std::cout << "Highest Score: "<< n << std::endl;
        fi.close();
    }}
     else{
        fi.close();
        std::cout << "Score: " << score << std::endl ;
        std::cout << "Highest score: " << score << std::endl ;
        std::ofstream fo;
        fo.open("highestscore.txt",std::ofstream::out | std::ofstream::trunc);
        if (!fo.is_open())
            std::cout<<"error, output file could not be opened";
        fo << score;
        fo.close();
    }
    
}

