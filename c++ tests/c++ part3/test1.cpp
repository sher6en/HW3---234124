#include <iostream>

#include "seat.h"

using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::endl;

void TEST1(){
    ofstream to("../test1myresult.txt");
    GreenRoomSeat grs1(20,50);
    to<<grs1.location()<<endl;
    GreenRoomSeat grs2(93,33);
    to<<grs2.location()<<endl;
    GreenRoomSeat grs3(42,69);
    to<<grs3.location()<<endl;
    GreenRoomSeat grs4(63,32);
    to<<grs4.location()<<endl;
    GreenRoomSeat grs5(53,81);
    to<<grs5.location()<<endl;
    GreenRoomSeat grs6(67,91);
    to<<grs6.location()<<endl;
    GreenRoomSeat grs7(80,41);
    to<<grs7.location()<<endl;
    GreenRoomSeat grs8(75,84);
    to<<grs8.location()<<endl;
    GreenRoomSeat grs10(24,48);
    to<<grs10.location()<<endl;
    GreenRoomSeat grs11(46,30);
    to<<grs11.location()<<endl;
    GreenRoomSeat grs12(48,14);
    to<<grs12.location()<<endl;
    GreenRoomSeat grs13(38,54);
    to<<grs13.location()<<endl;
    MiddleRegularSeat mrs1('J',87,67,189);
    to<<mrs1.location()<<endl;
    MiddleRegularSeat mrs2('B',43,53,192);
    to<<mrs2.location()<<endl;
    MiddleRegularSeat mrs4('A',16,82,153);
    to<<mrs4.location()<<endl;
    MiddleRegularSeat mrs5('G',92,61,179);
    to<<mrs5.location()<<endl;
    MiddleRegularSeat mrs6('E',10,42,154);
    to<<mrs6.location()<<endl;
    MiddleRegularSeat mrs8('F',86,55,154);
    to<<mrs8.location()<<endl;
    MiddleRegularSeat mrs9('B',70,99,140);
    to<<mrs9.location()<<endl;
    MiddleRegularSeat mrs10('E',11,18,126);
    to<<mrs10.location()<<endl;
    MiddleRegularSeat mrs12('F',34,47,146);
    to<<mrs12.location()<<endl;
    MiddleRegularSeat mrs13('G',5,86,114);
    to<<mrs13.location()<<endl;
    MiddleRegularSeat mrs14('E',91,92,104);
    to<<mrs14.location()<<endl;
    FrontRegularSeat frs2('D',1,76,195);
    to<<frs2.location()<<endl;
    FrontRegularSeat frs3('E',26,22,111);
    to<<frs3.location()<<endl;
    FrontRegularSeat frs5('H',61,88,168);
    to<<frs5.location()<<endl;
    FrontRegularSeat frs6('J',83,44,147);
    to<<frs6.location()<<endl;
    FrontRegularSeat frs7('J',14,65,123);
    to<<frs7.location()<<endl;
    FrontRegularSeat frs10('I',62,66,140);
    to<<frs10.location()<<endl;
    FrontRegularSeat frs11('G',27,9,115);
    to<<frs11.location()<<endl;
    FrontRegularSeat frs13('B',89,85,120);
    to<<frs13.location()<<endl;
    FrontRegularSeat frs14('B',13,7,144);
    to<<frs14.location()<<endl;
    RearRegularSeat rrs2('J',33,28,163);
    to<<rrs2.location()<<endl;
    RearRegularSeat rrs4('G',22,80,159);
    to<<rrs4.location()<<endl;
    RearRegularSeat rrs5('I',64,43,102);
    to<<rrs5.location()<<endl;
    RearRegularSeat rrs6('E',58,25,138);
    to<<rrs6.location()<<endl;
    RearRegularSeat rrs8('E',54,15,170);
    to<<rrs8.location()<<endl;
    RearRegularSeat rrs9('H',60,23,128);
    to<<rrs9.location()<<endl;
    RearRegularSeat rrs11('D',74,35,118);
    to<<rrs11.location()<<endl;
    RearRegularSeat rrs14('C',18,3,121);
    to<<rrs14.location()<<endl;
    GoldenCircleSeat ccs3(44,4,105);
    to<<ccs3.location()<<endl;
    GoldenCircleSeat ccs4(77,68,168);
    to<<ccs4.location()<<endl;
    GoldenCircleSeat ccs7(6,70,195);
    to<<ccs7.location()<<endl;
    GoldenCircleSeat ccs8(36,6,123);
    to<<ccs8.location()<<endl;
    GoldenCircleSeat ccs13(29,21,139);
    to<<ccs13.location()<<endl;
    DisablePodiumSeat cds1(40,73);
    to<<cds1.location()<<endl;
    DisablePodiumSeat cds5(81,60);
    to<<cds5.location()<<endl;
    DisablePodiumSeat cds9(79,29);
    to<<cds9.location()<<endl;
    DisablePodiumSeat cds11(47,93);
    to<<cds11.location()<<endl;
    DisablePodiumSeat cds13(19,24);
    to<<cds13.location()<<endl;
    DisablePodiumSeat dps1(712,373,163);
    to<<dps1.location()<<endl;
    DisablePodiumSeat dps2(841,847,164);
    to<<dps2.location()<<endl;
    DisablePodiumSeat dps3(133,689,122);
    to<<dps3.location()<<endl;
    DisablePodiumSeat dps4(230,471,137);
    to<<dps4.location()<<endl;
    DisablePodiumSeat dps6(149,145,172);
    to<<dps6.location()<<endl;
    DisablePodiumSeat dps7(662,972,128);
    to<<dps7.location()<<endl;
    DisablePodiumSeat dps8(454,458,146);
    to<<dps8.location()<<endl;
    DisablePodiumSeat dps10(340,885,183);
    to<<dps10.location()<<endl;
    DisablePodiumSeat dps11(741,558,193);
    to<<dps11.location()<<endl;
    DisablePodiumSeat dps12(391,898,115);
    to<<dps12.location()<<endl;
    DisablePodiumSeat dps13(879,58,117);
    to<<dps13.location()<<endl;
    DisablePodiumSeat dps14(217,146,169);
    to<<dps14.location()<<endl;
    const int len=6;
    Seat* seats[len] = {new GreenRoomSeat(3,8), new FrontRegularSeat('A',5,8,150), new MiddleRegularSeat('B',25,35,120),
                        new RearRegularSeat('E',70,4,90), new GoldenCircleSeat(2,19,200),
                        new DisablePodiumSeat(1,5)};

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