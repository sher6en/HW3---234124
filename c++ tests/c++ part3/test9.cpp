#include <iostream>

#include "seat.h"

using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::endl;

void TEST9(){
    ofstream to("../test9myresult.txt");
    GreenRoomSeat grs1(13,19);
    to<<grs1.location()<<endl;
    GreenRoomSeat grs2(34,31);
    to<<grs2.location()<<endl;
    GreenRoomSeat grs3(50,60);
    to<<grs3.location()<<endl;
    GreenRoomSeat grs4(53,5);
    to<<grs4.location()<<endl;
    GreenRoomSeat grs5(4,32);
    to<<grs5.location()<<endl;
    GreenRoomSeat grs6(9,95);
    to<<grs6.location()<<endl;
    GreenRoomSeat grs7(63,67);
    to<<grs7.location()<<endl;
    GreenRoomSeat grs8(83,74);
    to<<grs8.location()<<endl;
    GreenRoomSeat grs10(98,15);
    to<<grs10.location()<<endl;
    GreenRoomSeat grs11(12,97);
    to<<grs11.location()<<endl;
    GreenRoomSeat grs13(62,79);
    to<<grs13.location()<<endl;
    GreenRoomSeat grs14(100,16);
    to<<grs14.location()<<endl;
    MiddleRegularSeat mrs2('B',35,44,161);
    to<<mrs2.location()<<endl;
    MiddleRegularSeat mrs3('F',73,4,172);
    to<<mrs3.location()<<endl;
    MiddleRegularSeat mrs4('J',22,43,136);
    to<<mrs4.location()<<endl;
    MiddleRegularSeat mrs5('A',90,2,155);
    to<<mrs5.location()<<endl;
    MiddleRegularSeat mrs6('D',69,93,150);
    to<<mrs6.location()<<endl;
    MiddleRegularSeat mrs7('J',55,89,168);
    to<<mrs7.location()<<endl;
    MiddleRegularSeat mrs12('E',54,88,168);
    to<<mrs12.location()<<endl;
    MiddleRegularSeat mrs13('B',39,96,174);
    to<<mrs13.location()<<endl;
    MiddleRegularSeat mrs14('E',65,59,142);
    to<<mrs14.location()<<endl;
    FrontRegularSeat frs2('C',24,63,106);
    to<<frs2.location()<<endl;
    FrontRegularSeat frs4('J',45,40,167);
    to<<frs4.location()<<endl;
    FrontRegularSeat frs5('A',95,29,178);
    to<<frs5.location()<<endl;
    FrontRegularSeat frs6('C',1,35,166);
    to<<frs6.location()<<endl;
    FrontRegularSeat frs8('E',57,37,195);
    to<<frs8.location()<<endl;
    FrontRegularSeat frs11('I',5,62,101);
    to<<frs11.location()<<endl;
    FrontRegularSeat frs14('I',85,72,129);
    to<<frs14.location()<<endl;
    RearRegularSeat rrs1('F',93,46,171);
    to<<rrs1.location()<<endl;
    RearRegularSeat rrs4('I',94,22,183);
    to<<rrs4.location()<<endl;
    RearRegularSeat rrs5('J',25,49,133);
    to<<rrs5.location()<<endl;
    RearRegularSeat rrs6('I',41,41,105);
    to<<rrs6.location()<<endl;
    RearRegularSeat rrs9('J',21,28,141);
    to<<rrs9.location()<<endl;
    RearRegularSeat rrs10('J',20,86,124);
    to<<rrs10.location()<<endl;
    RearRegularSeat rrs11('F',17,77,156);
    to<<rrs11.location()<<endl;
    RearRegularSeat rrs12('E',71,83,165);
    to<<rrs12.location()<<endl;
    RearRegularSeat rrs13('E',44,14,179);
    to<<rrs13.location()<<endl;
    GoldenCircleSeat ccs4(37,91,179);
    to<<ccs4.location()<<endl;
    GoldenCircleSeat ccs6(92,99,153);
    to<<ccs6.location()<<endl;
    GoldenCircleSeat ccs7(30,47,182);
    to<<ccs7.location()<<endl;
    GoldenCircleSeat ccs8(43,7,115);
    to<<ccs8.location()<<endl;
    GoldenCircleSeat ccs12(64,38,166);
    to<<ccs12.location()<<endl;
    GoldenCircleSeat ccs13(80,39,110);
    to<<ccs13.location()<<endl;
    DisablePodiumSeat cds12(87,20);
    to<<cds12.location()<<endl;
    DisablePodiumSeat cds13(46,76);
    to<<cds13.location()<<endl;
    DisablePodiumSeat dps2(213,891,169);
    to<<dps2.location()<<endl;
    DisablePodiumSeat dps3(38,258,100);
    to<<dps3.location()<<endl;
    DisablePodiumSeat dps6(371,858,182);
    to<<dps6.location()<<endl;
    DisablePodiumSeat dps7(144,171,174);
    to<<dps7.location()<<endl;
    DisablePodiumSeat dps8(779,180,169);
    to<<dps8.location()<<endl;
    DisablePodiumSeat dps9(558,256,154);
    to<<dps9.location()<<endl;
    DisablePodiumSeat dps10(317,217,186);
    to<<dps10.location()<<endl;
    DisablePodiumSeat dps11(911,640,179);
    to<<dps11.location()<<endl;
    DisablePodiumSeat dps12(651,174,179);
    to<<dps12.location()<<endl;
    DisablePodiumSeat dps13(783,376,171);
    to<<dps13.location()<<endl;
    DisablePodiumSeat dps14(104,416,148);
    to<<dps14.location()<<endl;
    const int len=8;
    Seat* seats[len] ;
    seats[0]=&dps10;
    seats[1]=&grs1;
    seats[2]=&mrs14;
    seats[3]=&ccs4;
    seats[4]=&frs8;
    seats[5]=&grs5;
    seats[6]=&cds12;
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

