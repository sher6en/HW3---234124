#include <iostream>

#include "seat.h"

using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::endl;

void TEST3(){
    ofstream to("../test3myresult.txt");
    GreenRoomSeat grs1(42,61);
    to<<grs1.location()<<endl;
    GreenRoomSeat grs2(89,26);
    to<<grs2.location()<<endl;
    GreenRoomSeat grs3(56,57);
    to<<grs3.location()<<endl;
    GreenRoomSeat grs4(20,81);
    to<<grs4.location()<<endl;
    GreenRoomSeat grs5(97,36);
    to<<grs5.location()<<endl;
    GreenRoomSeat grs6(5,10);
    to<<grs6.location()<<endl;
    GreenRoomSeat grs7(76,78);
    to<<grs7.location()<<endl;
    GreenRoomSeat grs9(69,19);
    to<<grs9.location()<<endl;
    GreenRoomSeat grs10(13,42);
    to<<grs10.location()<<endl;
    GreenRoomSeat grs11(24,54);
    to<<grs11.location()<<endl;
    GreenRoomSeat grs13(51,55);
    to<<grs13.location()<<endl;
    GreenRoomSeat grs14(3,7);
    to<<grs14.location()<<endl;
    MiddleRegularSeat mrs1('B',26,71,189);
    to<<mrs1.location()<<endl;
    MiddleRegularSeat mrs3('D',78,44,108);
    to<<mrs3.location()<<endl;
    MiddleRegularSeat mrs4('A',18,24,145);
    to<<mrs4.location()<<endl;
    MiddleRegularSeat mrs5('C',79,72,190);
    to<<mrs5.location()<<endl;
    MiddleRegularSeat mrs6('I',50,5,112);
    to<<mrs6.location()<<endl;
    MiddleRegularSeat mrs7('J',32,73,156);
    to<<mrs7.location()<<endl;
    MiddleRegularSeat mrs8('H',34,12,161);
    to<<mrs8.location()<<endl;
    MiddleRegularSeat mrs9('C',81,37,148);
    to<<mrs9.location()<<endl;
    MiddleRegularSeat mrs10('G',37,74,172);
    to<<mrs10.location()<<endl;
    MiddleRegularSeat mrs11('J',55,9,137);
    to<<mrs11.location()<<endl;
    FrontRegularSeat frs2('J',9,83,189);
    to<<frs2.location()<<endl;
    FrontRegularSeat frs3('B',52,68,117);
    to<<frs3.location()<<endl;
    FrontRegularSeat frs5('J',7,76,164);
    to<<frs5.location()<<endl;
    FrontRegularSeat frs9('H',83,40,144);
    to<<frs9.location()<<endl;
    FrontRegularSeat frs12('G',25,67,187);
    to<<frs12.location()<<endl;
    RearRegularSeat rrs1('J',14,35,124);
    to<<rrs1.location()<<endl;
    RearRegularSeat rrs4('D',70,58,189);
    to<<rrs4.location()<<endl;
    RearRegularSeat rrs7('A',11,33,200);
    to<<rrs7.location()<<endl;
    RearRegularSeat rrs8('H',88,1,198);
    to<<rrs8.location()<<endl;
    RearRegularSeat rrs10('I',22,38,183);
    to<<rrs10.location()<<endl;
    RearRegularSeat rrs11('D',8,85,142);
    to<<rrs11.location()<<endl;
    GoldenCircleSeat ccs2(36,20,139);
    to<<ccs2.location()<<endl;
    GoldenCircleSeat ccs4(17,84,194);
    to<<ccs4.location()<<endl;
    GoldenCircleSeat ccs5(61,27,189);
    to<<ccs5.location()<<endl;
    GoldenCircleSeat ccs9(94,21,101);
    to<<ccs9.location()<<endl;
    GoldenCircleSeat ccs10(74,46,131);
    to<<ccs10.location()<<endl;
    GoldenCircleSeat ccs13(91,98,162);
    to<<ccs13.location()<<endl;
    GoldenCircleSeat ccs14(67,49,175);
    to<<ccs14.location()<<endl;
    DisablePodiumSeat cds1(100,48);
    to<<cds1.location()<<endl;
    DisablePodiumSeat cds2(64,91);
    to<<cds2.location()<<endl;
    DisablePodiumSeat cds10(62,59);
    to<<cds10.location()<<endl;
    DisablePodiumSeat cds12(65,95);
    to<<cds12.location()<<endl;
    DisablePodiumSeat dps1(974,481,195);
    to<<dps1.location()<<endl;
    DisablePodiumSeat dps2(540,416,169);
    to<<dps2.location()<<endl;
    DisablePodiumSeat dps3(463,383,104);
    to<<dps3.location()<<endl;
    DisablePodiumSeat dps4(306,892,150);
    to<<dps4.location()<<endl;
    DisablePodiumSeat dps5(939,783,160);
    to<<dps5.location()<<endl;
    DisablePodiumSeat dps6(626,288,102);
    to<<dps6.location()<<endl;
    DisablePodiumSeat dps7(483,467,128);
    to<<dps7.location()<<endl;
    DisablePodiumSeat dps8(291,793,191);
    to<<dps8.location()<<endl;
    DisablePodiumSeat dps10(161,405,165);
    to<<dps10.location()<<endl;
    DisablePodiumSeat dps13(998,219,128);
    to<<dps13.location()<<endl;
    DisablePodiumSeat dps14(738,570,200);
    to<<dps14.location()<<endl;
    const int len=6;
    Seat* seats[len] = {new GreenRoomSeat(30,80),
                        new FrontRegularSeat('Z',50,8,50),
                        new MiddleRegularSeat('D',225,5,10),
                        new RearRegularSeat('G',70,44,9),
                        new GoldenCircleSeat(20,190,20),
                        new DisablePodiumSeat(1,5,1000)};

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