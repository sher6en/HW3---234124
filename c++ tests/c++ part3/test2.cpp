#include <iostream>

#include "seat.h"

using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::endl;

void TEST2(){
    ofstream to("../test2myresult.txt");
    GreenRoomSeat grs1(33,54);
    to<<grs1.location()<<endl;
    GreenRoomSeat grs2(99,37);
    to<<grs2.location()<<endl;
    GreenRoomSeat grs3(85,88);
    to<<grs3.location()<<endl;
    GreenRoomSeat grs4(17,83);
    to<<grs4.location()<<endl;
    GreenRoomSeat grs5(26,89);
    to<<grs5.location()<<endl;
    GreenRoomSeat grs6(89,40);
    to<<grs6.location()<<endl;
    GreenRoomSeat grs7(98,62);
    to<<grs7.location()<<endl;
    GreenRoomSeat grs9(59,68);
    to<<grs9.location()<<endl;
    GreenRoomSeat grs10(81,18);
    to<<grs10.location()<<endl;
    GreenRoomSeat grs11(48,27);
    to<<grs11.location()<<endl;
    GreenRoomSeat grs12(55,73);
    to<<grs12.location()<<endl;
    GreenRoomSeat grs13(42,98);
    to<<grs13.location()<<endl;
    GreenRoomSeat grs14(95,32);
    to<<grs14.location()<<endl;
    MiddleRegularSeat mrs1('F',45,64,150);
    to<<mrs1.location()<<endl;
    MiddleRegularSeat mrs2('G',9,3,191);
    to<<mrs2.location()<<endl;
    MiddleRegularSeat mrs3('F',27,85,187);
    to<<mrs3.location()<<endl;
    MiddleRegularSeat mrs4('G',22,21,146);
    to<<mrs4.location()<<endl;
    MiddleRegularSeat mrs5('E',8,67,200);
    to<<mrs5.location()<<endl;
    MiddleRegularSeat mrs7('D',23,61,159);
    to<<mrs7.location()<<endl;
    MiddleRegularSeat mrs8('E',41,86,129);
    to<<mrs8.location()<<endl;
    MiddleRegularSeat mrs10('A',10,44,121);
    to<<mrs10.location()<<endl;
    MiddleRegularSeat mrs11('B',66,14,179);
    to<<mrs11.location()<<endl;
    MiddleRegularSeat mrs12('B',37,47,174);
    to<<mrs12.location()<<endl;
    MiddleRegularSeat mrs14('J',34,4,179);
    to<<mrs14.location()<<endl;
    FrontRegularSeat frs2('B',92,13,113);
    to<<frs2.location()<<endl;
    FrontRegularSeat frs3('I',36,25,115);
    to<<frs3.location()<<endl;
    FrontRegularSeat frs5('A',64,46,108);
    to<<frs5.location()<<endl;
    FrontRegularSeat frs8('A',1,11,156);
    to<<frs8.location()<<endl;
    FrontRegularSeat frs10('B',87,79,196);
    to<<frs10.location()<<endl;
    FrontRegularSeat frs11('C',3,63,173);
    to<<frs11.location()<<endl;
    FrontRegularSeat frs13('E',49,90,137);
    to<<frs13.location()<<endl;
    RearRegularSeat rrs1('G',57,57,191);
    to<<rrs1.location()<<endl;
    RearRegularSeat rrs7('H',15,12,144);
    to<<rrs7.location()<<endl;
    RearRegularSeat rrs8('C',51,33,129);
    to<<rrs8.location()<<endl;
    RearRegularSeat rrs9('I',74,39,125);
    to<<rrs9.location()<<endl;
    RearRegularSeat rrs10('F',78,71,131);
    to<<rrs10.location()<<endl;
    RearRegularSeat rrs11('J',70,22,167);
    to<<rrs11.location()<<endl;
    RearRegularSeat rrs13('A',43,52,131);
    to<<rrs13.location()<<endl;
    GoldenCircleSeat ccs1(44,35,169);
    to<<ccs1.location()<<endl;
    GoldenCircleSeat ccs9(62,29,149);
    to<<ccs9.location()<<endl;
    GoldenCircleSeat ccs10(31,48,118);
    to<<ccs10.location()<<endl;
    DisablePodiumSeat cds4(18,42);
    to<<cds4.location()<<endl;
    DisablePodiumSeat cds6(32,97);
    to<<cds6.location()<<endl;
    DisablePodiumSeat cds7(76,72);
    to<<cds7.location()<<endl;
    DisablePodiumSeat cds8(56,6);
    to<<cds8.location()<<endl;
    DisablePodiumSeat cds9(35,43);
    to<<cds9.location()<<endl;
    DisablePodiumSeat cds13(77,55);
    to<<cds13.location()<<endl;
    DisablePodiumSeat dps1(80,389,200);
    to<<dps1.location()<<endl;
    DisablePodiumSeat dps2(822,965,185);
    to<<dps2.location()<<endl;
    DisablePodiumSeat dps3(605,209,141);
    to<<dps3.location()<<endl;
    DisablePodiumSeat dps4(554,400,144);
    to<<dps4.location()<<endl;
    DisablePodiumSeat dps5(226,147,168);
    to<<dps5.location()<<endl;
    DisablePodiumSeat dps6(101,955,169);
    to<<dps6.location()<<endl;
    DisablePodiumSeat dps7(584,579,194);
    to<<dps7.location()<<endl;
    DisablePodiumSeat dps8(359,203,151);
    to<<dps8.location()<<endl;
    DisablePodiumSeat dps9(53,572,190);
    to<<dps9.location()<<endl;
    DisablePodiumSeat dps10(966,808,154);
    to<<dps10.location()<<endl;
    DisablePodiumSeat dps11(244,678,173);
    to<<dps11.location()<<endl;
    DisablePodiumSeat dps14(228,289,145);
    to<<dps14.location()<<endl;
    const int len=12;
    Seat* seats[len] = {new GreenRoomSeat(3,2), new FrontRegularSeat('A',5,2,
                        150), new MiddleRegularSeat('H',25,35,120),
                        new RearRegularSeat('E',70,90,90), new
                        GoldenCircleSeat(2,197,200),
                        new DisablePodiumSeat(1,5),new GreenRoomSeat(2,8),
                        new FrontRegularSeat('A',5,2,150), new
                        MiddleRegularSeat('K',25,353,120),
                        new RearRegularSeat('E',70,49,90), new
                        GoldenCircleSeat(2,190,200),
                        new DisablePodiumSeat(1,5,100)};

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