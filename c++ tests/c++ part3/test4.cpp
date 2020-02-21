#include <iostream>

#include "seat.h"

using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::endl;

void TEST4(){
    ofstream to("../test4myresult.txt");
    GreenRoomSeat grs1(75,90);
    to<<grs1.location()<<endl;
    GreenRoomSeat grs2(58,10);
    to<<grs2.location()<<endl;
    GreenRoomSeat grs3(83,6);
    to<<grs3.location()<<endl;
    GreenRoomSeat grs5(6,20);
    to<<grs5.location()<<endl;
    GreenRoomSeat grs6(52,89);
    to<<grs6.location()<<endl;
    GreenRoomSeat grs7(39,82);
    to<<grs7.location()<<endl;
    GreenRoomSeat grs8(76,11);
    to<<grs8.location()<<endl;
    GreenRoomSeat grs9(35,71);
    to<<grs9.location()<<endl;
    GreenRoomSeat grs10(55,41);
    to<<grs10.location()<<endl;
    GreenRoomSeat grs13(60,54);
    to<<grs13.location()<<endl;
    GreenRoomSeat grs14(36,78);
    to<<grs14.location()<<endl;
    MiddleRegularSeat mrs3('G',21,88,101);
    to<<mrs3.location()<<endl;
    MiddleRegularSeat mrs4('H',33,15,186);
    to<<mrs4.location()<<endl;
    MiddleRegularSeat mrs5('A',95,35,164);
    to<<mrs5.location()<<endl;
    MiddleRegularSeat mrs7('G',70,70,127);
    to<<mrs7.location()<<endl;
    MiddleRegularSeat mrs8('G',88,98,199);
    to<<mrs8.location()<<endl;
    MiddleRegularSeat mrs12('F',43,17,182);
    to<<mrs12.location()<<endl;
    MiddleRegularSeat mrs13('D',47,62,184);
    to<<mrs13.location()<<endl;
    MiddleRegularSeat mrs14('F',51,32,125);
    to<<mrs14.location()<<endl;
    FrontRegularSeat frs2('H',59,7,110);
    to<<frs2.location()<<endl;
    FrontRegularSeat frs4('C',53,87,146);
    to<<frs4.location()<<endl;
    FrontRegularSeat frs7('E',38,58,117);
    to<<frs7.location()<<endl;
    FrontRegularSeat frs8('E',86,52,160);
    to<<frs8.location()<<endl;
    FrontRegularSeat frs9('C',46,93,177);
    to<<frs9.location()<<endl;
    FrontRegularSeat frs10('J',87,46,173);
    to<<frs10.location()<<endl;
    FrontRegularSeat frs12('H',73,36,137);
    to<<frs12.location()<<endl;
    FrontRegularSeat frs13('D',80,74,149);
    to<<frs13.location()<<endl;
    RearRegularSeat rrs1('C',37,48,103);
    to<<rrs1.location()<<endl;
    RearRegularSeat rrs2('F',81,56,190);
    to<<rrs2.location()<<endl;
    RearRegularSeat rrs9('G',74,51,187);
    to<<rrs9.location()<<endl;
    GoldenCircleSeat ccs4(91,3,173);
    to<<ccs4.location()<<endl;
    GoldenCircleSeat ccs5(49,27,108);
    to<<ccs5.location()<<endl;
    GoldenCircleSeat ccs7(66,67,132);
    to<<ccs7.location()<<endl;
    GoldenCircleSeat ccs8(22,81,191);
    to<<ccs8.location()<<endl;
    GoldenCircleSeat ccs11(48,47,140);
    to<<ccs11.location()<<endl;
    GoldenCircleSeat ccs12(57,86,106);
    to<<ccs12.location()<<endl;
    GoldenCircleSeat ccs14(64,83,183);
    to<<ccs14.location()<<endl;
    DisablePodiumSeat cds4(16,5);
    to<<cds4.location()<<endl;
    DisablePodiumSeat cds7(41,37);
    to<<cds7.location()<<endl;
    DisablePodiumSeat cds9(54,91);
    to<<cds9.location()<<endl;
    DisablePodiumSeat cds11(72,84);
    to<<cds11.location()<<endl;
    DisablePodiumSeat cds12(45,8);
    to<<cds12.location()<<endl;
    DisablePodiumSeat cds14(5,85);
    to<<cds14.location()<<endl;
    DisablePodiumSeat dps1(501,856,150);
    to<<dps1.location()<<endl;
    DisablePodiumSeat dps2(499,42,112);
    to<<dps2.location()<<endl;
    DisablePodiumSeat dps3(809,128,121);
    to<<dps3.location()<<endl;
    DisablePodiumSeat dps4(1000,4,144);
    to<<dps4.location()<<endl;
    DisablePodiumSeat dps5(23,949,125);
    to<<dps5.location()<<endl;
    DisablePodiumSeat dps6(624,374,144);
    to<<dps6.location()<<endl;
    DisablePodiumSeat dps7(429,212,187);
    to<<dps7.location()<<endl;
    DisablePodiumSeat dps8(559,702,195);
    to<<dps8.location()<<endl;
    DisablePodiumSeat dps9(596,341,112);
    to<<dps9.location()<<endl;
    DisablePodiumSeat dps12(613,600,167);
    to<<dps12.location()<<endl;
    DisablePodiumSeat dps14(285,104,164);
    to<<dps14.location()<<endl;
    to<<dps14.location()<<endl;
    const int len=8;
    Seat* seats[len] = {new GreenRoomSeat(3,80),
                        new FrontRegularSeat('Z',5,8,50),
                        new MiddleRegularSeat('J',25,5,100),
                        new RearRegularSeat('O',7,44,90),
                        new GoldenCircleSeat(2,130,220),
                        new DisablePodiumSeat(1,5,1000),
                        new FrontRegularSeat('L',22,3,12),
                        new DisablePodiumSeat(1,1,100)};

    for (int i=0; i<len; ++i)
    {
        to << seats[i]->location() << endl;
        try
        {
            to << seats[i]->price() << endl;
        }
        catch (exception& e)
        {
            to << e.what() << endl;
        }
    }

    for (Seat** p=seats; p<seats+len; ++p) delete *p;
}