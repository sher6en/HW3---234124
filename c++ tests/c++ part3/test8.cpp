#include <iostream>

#include "seat.h"

using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::endl;

void TEST8(){
    ofstream to("../test8myresult.txt");
    GreenRoomSeat grs1(50,42);
    to<<grs1.location()<<endl;
    GreenRoomSeat grs2(35,31);
    to<<grs2.location()<<endl;
    GreenRoomSeat grs3(23,92);
    to<<grs3.location()<<endl;
    GreenRoomSeat grs5(40,59);
    to<<grs5.location()<<endl;
    GreenRoomSeat grs7(46,84);
    to<<grs7.location()<<endl;
    GreenRoomSeat grs8(27,88);
    to<<grs8.location()<<endl;
    GreenRoomSeat grs9(29,67);
    to<<grs9.location()<<endl;
    GreenRoomSeat grs10(22,50);
    to<<grs10.location()<<endl;
    GreenRoomSeat grs11(26,18);
    to<<grs11.location()<<endl;
    GreenRoomSeat grs12(65,7);
    to<<grs12.location()<<endl;
    GreenRoomSeat grs13(34,74);
    to<<grs13.location()<<endl;
    GreenRoomSeat grs14(63,11);
    to<<grs14.location()<<endl;
    MiddleRegularSeat mrs1('F',3,2,162);
    to<<mrs1.location()<<endl;
    MiddleRegularSeat mrs2('I',37,99,197);
    to<<mrs2.location()<<endl;
    MiddleRegularSeat mrs4('E',74,38,133);
    to<<mrs4.location()<<endl;
    MiddleRegularSeat mrs5('E',42,5,171);
    to<<mrs5.location()<<endl;
    MiddleRegularSeat mrs6('F',69,56,161);
    to<<mrs6.location()<<endl;
    MiddleRegularSeat mrs8('H',78,35,128);
    to<<mrs8.location()<<endl;
    MiddleRegularSeat mrs9('G',100,57,141);
    to<<mrs9.location()<<endl;
    MiddleRegularSeat mrs10('G',15,83,172);
    to<<mrs10.location()<<endl;
    MiddleRegularSeat mrs11('G',53,95,157);
    to<<mrs11.location()<<endl;
    MiddleRegularSeat mrs14('I',25,8,172);
    to<<mrs14.location()<<endl;
    FrontRegularSeat frs2('G',60,12,168);
    to<<frs2.location()<<endl;
    FrontRegularSeat frs3('G',56,39,181);
    to<<frs3.location()<<endl;
    FrontRegularSeat frs7('I',55,64,141);
    to<<frs7.location()<<endl;
    FrontRegularSeat frs9('H',10,94,156);
    to<<frs9.location()<<endl;
    FrontRegularSeat frs10('J',9,29,129);
    to<<frs10.location()<<endl;
    FrontRegularSeat frs12('H',62,78,126);
    to<<frs12.location()<<endl;
    FrontRegularSeat frs13('A',89,32,154);
    to<<frs13.location()<<endl;
    FrontRegularSeat frs14('H',81,34,140);
    to<<frs14.location()<<endl;
    RearRegularSeat rrs1('J',32,52,192);
    to<<rrs1.location()<<endl;
    RearRegularSeat rrs3('C',6,100,139);
    to<<rrs3.location()<<endl;
    RearRegularSeat rrs4('E',20,60,124);
    to<<rrs4.location()<<endl;
    RearRegularSeat rrs9('D',19,15,164);
    to<<rrs9.location()<<endl;
    RearRegularSeat rrs10('J',43,61,188);
    to<<rrs10.location()<<endl;
    RearRegularSeat rrs11('B',14,51,141);
    to<<rrs11.location()<<endl;
    GoldenCircleSeat ccs1(8,40,103);
    to<<ccs1.location()<<endl;
    GoldenCircleSeat ccs2(99,54,130);
    to<<ccs2.location()<<endl;
    GoldenCircleSeat ccs3(38,75,135);
    to<<ccs3.location()<<endl;
    GoldenCircleSeat ccs8(54,82,118);
    to<<ccs8.location()<<endl;
    GoldenCircleSeat ccs9(16,73,141);
    to<<ccs9.location()<<endl;
    GoldenCircleSeat ccs11(84,27,197);
    to<<ccs11.location()<<endl;
    DisablePodiumSeat cds1(59,25);
    to<<cds1.location()<<endl;
    DisablePodiumSeat cds3(75,33);
    to<<cds3.location()<<endl;
    DisablePodiumSeat cds5(1,62);
    to<<cds5.location()<<endl;
    DisablePodiumSeat cds8(87,4);
    to<<cds8.location()<<endl;
    DisablePodiumSeat cds9(92,80);
    to<<cds9.location()<<endl;
    DisablePodiumSeat dps1(121,614,143);
    to<<dps1.location()<<endl;
    DisablePodiumSeat dps2(352,934,193);
    to<<dps2.location()<<endl;
    DisablePodiumSeat dps3(955,953,172);
    to<<dps3.location()<<endl;
    DisablePodiumSeat dps4(763,770,183);
    to<<dps4.location()<<endl;
    DisablePodiumSeat dps5(369,203,122);
    to<<dps5.location()<<endl;
    DisablePodiumSeat dps6(341,944,195);
    to<<dps6.location()<<endl;
    DisablePodiumSeat dps7(448,598,178);
    to<<dps7.location()<<endl;
    DisablePodiumSeat dps8(351,299,134);
    to<<dps8.location()<<endl;
    DisablePodiumSeat dps9(666,926,178);
    to<<dps9.location()<<endl;
    DisablePodiumSeat dps10(567,607,124);
    to<<dps10.location()<<endl;
    DisablePodiumSeat dps11(683,505,188);
    to<<dps11.location()<<endl;
    DisablePodiumSeat dps12(587,333,134);
    to<<dps12.location()<<endl;
    DisablePodiumSeat dps13(462,383,173);
    to<<dps13.location()<<endl;
    DisablePodiumSeat dps14(279,602,197);
    to<<dps14.location()<<endl;
    const int len=1;
    Seat* seats[len] ;
    seats[0]=&dps1;


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


