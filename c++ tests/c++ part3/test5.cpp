#include <iostream>

#include "seat.h"

using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::endl;

void TEST5(){
    ofstream to("../test5myresult.txt");
    GreenRoomSeat grs1(32,64);
    to<<grs1.location()<<endl;
    GreenRoomSeat grs2(63,39);
    to<<grs2.location()<<endl;
    GreenRoomSeat grs3(94,67);
    to<<grs3.location()<<endl;
    GreenRoomSeat grs4(2,91);
    to<<grs4.location()<<endl;
    GreenRoomSeat grs5(8,71);
    to<<grs5.location()<<endl;
    GreenRoomSeat grs6(55,55);
    to<<grs6.location()<<endl;
    GreenRoomSeat grs7(54,68);
    to<<grs7.location()<<endl;
    GreenRoomSeat grs9(42,9);
    to<<grs9.location()<<endl;
    GreenRoomSeat grs10(41,27);
    to<<grs10.location()<<endl;
    GreenRoomSeat grs11(61,70);
    to<<grs11.location()<<endl;
    GreenRoomSeat grs12(44,20);
    to<<grs12.location()<<endl;
    GreenRoomSeat grs13(39,15);
    to<<grs13.location()<<endl;
    MiddleRegularSeat mrs1('H',74,13,125);
    to<<mrs1.location()<<endl;
    MiddleRegularSeat mrs2('H',64,62,127);
    to<<mrs2.location()<<endl;
    MiddleRegularSeat mrs3('D',68,26,180);
    to<<mrs3.location()<<endl;
    MiddleRegularSeat mrs5('A',22,11,142);
    to<<mrs5.location()<<endl;
    MiddleRegularSeat mrs7('B',78,59,130);
    to<<mrs7.location()<<endl;
    MiddleRegularSeat mrs10('C',40,47,103);
    to<<mrs10.location()<<endl;
    MiddleRegularSeat mrs11('E',33,89,141);
    to<<mrs11.location()<<endl;
    MiddleRegularSeat mrs14('F',15,3,188);
    to<<mrs14.location()<<endl;
    FrontRegularSeat frs2('D',89,49,105);
    to<<frs2.location()<<endl;
    FrontRegularSeat frs3('D',72,69,168);
    to<<frs3.location()<<endl;
    FrontRegularSeat frs4('I',31,48,111);
    to<<frs4.location()<<endl;
    FrontRegularSeat frs7('F',24,19,159);
    to<<frs7.location()<<endl;
    FrontRegularSeat frs8('G',43,36,131);
    to<<frs8.location()<<endl;
    FrontRegularSeat frs10('E',96,99,129);
    to<<frs10.location()<<endl;
    FrontRegularSeat frs12('C',13,30,189);
    to<<frs12.location()<<endl;
    FrontRegularSeat frs14('H',23,40,162);
    to<<frs14.location()<<endl;
    RearRegularSeat rrs1('B',28,51,158);
    to<<rrs1.location()<<endl;
    RearRegularSeat rrs3('D',27,8,132);
    to<<rrs3.location()<<endl;
    RearRegularSeat rrs4('F',19,80,153);
    to<<rrs4.location()<<endl;
    RearRegularSeat rrs7('H',3,50,107);
    to<<rrs7.location()<<endl;
    RearRegularSeat rrs10('H',57,33,141);
    to<<rrs10.location()<<endl;
    RearRegularSeat rrs11('G',73,87,154);
    to<<rrs11.location()<<endl;
    RearRegularSeat rrs14('C',52,45,110);
    to<<rrs14.location()<<endl;
    GoldenCircleSeat ccs1(100,84,155);
    to<<ccs1.location()<<endl;
    GoldenCircleSeat ccs4(88,97,167);
    to<<ccs4.location()<<endl;
    GoldenCircleSeat ccs10(80,38,175);
    to<<ccs10.location()<<endl;
    GoldenCircleSeat ccs11(95,53,107);
    to<<ccs11.location()<<endl;
    GoldenCircleSeat ccs12(85,100,112);
    to<<ccs12.location()<<endl;
    GoldenCircleSeat ccs13(51,81,163);
    to<<ccs13.location()<<endl;
    GoldenCircleSeat ccs14(14,76,163);
    to<<ccs14.location()<<endl;
    DisablePodiumSeat cds2(97,54);
    to<<cds2.location()<<endl;
    DisablePodiumSeat cds3(56,94);
    to<<cds3.location()<<endl;
    DisablePodiumSeat cds6(21,4);
    to<<cds6.location()<<endl;
    DisablePodiumSeat cds7(17,61);
    to<<cds7.location()<<endl;
    DisablePodiumSeat dps1(133,333,134);
    to<<dps1.location()<<endl;
    DisablePodiumSeat dps2(126,239,106);
    to<<dps2.location()<<endl;
    DisablePodiumSeat dps3(931,639,199);
    to<<dps3.location()<<endl;
    DisablePodiumSeat dps4(513,500,195);
    to<<dps4.location()<<endl;
    DisablePodiumSeat dps5(203,171,186);
    to<<dps5.location()<<endl;
    DisablePodiumSeat dps6(995,705,189);
    to<<dps6.location()<<endl;
    DisablePodiumSeat dps8(399,581,164);
    to<<dps8.location()<<endl;
    DisablePodiumSeat dps9(386,635,182);
    to<<dps9.location()<<endl;
    DisablePodiumSeat dps11(454,21,108);
    to<<dps11.location()<<endl;
    DisablePodiumSeat dps12(819,109,138);
    to<<dps12.location()<<endl;
    DisablePodiumSeat dps13(851,663,178);
    to<<dps13.location()<<endl;
    DisablePodiumSeat dps14(739,585,188);
    to<<dps14.location()<<endl;
    const int len=8;
    Seat* seats[len] = {new GreenRoomSeat(2,80),
                        new GreenRoomSeat(3,80),
                        new GreenRoomSeat(4,80),new GreenRoomSeat(5,80),new
                        GreenRoomSeat(6,80),new GreenRoomSeat(10,80),new
                        GreenRoomSeat(7,80),new GreenRoomSeat(8,80)};

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