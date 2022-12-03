#include "MakeRooms.h"

void MakeCASRooms(RoomInfo** rooms_CAS)
{
    char cas[] = {'C','A','S'};
    //CAS103
    char roomnum[] = {'1', '0', '3', '\0'};
    rooms_CAS[0] = new RoomInfo(roomnum, cas,"https://www.bu.edu/classrooms/files/2020/08/CASTsai-1.jpg");
    
    //CAS114
    strcpy(roomnum, "114");
    rooms_CAS[1] = new RoomInfo(roomnum ,'a',cas,"https://www.bu.edu/classrooms/files/2017/01/CAS114A-%E2%80%94-Picture-Front2.jpg");
    rooms_CAS[2] = new RoomInfo(roomnum,'b',cas,"https://www.bu.edu/classrooms/files/2015/09/CAS114B-04.jpg");

    //CAS116
    strcpy(roomnum, "216");
    rooms_CAS[3] = new RoomInfo(roomnum,cas,"https://www.bu.edu/classrooms/files/2015/09/CAS116-1.jpg");

    //CAS201
    strcpy(roomnum, "201");
    rooms_CAS[4] = new RoomInfo(roomnum,cas,"https://www.bu.edu/classrooms/files/2017/07/CAS201-%E2%80%94-Picture-Front2.jpg");
    
    //CAS204
    strcpy(roomnum, "204");
    rooms_CAS[5] = new RoomInfo(roomnum,'a',cas,"https://www.bu.edu/classrooms/files/2013/08/CAS204A-Front-636x424.jpg");
    rooms_CAS[6] = new RoomInfo(roomnum,'b',cas, "https://www.bu.edu/classrooms/files/2013/08/CAS204B-Front-636x424.jpg");
    
    //CAS208
    strcpy(roomnum, "208");
    rooms_CAS[7] = new RoomInfo(roomnum,cas,"https://www.bu.edu/classrooms/files/2015/03/CAS208-Front001.jpg");

    //CAS211
    strcpy(roomnum, "211");
    rooms_CAS[8] = new RoomInfo(roomnum,cas,"https://www.bu.edu/classrooms/files/2013/08/CAS211-Front.jpg");
    
    //CAS212
    strcpy(roomnum, "212");
    rooms_CAS[9] = new RoomInfo(roomnum,cas,"https://www.bu.edu/classrooms/files/2015/09/CAS212-1.jpg");

    //CAS213
    strcpy(roomnum, "213");
    rooms_CAS[10] = new RoomInfo(roomnum,cas,"https://www.bu.edu/classrooms/files/2017/08/CAS213-%E2%80%94-Picture-Back1.jpg");
    
    //CAS214
    strcpy(roomnum, "214");
    rooms_CAS[11] = new RoomInfo(roomnum,cas,"https://www.bu.edu/classrooms/files/2015/09/CAS214-1.jpg");
    
    //CAS216
    strcpy(roomnum, "216");
    rooms_CAS[12] = new RoomInfo(roomnum,cas,"https://www.bu.edu/classrooms/files/2017/08/CAS216-%E2%80%94-Picture-Back1.jpg");
    
    //CAS218
    strcpy(roomnum, "218");
    rooms_CAS[13] = new RoomInfo(roomnum,cas,"https://www.bu.edu/classrooms/files/2015/03/CAS218-Front001.jpg");
    
    //CAS220
    strcpy(roomnum, "220");
    rooms_CAS[14] = new RoomInfo(roomnum,cas,"https://www.bu.edu/classrooms/files/2013/08/CAS220-Front-636x424.jpg");
    
    //CAS221
    strcpy(roomnum, "221");
    rooms_CAS[15] = new RoomInfo(roomnum,cas,"https://www.bu.edu/classrooms/files/2015/09/CAS221-1.jpg");
    
    //CAS222
    strcpy(roomnum, "222");
    rooms_CAS[16] = new RoomInfo(roomnum,cas,"https://www.bu.edu/classrooms/files/2013/08/CAS222-Front-636x423.jpg");
    
    //CAS223
    strcpy(roomnum, "223");
    rooms_CAS[17] = new RoomInfo(roomnum,cas,"https://www.bu.edu/classrooms/files/2017/08/CAS223-%E2%80%94-Picture-Front1.jpg");
    
    //CAS224
    strcpy(roomnum, "224");
    rooms_CAS[18] = new RoomInfo(roomnum,cas,"https://www.bu.edu/classrooms/files/2013/08/CAS224-Front.jpg");
    
    //CAS203
    strcpy(roomnum, "203");
    rooms_CAS[19] = new RoomInfo(roomnum,cas,"https://www.bu.edu/classrooms/files/2017/07/CAS203-%E2%80%94-Picture-Front2.jpg");

}