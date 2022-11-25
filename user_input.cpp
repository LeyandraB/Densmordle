
#include <iostream>
#include <cstring>
#include <random>
#include <ctime>
#include <windows.h>
#include <shellapi.h>


using namespace std;

class Room{
public:
    int number;
    char aorb;
    char building[3];
    string picture_link;
    
    Room(int number,char building_name[3],string picture_link){
        this->number = number;
        this->building[0] = building_name[0];
        this->building[1] = building_name[1];
        this->building[2] = building_name[2];
        this->picture_link = picture_link;
    }
    Room(int number,char aorb,char building_name[3],string picture_link){
        this->number = number;
        this->aorb = aorb;
        this->building[0] = building_name[0];
        this->building[1] = building_name[1];
        this->building[2] = building_name[2];
        this->picture_link = picture_link;
    }
};

int main(){
    
    srand(time(0));
    
    Room* rooms_CAS[20];
    char cas[] = {'C','A','S'};
    Room cas103(103,cas,"https://www.bu.edu/classrooms/files/2020/08/CASTsai-1.jpg");
    rooms_CAS[0] = &cas103;
    Room cas114a(114,'a',cas,"https://www.bu.edu/classrooms/files/2017/01/CAS114A-%E2%80%94-Picture-Front2.jpg");
    rooms_CAS[1] = &cas114a;
    Room cas114b(114,'b',cas,"https://www.bu.edu/classrooms/files/2015/09/CAS114B-04.jpg");
    rooms_CAS[2] = &cas114b;
    Room cas116(116,cas,"https://www.bu.edu/classrooms/files/2015/09/CAS116-1.jpg");
    rooms_CAS[3] = &cas116;
    Room cas201(201,cas,"https://www.bu.edu/classrooms/files/2017/07/CAS201-%E2%80%94-Picture-Front2.jpg");
    rooms_CAS[4] = &cas201;
    Room cas204a(204,'a',cas,"https://www.bu.edu/classrooms/files/2013/08/CAS204A-Front-636x424.jpg");
    rooms_CAS[5] = &cas204a;
    Room cas204b(204,'b',cas, "https://www.bu.edu/classrooms/files/2013/08/CAS204B-Front-636x424.jpg");
    rooms_CAS[6] = &cas204b;
    Room cas208(208,cas,"https://www.bu.edu/classrooms/files/2015/03/CAS208-Front001.jpg");
    rooms_CAS[7] = &cas208;
    Room cas211(211,cas,"https://www.bu.edu/classrooms/files/2013/08/CAS211-Front.jpg");
    rooms_CAS[8] = &cas211;
    Room cas212(212,cas,"https://www.bu.edu/classrooms/files/2015/09/CAS212-1.jpg");
    rooms_CAS[9] = &cas212;
    Room cas213(213,cas,"https://www.bu.edu/classrooms/files/2017/08/CAS213-%E2%80%94-Picture-Back1.jpg");
    rooms_CAS[10] = &cas213;
    Room cas214(214,cas,"https://www.bu.edu/classrooms/files/2015/09/CAS214-1.jpg");
    rooms_CAS[11] = &cas214;
    Room cas216(216,cas,"https://www.bu.edu/classrooms/files/2017/08/CAS216-%E2%80%94-Picture-Back1.jpg");
    rooms_CAS[12] = &cas216;
    Room cas218(218,cas,"https://www.bu.edu/classrooms/files/2015/03/CAS218-Front001.jpg");
    rooms_CAS[13] = &cas218;
    Room cas220(220,cas,"https://www.bu.edu/classrooms/files/2013/08/CAS220-Front-636x424.jpg");
    rooms_CAS[14] = &cas220;
    Room cas221(221,cas,"https://www.bu.edu/classrooms/files/2015/09/CAS221-1.jpg");
    rooms_CAS[15] = &cas221;
    Room cas222(222,cas,"https://www.bu.edu/classrooms/files/2013/08/CAS222-Front-636x423.jpg");
    rooms_CAS[16] = &cas222;
    Room cas223(223,cas,"https://www.bu.edu/classrooms/files/2017/08/CAS223-%E2%80%94-Picture-Front1.jpg");
    rooms_CAS[17] = &cas223;
    Room cas224(224,cas,"https://www.bu.edu/classrooms/files/2013/08/CAS224-Front.jpg");
    rooms_CAS[18] = &cas224;
    Room cas203(203,cas,"https://www.bu.edu/classrooms/files/2017/07/CAS203-%E2%80%94-Picture-Front2.jpg");
    rooms_CAS[19] = &cas203;
    
    do{
        int random_index = rand() % 20;
        int t = 0;
        ShellExecute(0, 0, rooms_CAS[random_index]->picture_link, 0, 0 , SW_SHOW );
    
        
    }while(t<5);
    
    
    return 0;

}
