#include <iostream>

#include "seat.h"

using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::endl;

void TEST6(){
    ofstream to("../test6myresult.txt");
    GreenRoomSeat grs1(92,82);
    to<<grs1.location()<<endl;
    GreenRoomSeat grs2(45,79);
    to<<grs2.location()<<endl;
    GreenRoomSeat grs3(88,74);
    to<<grs3.location()<<endl;
    GreenRoomSeat grs4(8,57);
    to<<grs4.location()<<endl;
    GreenRoomSeat grs5(83,77);
    to<<grs5.location()<<endl;
    GreenRoomSeat grs6(87,73);
    to<<grs6.location()<<endl;
    GreenRoomSeat grs8(84,32);
    to<<grs8.location()<<endl;
    GreenRoomSeat grs9(40,44);
    to<<grs9.location()<<endl;
    GreenRoomSeat grs10(98,47);
    to<<grs10.location()<<endl;
    GreenRoomSeat grs11(85,6);
    to<<grs11.location()<<endl;
    GreenRoomSeat grs12(51,13);
    to<<grs12.location()<<endl;
    GreenRoomSeat grs13(25,36);
    to<<grs13.location()<<endl;
    GreenRoomSeat grs14(60,60);
    to<<grs14.location()<<endl;
    MiddleRegularSeat mrs1('B',76,96,142);
    to<<mrs1.location()<<endl;
    MiddleRegularSeat mrs3('F',18,53,152);
    to<<mrs3.location()<<endl;
    MiddleRegularSeat mrs4('F',14,59,182);
    to<<mrs4.location()<<endl;
    MiddleRegularSeat mrs5('D',43,72,194);
    to<<mrs5.location()<<endl;
    MiddleRegularSeat mrs7('A',5,81,164);
    to<<mrs7.location()<<endl;
    MiddleRegularSeat mrs9('J',91,46,199);
    to<<mrs9.location()<<endl;
    MiddleRegularSeat mrs10('D',44,92,112);
    to<<mrs10.location()<<endl;
    MiddleRegularSeat mrs11('J',70,98,196);
    to<<mrs11.location()<<endl;
    MiddleRegularSeat mrs12('J',20,67,118);
    to<<mrs12.location()<<endl;
    MiddleRegularSeat mrs13('D',47,21,145);
    to<<mrs13.location()<<endl;
    MiddleRegularSeat mrs14('D',73,43,134);
    to<<mrs14.location()<<endl;
    FrontRegularSeat frs1('J',38,62,108);
    to<<frs1.location()<<endl;
    FrontRegularSeat frs2('C',49,66,130);
    to<<frs2.location()<<endl;
    FrontRegularSeat frs5('G',29,38,196);
    to<<frs5.location()<<endl;
    FrontRegularSeat frs7('J',62,29,164);
    to<<frs7.location()<<endl;
    FrontRegularSeat frs8('D',50,17,156);
    to<<frs8.location()<<endl;
    FrontRegularSeat frs10('G',4,84,105);
    to<<frs10.location()<<endl;
    FrontRegularSeat frs13('J',55,4,196);
    to<<frs13.location()<<endl;
    RearRegularSeat rrs2('B',59,64,129);
    to<<rrs2.location()<<endl;
    RearRegularSeat rrs3('H',95,12,191);
    to<<rrs3.location()<<endl;
    RearRegularSeat rrs7('D',71,68,127);
    to<<rrs7.location()<<endl;
    RearRegularSeat rrs10('D',57,34,166);
    to<<rrs10.location()<<endl;
    RearRegularSeat rrs12('F',86,49,157);
    to<<rrs12.location()<<endl;
    RearRegularSeat rrs14('I',16,24,181);
    to<<rrs14.location()<<endl;
    GoldenCircleSeat ccs3(27,65,181);
    to<<ccs3.location()<<endl;
    GoldenCircleSeat ccs4(52,50,117);
    to<<ccs4.location()<<endl;
    GoldenCircleSeat ccs7(21,71,147);
    to<<ccs7.location()<<endl;
    DisablePodiumSeat cds2(66,95);
    to<<cds2.location()<<endl;
    DisablePodiumSeat dps1(449,701,198);
    to<<dps1.location()<<endl;
    DisablePodiumSeat dps2(298,873,110);
    to<<dps2.location()<<endl;
    DisablePodiumSeat dps3(383,255,152);
    to<<dps3.location()<<endl;
    DisablePodiumSeat dps4(772,913,199);
    to<<dps4.location()<<endl;
    DisablePodiumSeat dps5(162,817,187);
    to<<dps5.location()<<endl;
    DisablePodiumSeat dps6(434,664,194);
    to<<dps6.location()<<endl;
    DisablePodiumSeat dps7(927,688,156);
    to<<dps7.location()<<endl;
    DisablePodiumSeat dps8(272,875,142);
    to<<dps8.location()<<endl;
    DisablePodiumSeat dps9(989,396,135);
    to<<dps9.location()<<endl;
    DisablePodiumSeat dps10(507,220,104);
    to<<dps10.location()<<endl;
    DisablePodiumSeat dps11(214,384,176);
    to<<dps11.location()<<endl;
    DisablePodiumSeat dps12(897,695,178);
    to<<dps12.location()<<endl;
    DisablePodiumSeat dps13(42,912,128);
    to<<dps13.location()<<endl;
    DisablePodiumSeat dps14(65,39,182);
    to<<dps14.location()<<endl;
    const int len=8;
    Seat* seats[len] ;
    seats[0]=&dps1;
    seats[1]=&grs1;
    seats[2]=&mrs1;
    seats[3]=&ccs4;
    seats[4]=&frs7;
    seats[5]=&grs5;
    seats[6]=&cds2;
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
