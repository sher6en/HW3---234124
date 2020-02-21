#include <iostream>
#include "seat.h"

using std::cout;
using std::endl;

int main(){
	
	GreenRoomSeat grs1(67,40);
    cout<<grs1.location()<<endl;
    GreenRoomSeat grs2(45,16);
    cout<<grs2.location()<<endl;
    GreenRoomSeat grs3(95,47);
    cout<<grs3.location()<<endl;
    GreenRoomSeat grs4(12,70);
    cout<<grs4.location()<<endl;
    GreenRoomSeat grs5(94,69);
    cout<<grs5.location()<<endl;
    GreenRoomSeat grs6(39,12);
    cout<<grs6.location()<<endl;
    GreenRoomSeat grs7(60,36);
    cout<<grs7.location()<<endl;
    GreenRoomSeat grs9(75,98);
    cout<<grs9.location()<<endl;
    GreenRoomSeat grs10(62,88);
    cout<<grs10.location()<<endl;
    GreenRoomSeat grs12(88,68);
    cout<<grs12.location()<<endl;
    GreenRoomSeat grs13(26,61);
    cout<<grs13.location()<<endl;
    GreenRoomSeat grs14(84,39);
    cout<<grs14.location()<<endl;
    MiddleRegularSeat mrs1('H',65,49,148);
    cout<<mrs1.location()<<endl;
    MiddleRegularSeat mrs2('I',77,60,109);
    cout<<mrs2.location()<<endl;
    MiddleRegularSeat mrs5('A',14,15,175);
    cout<<mrs5.location()<<endl;
    MiddleRegularSeat mrs9('I',93,29,114);
    cout<<mrs9.location()<<endl;
    MiddleRegularSeat mrs10('H',69,32,172);
    cout<<mrs10.location()<<endl;
    MiddleRegularSeat mrs11('I',53,46,181);
    cout<<mrs11.location()<<endl;
    MiddleRegularSeat mrs12('D',68,50,186);
    cout<<mrs12.location()<<endl;
    MiddleRegularSeat mrs13('G',41,1,172);
    cout<<mrs13.location()<<endl;
    MiddleRegularSeat mrs14('I',36,99,179);
    cout<<mrs14.location()<<endl;
    FrontRegularSeat frs1('G',28,75,156);
    cout<<frs1.location()<<endl;
    FrontRegularSeat frs2('D',49,100,189);
    cout<<frs2.location()<<endl;
    FrontRegularSeat frs8('F',72,77,191);
    cout<<frs8.location()<<endl;
    FrontRegularSeat frs11('E',76,44,195);
    cout<<frs11.location()<<endl;
    FrontRegularSeat frs13('J',30,65,176);
    cout<<frs13.location()<<endl;
    FrontRegularSeat frs14('J',50,19,158);
    cout<<frs14.location()<<endl;
    RearRegularSeat rrs1('A',43,2,142);
    cout<<rrs1.location()<<endl;
    RearRegularSeat rrs2('E',47,11,134);
    cout<<rrs2.location()<<endl;
    RearRegularSeat rrs3('J',99,58,198);
    cout<<rrs3.location()<<endl;
    RearRegularSeat rrs6('B',70,41,184);
    cout<<rrs6.location()<<endl;
    RearRegularSeat rrs10('H',7,23,158);
    cout<<rrs10.location()<<endl;
    RearRegularSeat rrs11('I',1,97,137);
    cout<<rrs11.location()<<endl;
    RearRegularSeat rrs12('F',6,54,198);
    cout<<rrs12.location()<<endl;
    GoldenCircleSeat ccs2(55,56,166);
    cout<<ccs2.location()<<endl;
    GoldenCircleSeat ccs4(20,87,196);
    cout<<ccs4.location()<<endl;
    GoldenCircleSeat ccs6(13,95,155);
    cout<<ccs6.location()<<endl;
    GoldenCircleSeat ccs7(78,80,120);
    cout<<ccs7.location()<<endl;
    GoldenCircleSeat ccs9(23,92,122);
    cout<<ccs9.location()<<endl;
    DisablePodiumSeat cds1(98,26);
    cout<<cds1.location()<<endl;
    DisablePodiumSeat cds2(27,6);
    cout<<cds2.location()<<endl;
    DisablePodiumSeat cds6(44,43);
    cout<<cds6.location()<<endl;
    DisablePodiumSeat cds10(32,13);
    cout<<cds10.location()<<endl;
    DisablePodiumSeat cds11(79,4);
    cout<<cds11.location()<<endl;
    DisablePodiumSeat dps1(311,415,134);
    cout<<dps1.location()<<endl;
    DisablePodiumSeat dps2(906,645,187);
    cout<<dps2.location()<<endl;
    DisablePodiumSeat dps4(244,720,125);
    cout<<dps4.location()<<endl;
    DisablePodiumSeat dps5(492,998,145);
    cout<<dps5.location()<<endl;
    DisablePodiumSeat dps6(224,501,106);
    cout<<dps6.location()<<endl;
    DisablePodiumSeat dps7(861,944,198);
    cout<<dps7.location()<<endl;
    DisablePodiumSeat dps8(781,235,151);
    cout<<dps8.location()<<endl;
    DisablePodiumSeat dps9(617,543,110);
    cout<<dps9.location()<<endl;
    DisablePodiumSeat dps10(854,169,127);
    cout<<dps10.location()<<endl;
    DisablePodiumSeat dps11(256,846,129);
    cout<<dps11.location()<<endl;
    DisablePodiumSeat dps12(514,387,104);
    cout<<dps12.location()<<endl;
    DisablePodiumSeat dps13(778,435,187);
    cout<<dps13.location()<<endl;
    DisablePodiumSeat dps14(466,478,173);
    cout<<dps14.location()<<endl;
    const int len=8;
    Seat* seats[len] ;
    seats[0]=&dps1;
    seats[1]=&grs1;
    seats[2]=new DisablePodiumSeat(1,1);
    seats[3]=&ccs4;
    seats[4]=new FrontRegularSeat('E',1,12,100);
    seats[5]=&grs5;
    seats[6]=&cds2;
    seats[7]=&dps8;

    for (int i=0; i<len; ++i)
    {
        cout << seats[i]->location() << endl;
        try
        {
            cout << seats[i]->price() << endl;
        }
        catch (exception& e)
        {
            cout << e.what() << endl;
        }
    }

    int i=0;
    for (Seat** p=seats; p<seats+len; ++p) {
        if(i!=2&&i!=4){
            i++;
            continue;
        }
        i++;
        delete *p;
    }
	
	return 1;
}