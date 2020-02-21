//
// Created by Yossi Levi on 08/06/2019.
//

#include <iostream>
#include <string.h>
using std::string;
#include "eurovision.h"

using std::cout;
using std::endl;



void TEST3() {
    freopen ("../test3myresult.txt","w",stdout);
    MainControl eurovision;
    Participant p1("israel","song_israel",112,"singer_israel");
    cout<<p1<<endl;
    Participant p2("belarus","song_belarus",111,"singer_belarus");
    cout<<p2<<endl;
    Participant p3("lithiania","song_lithiania",142,"singer_lithiania");
    cout<<p3<<endl;
    Participant p4("estonia","song_estonia",146,"singer_estonia");
    cout<<p4<<endl;
    Participant p5("ireland","song_ireland",154,"singer_ireland");
    cout<<p5<<endl;
    Participant p6("uk","song_uk",230,"singer_uk");
    cout<<p6<<endl;
    Participant p7("lithiania","song_lithiania",183,"singer_lithiania");
    cout<<p7<<endl;
    Participant p8("armenia","song_armenia",186,"singer_armenia");
    cout<<p8<<endl;
    Participant p9("uk","song_uk",111,"singer_uk");
    cout<<p9<<endl;
    Participant p10("slovenia","song_slovenia",173,"singer_slovenia");
    cout<<p10<<endl;
    Participant p11("belgium","song_belgium",198,"singer_belgium");
    cout<<p11<<endl;
    Participant p12("russia","song_russia",114,"singer_russia");
    cout<<p12<<endl;
    Participant p13("slovakia","song_slovakia",185,"singer_slovakia");
    cout<<p13<<endl;
    Participant p14("latvia","song_latvia",220,"singer_latvia");
    cout<<p14<<endl;
    Participant p15("turkey","song_turkey",132,"singer_turkey");
    cout<<p15<<endl;
    Participant p16("andora","song_andora",165,"singer_andora");
    cout<<p16<<endl;
    Participant p17("malta","song_malta",105,"singer_malta");
    cout<<p17<<endl;
    Participant p18("slovenia","song_slovenia",128,"singer_slovenia");
    cout<<p18<<endl;
    Participant p19("moldova","song_moldova",132,"singer_moldova");
    cout<<p19<<endl;
    Participant p20("slovakia","song_slovakia",178,"singer_slovakia");
    cout<<p20<<endl;
    Participant p21("uk","song_uk",198,"singer_uk");
    cout<<p21<<endl;
    Participant p22("serbia","song_serbia",156,"singer_serbia");
    cout<<p22<<endl;
    Participant p23("russia","song_russia",124,"singer_russia");
    cout<<p23<<endl;
    Participant p24("georgia","song_georgia",227,"singer_georgia");
    cout<<p24<<endl;
    Participant p25("luxembourg","song_luxembourg",214,"singer_luxembourg");
    cout<<p25<<endl;
    Participant p26("malta","song_malta",155,"singer_malta");
    cout<<p26<<endl;
    Participant p27("greece","song_greece",163,"singer_greece");
    cout<<p27<<endl;
    Participant p28("hungary","song_hungary",166,"singer_hungary");
    cout<<p28<<endl;
    Participant p29("austria","song_austria",191,"singer_austria");
    cout<<p29<<endl;
    Participant p30("germany","song_germany",122,"singer_germany");
    cout<<p30<<endl;
    Participant p31("turkey","song_turkey",218,"singer_turkey");
    cout<<p31<<endl;
    Participant p32("hungary","song_hungary",106,"singer_hungary");
    cout<<p32<<endl;
    Participant p33("estonia","song_estonia",140,"singer_estonia");
    cout<<p33<<endl;
    Participant p34("bosnia","song_bosnia",200,"singer_bosnia");
    cout<<p34<<endl;
    Participant p35("cyrpus","song_cyrpus",109,"singer_cyrpus");
    cout<<p35<<endl;
    Participant p36("moldova","song_moldova",143,"singer_moldova");
    cout<<p36<<endl;
    p33.update("new_song",0,"");
    p33.update("new_song",0,"");
    p32.update("new_song",0,"");
    p14.update("new_song",0,"");
    p23.update("new_song",0,"newsinger");
    p23.update("new_song",0,"newsinger");
    p29.update("new_song",0,"newsinger");
    p26.update("new_song",0,"newsinger");
    p32.update("new_song",132,"newsinger");
    p34.update("new_song",152,"newsinger");
    p9.update("new_song",178,"newsinger");
    p4.update("new_song",137,"newsinger");
    cout<<eurovision<<endl;
    eurovision+=p26;
    eurovision+=p12;
    eurovision+=p7;
    eurovision+=p24;
    eurovision+=p10;
    eurovision+=p21;
    eurovision+=p4;
    eurovision+=p35;
    eurovision+=p33;
    eurovision+=p1;
    eurovision+=p28;
    eurovision+=p7;
    eurovision+=p4;
    eurovision+=p31;
    cout<<eurovision<<endl;
    eurovision-=p18;
    eurovision-=p12;
    eurovision-=p26;
    eurovision+=p8;
    eurovision-=p1;
    eurovision-=p8;
    eurovision+=p35;
    eurovision+=p6;
    eurovision+=p22;
    eurovision+=p35;
    eurovision-=p28;
    eurovision-=p6;
    eurovision-=p10;
    eurovision+=p7;
    eurovision-=p25;
    eurovision-=p12;
    eurovision+=p36;
    eurovision+=p7;
    eurovision+=p1;
    eurovision-=p2;
    eurovision+=p16;
    eurovision-=p19;
    eurovision+=p19;
    eurovision-=p35;
    cout<<eurovision<<endl;
    (((((((((((((eurovision+=p4)-=p28)+=p4)+=p7)-=p11)+=p19)-=p17)-=p13)-=p12)
    +=p36)+=p31)-=p14)+=p9)-=p5;
    eurovision.setPhase(Contest);
    eurovision.setPhase(Voting);
    cout<<eurovision.participate("italy")<<endl;
    cout<<eurovision.participate("kazakhastan")<<endl;
    cout<<eurovision.participate("estonia")<<endl;
    cout<<eurovision.participate("malta")<<endl;
    cout<<eurovision.participate("armenia")<<endl;
    cout<<eurovision.participate("malta")<<endl;
    cout<<eurovision.participate("cyrpus")<<endl;
    cout<<eurovision.participate("russia")<<endl;
    cout<<eurovision.participate("bosnia")<<endl;
    cout<<eurovision.participate("sweden")<<endl;
    cout<<eurovision.participate("netherlands")<<endl;
    cout<<eurovision.participate("uk")<<endl;
    cout<<eurovision.participate("ukraine")<<endl;
    cout<<eurovision.participate("cyrpus")<<endl;
    p2.update("",120,"");
    cout<<p2<<endl;
    p7.update("",120,"");
    cout<<p7<<endl;
    p2.update("",120,"");
    cout<<p2<<endl;
    p7.update("",120,"");
    cout<<p7<<endl;
    p16.update("",120,"");
    cout<<p16<<endl;
    p10.update("",120,"");
    cout<<p10<<endl;
    p31.update("",120,"");
    cout<<p31<<endl;
    p30.update("",120,"");
    cout<<p30<<endl;
    p25.update("",120,"");
    cout<<p25<<endl;
    p29.update("",120,"");
    cout<<p29<<endl;
    p19.update("",120,"");
    cout<<p19<<endl;
    p35.update("",120,"");
    cout<<p35<<endl;
    p11.update("",120,"");
    cout<<p11<<endl;
    p23.update("",120,"");
    cout<<p23<<endl;
    Voter v1("cyrpus",Judge);
    Voter v2("sweden",Regular);
    Voter v3("ireland",Judge);
    Voter v4("kazakhastan",Regular);
    Voter v5("norway",Judge);
    Voter v6("israel",Judge);
    Voter v7("italy");
    Voter v8("russia",Judge);
    Voter v9("ukraine");
    Voter v10("malta",Judge);
    Voter v11("armenia");
    Voter v12("russia",Regular);
    Voter v13("israel");
    Voter v14("germany",Regular);
    Voter v15("uk",Judge);
    Voter v16("hungary");
    Voter v17("croatia",Regular);
    Voter v18("lithiania",Judge);
    Voter v19("turkey");
    Voter v20("uk",Judge);
    Voter v21("malta",Regular);
    Voter v22("germany",Regular);
    Voter v23("georgia",Regular);
    Voter v24("malta");
    Voter v25("lithiania",Judge);
    Voter v26("italy");
    Voter v27("france",Judge);
    Voter v28("russia");
    Voter v29("estonia");
    Voter v30("spain",Judge);
    Voter v31("estonia",Judge);
    Voter v32("belgium",Regular);
    Voter v33("uk",Judge);
    Voter v34("serbia",Judge);
    Voter v35("serbia");
    Voter v36("latvia",Regular);
    Voter v37("turkey",Judge);
    Voter v38("armenia",Judge);
    Voter v39("belgium",Judge);
    Voter v40("hungary",Regular);
    Voter v41("latvia",Judge);
    Voter v42("slovenia");
    Voter v43("lithiania",Judge);
    Voter v44("austria",Judge);
    Voter v45("armenia",Regular);
    Voter v46("norway",Regular);
    Voter v47("bulgaria",Judge);
    Voter v48("greece",Judge);
    Voter v49("serbia",Judge);
    Voter v50("ukraine",Regular);
    Voter v51("cyrpus");
    Voter v52("slovenia",Regular);
    Voter v53("latvia",Regular);
    Voter v54("switzerland",Judge);
    Voter v55("austria",Judge);
    Voter v56("kazakhastan");
    Voter v57("latvia");
    Voter v58("norway",Judge);
    Voter v59("belarus",Judge);
    Voter v60("lithiania",Judge);
    Voter v61("latvia",Regular);
    Voter v62("croatia");
    Voter v63("hungary",Regular);
    Voter v64("slovenia",Regular);
    Voter v65("croatia",Judge);
    Voter v66("netherlands",Judge);
    Voter v67("armenia");
    Voter v68("bosnia");
    Voter v69("malta",Judge);
    Voter v70("malta",Judge);
    Voter v71("bulgaria",Judge);
    Voter v72("malta",Judge);
    Voter v73("uk",Regular);
    Voter v74("andora",Judge);
    Voter v75("spain",Judge);
    Voter v76("estonia",Judge);
    Voter v77("turkey");
    Voter v78("georgia",Judge);
    Voter v79("georgia",Judge);
    Voter v80("russia",Judge);
    Voter v81("serbia");
    Voter v82("cyrpus");
    Voter v83("israel",Regular);
    Voter v84("estonia",Regular);
    Voter v85("bulgaria",Regular);
    Voter v86("uk");
    Voter v87("andora",Regular);
    Voter v88("andora");
    Voter v89("bosnia",Regular);
    Voter v90("uk");
    Voter v91("luxembourg",Judge);
    Voter v92("ukraine");
    Voter v93("spain",Regular);
    Voter v94("austria");
    Voter v95("slovenia");
    Voter v96("austria",Judge);
    Voter v97("kazakhastan",Regular);
    Voter v98("bosnia",Judge);
    Voter v99("spain");
    cout<<eurovision<<endl;
    eurovision+=Vote(v97,"austria");
    eurovision+=Vote(v70,"greece","switzerland","bulgaria","slovakia");
    eurovision+=Vote(v31,"belarus","lithiania","georgia","slovakia","ukraine","estonia","norway","russia","bulgaria");
    eurovision+=Vote(v93,"hungary");
    eurovision+=Vote(v32,"ukraine");
    eurovision+=Vote(v81,"ireland");
    eurovision+=Vote(v61,"latvia");
    eurovision+=Vote(v73,"germany");
    eurovision+=Vote(v94,"cyrpus");
    eurovision+=Vote(v50,"lithiania");
    eurovision+=Vote(v47,"norway","slovenia");
    eurovision+=Vote(v78,"austria","austria");
    eurovision+=Vote(v78,"bosnia","spain","germany","hungary","andora","russia","slovenia","luxembourg");
    eurovision+=Vote(v60,"hungary","russia","sweden");
    eurovision+=Vote(v4,"israel");
    eurovision+=Vote(v52,"armenia");
    eurovision+=Vote(v2,"austria");
    eurovision+=Vote(v54,"andora","croatia","sweden","bosnia","slovenia","moldova");
    eurovision+=Vote(v92,"germany");
    eurovision+=Vote(v98,"latvia","bosnia","serbia","luxembourg");
    eurovision+=Vote(v39,"kazakhastan","ukraine","andora","malta","germany","sweden");
    eurovision+=Vote(v83,"spain");
    eurovision+=Vote(v31,"luxembourg","ireland","austria","bulgaria","turkey","spain");
    eurovision+=Vote(v70,"greece","armenia","netherlands");
    eurovision+=Vote(v96,"luxembourg","estonia","ireland","russia","bosnia","ukraine");
    eurovision+=Vote(v27,"ukraine","turkey","cyrpus","croatia","kazakhastan","germany","netherlands","slovakia");
    eurovision+=Vote(v87,"malta");
    eurovision+=Vote(v34,"bosnia","ireland","turkey","kazakhastan","norway","estonia","serbia","spain","georgia");
    eurovision+=Vote(v28,"belarus");
    eurovision+=Vote(v91,"andora","israel","norway","ukraine","estonia","belarus","croatia","slovakia");
    eurovision+=Vote(v91,"norway","croatia","georgia","belarus");
    eurovision+=Vote(v51,"latvia");
    eurovision+=Vote(v21,"ireland");
    eurovision+=Vote(v61,"belarus");
    eurovision+=Vote(v42,"armenia");
    eurovision+=Vote(v85,"sweden");
    eurovision+=Vote(v50,"bosnia");
    eurovision+=Vote(v62,"spain");
    eurovision+=Vote(v90,"sweden");
    eurovision+=Vote(v84,"armenia");
    eurovision+=Vote(v97,"turkey");
    eurovision+=Vote(v39,"lithiania","latvia","belarus","andora","spain","estonia","turkey","ireland","ukraine");
    eurovision+=Vote(v48,"slovenia","andora","armenia","russia");
    eurovision+=Vote(v29,"spain");
    eurovision+=Vote(v9,"germany");
    eurovision+=Vote(v58,"kazakhastan","belarus","israel","spain");
    eurovision+=Vote(v55,"slovenia","andora","russia","croatia","armenia");
    eurovision+=Vote(v31,"luxembourg","kazakhastan","austria");
    eurovision+=Vote(v83,"moldova");
    eurovision+=Vote(v28,"estonia");
    eurovision+=Vote(v79,"germany","spain","belarus");
    eurovision+=Vote(v55,"luxembourg","slovakia");
    eurovision+=Vote(v10,"ukraine","cyrpus","norway","kazakhastan","serbia","armenia","belarus","georgia");
    eurovision+=Vote(v74,"hungary","germany","france","greece","israel","austria","moldova","belgium");
    eurovision+=Vote(v84,"malta");
    eurovision+=Vote(v73,"andora");
    eurovision+=Vote(v50,"bosnia");
    eurovision+=Vote(v87,"belgium");
    eurovision+=Vote(v57,"armenia");
    eurovision+=Vote(v72,"bulgaria","andora","norway","belgium","sweden","belarus","spain","bosnia");
    eurovision+=Vote(v84,"austria");
    eurovision+=Vote(v67,"hungary");
    eurovision+=Vote(v96,"andora","kazakhastan","slovakia","hungary","italy");
    eurovision+=Vote(v76,"lithiania","belgium","turkey","austria");
    eurovision+=Vote(v31,"switzerland","israel","estonia","cyrpus","hungary");
    eurovision+=Vote(v12,"moldova");
    eurovision+=Vote(v4,"belarus");
    eurovision+=Vote(v83,"croatia");
    eurovision+=Vote(v35,"russia");
    eurovision+=Vote(v75,"france","luxembourg","bulgaria","bosnia","georgia","france","germany","croatia","andora","hungary");
    eurovision+=Vote(v78,"andora","spain","georgia","sweden","latvia");
    eurovision+=Vote(v55,"ukraine","greece","kazakhastan","andora");
    eurovision+=Vote(v47,"russia","armenia","belarus","cyrpus","turkey","croatia");
    eurovision+=Vote(v18,"hungary","netherlands");
    eurovision+=Vote(v68,"sweden");
    eurovision+=Vote(v66,"estonia","kazakhastan","greece","croatia");
    eurovision+=Vote(v25,"austria","luxembourg","bulgaria","norway","belarus");
    eurovision+=Vote(v41,"ireland","russia","belgium","turkey","bulgaria","germany","andora");
    eurovision+=Vote(v68,"croatia");
    eurovision+=Vote(v72,"italy","bulgaria","austria");
    eurovision+=Vote(v51,"sweden");
    eurovision+=Vote(v84,"belgium");
    eurovision+=Vote(v10,"armenia","turkey","france","austria","sweden");
    eurovision+=Vote(v3,"sweden","luxembourg","belgium","belarus","moldova");
    eurovision+=Vote(v33,"armenia","kazakhastan","bulgaria","slovenia","lithiania","belarus","turkey","armenia");
    eurovision+=Vote(v4,"belgium");
    eurovision+=Vote(v57,"bulgaria");
    eurovision+=Vote(v12,"belarus");
    eurovision+=Vote(v14,"kazakhastan");
    eurovision+=Vote(v8,"france","latvia");
    eurovision+=Vote(v14,"hungary");
    eurovision+=Vote(v31,"russia","lithiania","malta","greece","ukraine");
    eurovision+=Vote(v76,"andora","kazakhastan","france","estonia");
    eurovision+=Vote(v75,"norway","israel","france","italy","bulgaria","norway","germany");
    eurovision+=Vote(v34,"ukraine","israel","slovakia","greece","kazakhastan","bulgaria");
    eurovision+=Vote(v36,"switzerland");
    eurovision+=Vote(v59,"georgia","hungary","latvia","kazakhastan");
    eurovision+=Vote(v41,"israel","belarus","norway","luxembourg","russia","malta");
    eurovision+=Vote(v31,"lithiania","luxembourg","israel","sweden","italy","turkey","lithiania","estonia");
    eurovision+=Vote(v44,"turkey","moldova","norway","france","kazakhastan","slovenia","slovakia","croatia","luxembourg");
    eurovision+=Vote(v50,"belgium");
    eurovision+=Vote(v90,"norway");
    eurovision+=Vote(v9,"ireland");
    eurovision+=Vote(v74,"luxembourg","spain","andora");
    eurovision+=Vote(v59,"moldova","switzerland","bulgaria","moldova");
    eurovision+=Vote(v1,"sweden","spain","greece");
    eurovision+=Vote(v37,"austria","georgia","andora","belarus","slovakia","malta","kazakhastan","armenia");
    eurovision+=Vote(v54,"armenia","croatia","moldova","norway","france","ireland","ukraine","kazakhastan");
    eurovision+=Vote(v45,"slovenia");
    eurovision+=Vote(v87,"andora");
    eurovision+=Vote(v69,"moldova","estonia","austria");
    eurovision+=Vote(v15,"cyrpus","malta","croatia","ireland","cyrpus","switzerland","ukraine");
    eurovision+=Vote(v20,"latvia","turkey","norway","belarus","france","malta");
    eurovision+=Vote(v7,"georgia");
    eurovision+=Vote(v87,"cyrpus");
    eurovision+=Vote(v42,"ireland");
    eurovision+=Vote(v88,"switzerland");
    eurovision+=Vote(v86,"luxembourg");
    eurovision+=Vote(v55,"spain","russia","georgia","cyrpus");
    eurovision+=Vote(v30,"slovenia","cyrpus","hungary","ukraine","kazakhastan","georgia","slovakia","luxembourg","croatia","latvia");
    eurovision+=Vote(v31,"turkey","kazakhastan","armenia");
    eurovision+=Vote(v9,"latvia");
    eurovision+=Vote(v47,"slovakia","serbia","andora","austria");
    eurovision+=Vote(v28,"bosnia");
    eurovision+=Vote(v9,"austria");
    eurovision+=Vote(v77,"kazakhastan");
    eurovision+=Vote(v9,"luxembourg");
    eurovision+=Vote(v66,"israel","ukraine","austria","kazakhastan");
    eurovision+=Vote(v92,"serbia");
    eurovision+=Vote(v13,"turkey");
    eurovision+=Vote(v14,"russia");
    eurovision+=Vote(v28,"croatia");
    eurovision+=Vote(v33,"israel","luxembourg","andora","ukraine","malta");
    eurovision+=Vote(v71,"turkey","andora","ukraine");
    eurovision+=Vote(v89,"turkey");
    eurovision+=Vote(v2,"bulgaria");
    eurovision+=Vote(v46,"bulgaria");
    eurovision+=Vote(v89,"norway");
    eurovision+=Vote(v17,"bosnia");
    eurovision+=Vote(v3,"spain","malta","slovenia","croatia");
    eurovision+=Vote(v77,"bulgaria");
    eurovision+=Vote(v70,"norway","luxembourg","bulgaria","serbia","greece","netherlands","latvia");
    eurovision+=Vote(v97,"luxembourg");
    eurovision+=Vote(v65,"spain","slovakia","greece");
    eurovision+=Vote(v5,"kazakhastan","malta");
    eurovision+=Vote(v23,"ireland");
    eurovision+=Vote(v62,"luxembourg");
    eurovision+=Vote(v25,"malta","ireland","italy","belarus");
    eurovision+=Vote(v83,"estonia");
    eurovision+=Vote(v28,"malta");
    eurovision+=Vote(v9,"bulgaria");
    eurovision+=Vote(v56,"bulgaria");
    eurovision+=Vote(v78,"belgium","sweden","kazakhastan","france","greece","slovakia","hungary");
    eurovision+=Vote(v1,"greece","switzerland","armenia","france","italy","andora");
    eurovision+=Vote(v35,"spain");
    eurovision+=Vote(v46,"serbia");
    eurovision+=Vote(v96,"netherlands","italy","france","switzerland");
    eurovision+=Vote(v69,"andora","greece","russia","austria","bosnia","georgia","norway","netherlands");
    eurovision+=Vote(v61,"lithiania");
    eurovision+=Vote(v6,"turkey","spain","malta","hungary","bulgaria","belgium","france","moldova");
    eurovision+=Vote(v79,"belarus","spain","kazakhastan","austria","slovakia");
    eurovision+=Vote(v79,"belgium","netherlands","norway");
    eurovision+=Vote(v73,"cyrpus");
    eurovision+=Vote(v43,"belarus","france","estonia");
    eurovision+=Vote(v93,"luxembourg");
    eurovision+=Vote(v88,"andora");
    eurovision+=Vote(v54,"bulgaria","croatia");
    eurovision+=Vote(v84,"hungary");
    eurovision+=Vote(v92,"latvia");
    eurovision+=Vote(v89,"lithiania");
    eurovision+=Vote(v13,"hungary");
    eurovision+=Vote(v14,"estonia");
    eurovision+=Vote(v83,"israel");
    eurovision+=Vote(v49,"estonia","sweden","greece","ireland");
    eurovision+=Vote(v87,"belarus");
    eurovision+=Vote(v50,"sweden");
    eurovision+=Vote(v36,"bulgaria");
    eurovision+=Vote(v99,"switzerland");
    eurovision+=Vote(v96,"luxembourg","bosnia","hungary","germany","ireland","turkey","malta","kazakhastan","serbia");
    eurovision+=Vote(v14,"russia");
    eurovision+=Vote(v24,"france");
    eurovision+=Vote(v90,"malta");
    eurovision+=Vote(v19,"moldova");
    eurovision+=Vote(v74,"israel","ireland","sweden");
    eurovision+=Vote(v59,"netherlands","bulgaria","norway");
    eurovision+=Vote(v66,"ukraine","spain","austria","ireland","turkey");
    eurovision+=Vote(v9,"france");
    eurovision+=Vote(v66,"austria","slovakia","turkey","france","estonia");
    eurovision+=Vote(v68,"andora");
    eurovision+=Vote(v35,"bosnia");
    eurovision+=Vote(v89,"greece");
    eurovision+=Vote(v76,"cyrpus","armenia","estonia","israel","switzerland","italy","netherlands","austria","spain");
    eurovision+=Vote(v51,"spain");
    eurovision+=Vote(v60,"moldova","ukraine","israel","spain","italy","netherlands","slovakia");
    eurovision+=Vote(v37,"russia","greece","georgia","latvia","malta","ukraine");
    eurovision+=Vote(v47,"switzerland","netherlands","moldova","slovenia");
    eurovision+=Vote(v22,"slovenia");
    eurovision+=Vote(v21,"germany");
    eurovision+=Vote(v65,"bosnia","serbia","belarus","ukraine","ireland","bulgaria");
    cout<<eurovision<<endl;
    fclose(stdout);
}
