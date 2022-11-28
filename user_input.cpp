#include <iostream>
#include <cstring>
#include <random>
#include <ctime>
#include <windows.h>
#include <shellapi.h>


using namespace std;

class Room{
public:
    char number[3];
    char aorb;
    char building[3];
    string picture_link;
    
    Room(char number[3],char building_name[3],string picture_link){
        this->number[0] = number[0];
        this->number[1] = number[1];
        this->number[2] = number[2];
        this->building[0] = building_name[0];
        this->building[1] = building_name[1];
        this->building[2] = building_name[2];
        this->picture_link = picture_link;
    }
    Room(char number[3],char aorb,char building_name[3],string picture_link){
        this->number[0] = number[0];
        this->number[1] = number[1];
        this->number[2] = number[2];
        this->aorb = aorb;
        this->building[0] = building_name[0];
        this->building[1] = building_name[1];
        this->building[2] = building_name[2];
        this->picture_link = picture_link;
    }
};

int main(){
    
    srand(time(0));

    //may want to make the numbers into characters because when we ask for user input
    //we have them enter a string of characters?
    
    Room* rooms_CAS[20];
    char cas[] = {'C','A','S'};
    //CAS103
    char roomnum[] = {'1', '0', '3', '\0'};
    Room cas103(roomnum, cas,"https://www.bu.edu/classrooms/files/2020/08/CASTsai-1.jpg");
    rooms_CAS[0] = &cas103;
    
    //CAS114
    //roomnum = ['1', '1', '4'];
    strcpy(roomnum, "114");
    Room cas114a(roomnum,'a',cas,"https://www.bu.edu/classrooms/files/2017/01/CAS114A-%E2%80%94-Picture-Front2.jpg");
    rooms_CAS[1] = &cas114a;
    Room cas114b(roomnum,'b',cas,"https://www.bu.edu/classrooms/files/2015/09/CAS114B-04.jpg");
    rooms_CAS[2] = &cas114b;
    //CAS116
    strcpy(roomnum, "216");
    Room cas116(roomnum,cas,"https://www.bu.edu/classrooms/files/2015/09/CAS116-1.jpg");
    rooms_CAS[3] = &cas116;
    //CAS201
    strcpy(roomnum, "201");
    Room cas201(roomnum,cas,"https://www.bu.edu/classrooms/files/2017/07/CAS201-%E2%80%94-Picture-Front2.jpg");
    rooms_CAS[4] = &cas201;
    //CAS204
    strcpy(roomnum, "204");
    Room cas204a(roomnum,'a',cas,"https://www.bu.edu/classrooms/files/2013/08/CAS204A-Front-636x424.jpg");
    rooms_CAS[5] = &cas204a;
    Room cas204b(roomnum,'b',cas, "https://www.bu.edu/classrooms/files/2013/08/CAS204B-Front-636x424.jpg");
    rooms_CAS[6] = &cas204b;
    //CAS208
    strcpy(roomnum, "208");
    Room cas208(roomnum,cas,"https://www.bu.edu/classrooms/files/2015/03/CAS208-Front001.jpg");
    rooms_CAS[7] = &cas208;
    //CAS211
    strcpy(roomnum, "211");
    Room cas211(roomnum,cas,"https://www.bu.edu/classrooms/files/2013/08/CAS211-Front.jpg");
    rooms_CAS[8] = &cas211;
    //CAS212
    strcpy(roomnum, "212");
    Room cas212(roomnum,cas,"https://www.bu.edu/classrooms/files/2015/09/CAS212-1.jpg");
    rooms_CAS[9] = &cas212;
    //CAS213
    strcpy(roomnum, "213");
    Room cas213(roomnum,cas,"https://www.bu.edu/classrooms/files/2017/08/CAS213-%E2%80%94-Picture-Back1.jpg");
    rooms_CAS[10] = &cas213;
    //CAS214
    strcpy(roomnum, "214");
    Room cas214(roomnum,cas,"https://www.bu.edu/classrooms/files/2015/09/CAS214-1.jpg");
    rooms_CAS[11] = &cas214;
    //CAS216
    strcpy(roomnum, "216");
    Room cas216(roomnum,cas,"https://www.bu.edu/classrooms/files/2017/08/CAS216-%E2%80%94-Picture-Back1.jpg");
    rooms_CAS[12] = &cas216;
    //CAS218
    strcpy(roomnum, "218");
    Room cas218(roomnum,cas,"https://www.bu.edu/classrooms/files/2015/03/CAS218-Front001.jpg");
    rooms_CAS[13] = &cas218;
    //CAS220
    strcpy(roomnum, "220");
    Room cas220(roomnum,cas,"https://www.bu.edu/classrooms/files/2013/08/CAS220-Front-636x424.jpg");
    rooms_CAS[14] = &cas220;
    //CAS221
    strcpy(roomnum, "221");
    Room cas221(roomnum,cas,"https://www.bu.edu/classrooms/files/2015/09/CAS221-1.jpg");
    rooms_CAS[15] = &cas221;
    //CAS222
    strcpy(roomnum, "222");
    Room cas222(roomnum,cas,"https://www.bu.edu/classrooms/files/2013/08/CAS222-Front-636x423.jpg");
    rooms_CAS[16] = &cas222;
    //CAS223
    strcpy(roomnum, "223");
    Room cas223(roomnum,cas,"https://www.bu.edu/classrooms/files/2017/08/CAS223-%E2%80%94-Picture-Front1.jpg");
    rooms_CAS[17] = &cas223;
    //CAS224
    strcpy(roomnum, "224");
    Room cas224(roomnum,cas,"https://www.bu.edu/classrooms/files/2013/08/CAS224-Front.jpg");
    rooms_CAS[18] = &cas224;
    //CAS203
    strcpy(roomnum, "203");
    Room cas203(roomnum,cas,"https://www.bu.edu/classrooms/files/2017/07/CAS203-%E2%80%94-Picture-Front2.jpg");
    rooms_CAS[19] = &cas203;

    int t = 0;
    do{
        int random_index = rand() % 20;
        string link = rooms_CAS[random_index]->picture_link;
        const char *openlink = link.c_str();
        ShellExecute(0, 0, openlink/*rooms_CAS[random_index]->picture_link*/, 0, 0 , SW_SHOW );
        t++;
        
    }while(t<5);
    
    
    return 0;

}