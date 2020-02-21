#include <iostream>

#include "seat.h"

using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::endl;

void TEST7(){
    ofstream to("../test7myresult.txt");
    GreenRoomSeat grs1(15,79);
    to<<grs1.location()<<endl;
    GreenRoomSeat grs2(48,37);
    to<<grs2.location()<<endl;
    GreenRoomSeat grs3(20,54);
    to<<grs3.location()<<endl;
    GreenRoomSeat grs4(58,68);
    to<<grs4.location()<<endl;
    GreenRoomSeat grs5(85,1);
    to<<grs5.location()<<endl;
    GreenRoomSeat grs6(49,70);
    to<<grs6.location()<<endl;
    GreenRoomSeat grs7(67,82);
    to<<grs7.location()<<endl;
    GreenRoomSeat grs8(38,5);
    to<<grs8.location()<<endl;
    GreenRoomSeat grs9(76,73);
    to<<grs9.location()<<endl;
    GreenRoomSeat grs10(19,57);
    to<<grs10.location()<<endl;
    GreenRoomSeat grs11(56,48);
    to<<grs11.location()<<endl;
    GreenRoomSeat grs14(90,24);
    to<<grs14.location()<<endl;
    MiddleRegularSeat mrs1('I',65,15,179);
    to<<mrs1.location()<<endl;
    MiddleRegularSeat mrs2('G',17,8,180);
    to<<mrs2.location()<<endl;
    MiddleRegularSeat mrs6('B',57,4,151);
    to<<mrs6.location()<<endl;
    MiddleRegularSeat mrs9('H',93,6,126);
    to<<mrs9.location()<<endl;
    MiddleRegularSeat mrs10('J',13,26,177);
    to<<mrs10.location()<<endl;
    MiddleRegularSeat mrs11('D',79,36,146);
    to<<mrs11.location()<<endl;
    MiddleRegularSeat mrs12('A',30,21,194);
    to<<mrs12.location()<<endl;
    MiddleRegularSeat mrs13('G',60,92,197);
    to<<mrs13.location()<<endl;
    MiddleRegularSeat mrs14('J',26,56,117);
    to<<mrs14.location()<<endl;
    FrontRegularSeat frs1('B',16,99,162);
    to<<frs1.location()<<endl;
    FrontRegularSeat frs2('F',42,23,178);
    to<<frs2.location()<<endl;
    FrontRegularSeat frs4('A',11,91,133);
    to<<frs4.location()<<endl;
    FrontRegularSeat frs6('J',6,19,187);
    to<<frs6.location()<<endl;
    FrontRegularSeat frs8('F',52,85,148);
    to<<frs8.location()<<endl;
    FrontRegularSeat frs9('E',33,42,170);
    to<<frs9.location()<<endl;
    FrontRegularSeat frs10('A',22,65,118);
    to<<frs10.location()<<endl;
    FrontRegularSeat frs13('C',40,81,129);
    to<<frs13.location()<<endl;
    FrontRegularSeat frs14('A',63,31,134);
    to<<frs14.location()<<endl;
    RearRegularSeat rrs1('G',82,71,106);
    to<<rrs1.location()<<endl;
    RearRegularSeat rrs5('A',81,7,115);
    to<<rrs5.location()<<endl;
    RearRegularSeat rrs6('H',99,2,122);
    to<<rrs6.location()<<endl;
    RearRegularSeat rrs9('I',10,83,101);
    to<<rrs9.location()<<endl;
    RearRegularSeat rrs10('J',64,44,101);
    to<<rrs10.location()<<endl;
    RearRegularSeat rrs11('H',50,96,109);
    to<<rrs11.location()<<endl;
    RearRegularSeat rrs13('J',35,100,107);
    to<<rrs13.location()<<endl;
    GoldenCircleSeat ccs2(8,51,177);
    to<<ccs2.location()<<endl;
    GoldenCircleSeat ccs4(14,95,109);
    to<<ccs4.location()<<endl;
    GoldenCircleSeat ccs6(78,94,112);
    to<<ccs6.location()<<endl;
    GoldenCircleSeat ccs7(7,45,159);
    to<<ccs7.location()<<endl;
    GoldenCircleSeat ccs8(21,53,174);
    to<<ccs8.location()<<endl;
    GoldenCircleSeat ccs12(39,52,105);
    to<<ccs12.location()<<endl;
    DisablePodiumSeat cds13(9,11);
    to<<cds13.location()<<endl;
    DisablePodiumSeat dps1(573,900,124);
    to<<dps1.location()<<endl;
    DisablePodiumSeat dps2(96,185,146);
    to<<dps2.location()<<endl;
    DisablePodiumSeat dps3(373,782,103);
    to<<dps3.location()<<endl;
    DisablePodiumSeat dps4(324,144,196);
    to<<dps4.location()<<endl;
    DisablePodiumSeat dps6(933,205,177);
    to<<dps6.location()<<endl;
    DisablePodiumSeat dps7(227,645,166);
    to<<dps7.location()<<endl;
    DisablePodiumSeat dps8(261,490,134);
    to<<dps8.location()<<endl;
    DisablePodiumSeat dps9(100,713,151);
    to<<dps9.location()<<endl;
    DisablePodiumSeat dps10(817,539,184);
    to<<dps10.location()<<endl;
    DisablePodiumSeat dps11(944,810,163);
    to<<dps11.location()<<endl;
    DisablePodiumSeat dps13(469,988,116);
    to<<dps13.location()<<endl;
    DisablePodiumSeat dps14(152,32,137);
    to<<dps14.location()<<endl;
    const int len=8;
    Seat* seats[len] ;
    seats[0]=&dps1;
    seats[1]=&grs1;
    seats[2]=&mrs1;
    seats[3]=&ccs4;
    seats[4]=&frs6;
    seats[5]=&grs5;
    seats[6]=&cds13;
    seats[7]=&dps8;

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

}

