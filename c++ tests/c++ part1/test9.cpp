//
// Created by Yossi Levi on 08/06/2019.
//

#include <iostream>
#include <string.h>
using std::string;
#include "eurovision.h"

using std::cout;
using std::endl;



void TEST9(){
    freopen ("../test9myresult.txt","w",stdout);
    MainControl eurovision;
    Participant p1("austria","song_austria",194,"singer_austria");
    cout<<p1<<endl;
    Participant p2("ukraine","song_ukraine",119,"singer_ukraine");
    cout<<p2<<endl;
    Participant p3("germany","song_germany",187,"singer_germany");
    cout<<p3<<endl;
    Participant p4("austria","song_austria",193,"singer_austria");
    cout<<p4<<endl;
    Participant p5("uk","song_uk",162,"singer_uk");
    cout<<p5<<endl;
    Participant p6("latvia","song_latvia",197,"singer_latvia");
    cout<<p6<<endl;
    Participant p7("croatia","song_croatia",196,"singer_croatia");
    cout<<p7<<endl;
    Participant p8("germany","song_germany",165,"singer_germany");
    cout<<p8<<endl;
    Participant p9("turkey","song_turkey",134,"singer_turkey");
    cout<<p9<<endl;
    Participant p10("cyrpus","song_cyrpus",226,"singer_cyrpus");
    cout<<p10<<endl;
    Participant p11("ireland","song_ireland",217,"singer_ireland");
    cout<<p11<<endl;
    Participant p12("russia","song_russia",172,"singer_russia");
    cout<<p12<<endl;
    Participant p13("sweden","song_sweden",228,"singer_sweden");
    cout<<p13<<endl;
    Participant p14("ireland","song_ireland",196,"singer_ireland");
    cout<<p14<<endl;
    Participant p15("norway","song_norway",170,"singer_norway");
    cout<<p15<<endl;
    Participant p16("russia","song_russia",143,"singer_russia");
    cout<<p16<<endl;
    Participant p17("spain","song_spain",146,"singer_spain");
    cout<<p17<<endl;
    Participant p18("georgia","song_georgia",215,"singer_georgia");
    cout<<p18<<endl;
    Participant p19("moldova","song_moldova",204,"singer_moldova");
    cout<<p19<<endl;
    Participant p20("latvia","song_latvia",200,"singer_latvia");
    cout<<p20<<endl;
    Participant p21("armenia","song_armenia",175,"singer_armenia");
    cout<<p21<<endl;
    Participant p22("kazakhastan","song_kazakhastan",207,"singer_kazakhastan");
    cout<<p22<<endl;
    Participant p23("slovakia","song_slovakia",136,"singer_slovakia");
    cout<<p23<<endl;
    Participant p24("norway","song_norway",217,"singer_norway");
    cout<<p24<<endl;
    Participant p25("italy","song_italy",155,"singer_italy");
    cout<<p25<<endl;
    Participant p26("france","song_france",197,"singer_france");
    cout<<p26<<endl;
    Participant p27("italy","song_italy",225,"singer_italy");
    cout<<p27<<endl;
    Participant p28("moldova","song_moldova",202,"singer_moldova");
    cout<<p28<<endl;
    Participant p29("netherlands","song_netherlands",209,"singer_netherlands");
    cout<<p29<<endl;
    Participant p30("lithiania","song_lithiania",118,"singer_lithiania");
    cout<<p30<<endl;
    Participant p31("slovenia","song_slovenia",131,"singer_slovenia");
    cout<<p31<<endl;
    Participant p32("switzerland","song_switzerland",134,"singer_switzerland");
    cout<<p32<<endl;
    Participant p33("georgia","song_georgia",106,"singer_georgia");
    cout<<p33<<endl;
    Participant p34("spain","song_spain",187,"singer_spain");
    cout<<p34<<endl;
    Participant p35("turkey","song_turkey",170,"singer_turkey");
    cout<<p35<<endl;
    Participant p36("greece","song_greece",154,"singer_greece");
    cout<<p36<<endl;
    p7.update("new_song",0,"");
    p5.update("new_song",0,"");
    p27.update("new_song",0,"");
    p26.update("new_song",0,"");
    p28.update("new_song",0,"newsinger");
    p2.update("new_song",0,"newsinger");
    p18.update("new_song",0,"newsinger");
    p35.update("new_song",0,"newsinger");
    p8.update("new_song",169,"newsinger");
    p14.update("new_song",190,"newsinger");
    p13.update("new_song",108,"newsinger");
    p30.update("new_song",126,"newsinger");
    cout<<eurovision<<endl;
    eurovision+=p12;
    eurovision+=p6;
    eurovision+=p20;
    eurovision+=p19;
    eurovision+=p17;
    eurovision+=p17;
    eurovision+=p27;
    eurovision+=p5;
    eurovision+=p33;
    eurovision+=p7;
    eurovision+=p27;
    eurovision+=p21;
    eurovision+=p11;
    eurovision+=p22;
    cout<<eurovision<<endl;
    eurovision-=p9;
    eurovision+=p16;
    eurovision-=p7;
    eurovision+=p17;
    eurovision+=p15;
    eurovision-=p32;
    eurovision-=p24;
    eurovision+=p23;
    eurovision+=p3;
    eurovision+=p27;
    eurovision+=p11;
    eurovision-=p30;
    eurovision-=p25;
    eurovision-=p33;
    eurovision+=p21;
    eurovision+=p30;
    eurovision+=p6;
    eurovision-=p31;
    eurovision+=p25;
    eurovision+=p6;
    eurovision+=p5;
    eurovision+=p2;
    eurovision+=p18;
    eurovision+=p29;
    cout<<eurovision<<endl;
    eurovision.setPhase(Contest);
    eurovision.setPhase(Voting);
    cout<<eurovision.participate("spain")<<endl;
    cout<<eurovision.participate("turkey")<<endl;
    cout<<eurovision.participate("georgia")<<endl;
    cout<<eurovision.participate("kazakhastan")<<endl;
    cout<<eurovision.participate("bulgaria")<<endl;
    cout<<eurovision.participate("andora")<<endl;
    cout<<eurovision.participate("belgium")<<endl;
    cout<<eurovision.participate("ukraine")<<endl;
    cout<<eurovision.participate("switzerland")<<endl;
    cout<<eurovision.participate("austria")<<endl;
    cout<<eurovision.participate("estonia")<<endl;
    cout<<eurovision.participate("bosnia")<<endl;
    cout<<eurovision.participate("estonia")<<endl;
    cout<<eurovision.participate("luxembourg")<<endl;
    p2.update("",120,"");
    cout<<p2<<endl;
    p27.update("",120,"");
    cout<<p27<<endl;
    p20.update("",120,"");
    cout<<p20<<endl;
    p15.update("",120,"");
    cout<<p15<<endl;
    p31.update("",120,"");
    cout<<p31<<endl;
    p1.update("",120,"");
    cout<<p1<<endl;
    p13.update("",120,"");
    cout<<p13<<endl;
    p20.update("",120,"");
    cout<<p20<<endl;
    p35.update("",120,"");
    cout<<p35<<endl;
    p27.update("",120,"");
    cout<<p27<<endl;
    p32.update("",120,"");
    cout<<p32<<endl;
    p27.update("",120,"");
    cout<<p27<<endl;
    p27.update("",120,"");
    cout<<p27<<endl;
    p35.update("",120,"");
    cout<<p35<<endl;
    Voter v1("hungary");
    Voter v2("serbia");
    Voter v3("kazakhastan",Regular);
    Voter v4("switzerland",Judge);
    Voter v5("hungary",Judge);
    Voter v6("belgium",Regular);
    Voter v7("andora");
    Voter v8("andora");
    Voter v9("ireland",Regular);
    Voter v10("uk",Judge);
    Voter v11("andora");
    Voter v12("kazakhastan");
    Voter v13("turkey");
    Voter v14("bulgaria");
    Voter v15("germany",Judge);
    Voter v16("armenia");
    Voter v17("armenia",Judge);
    Voter v18("france",Judge);
    Voter v19("netherlands");
    Voter v20("slovakia",Judge);
    Voter v21("italy",Judge);
    Voter v22("armenia",Judge);
    Voter v23("ukraine",Regular);
    Voter v24("uk",Judge);
    Voter v25("norway");
    Voter v26("uk",Judge);
    Voter v27("kazakhastan");
    Voter v28("hungary");
    Voter v29("andora",Judge);
    Voter v30("croatia",Regular);
    Voter v31("turkey",Regular);
    Voter v32("luxembourg",Regular);
    Voter v33("russia",Regular);
    Voter v34("armenia",Regular);
    Voter v35("malta",Regular);
    Voter v36("turkey",Judge);
    Voter v37("turkey",Judge);
    Voter v38("hungary",Regular);
    Voter v39("israel",Judge);
    Voter v40("netherlands",Judge);
    Voter v41("bulgaria",Judge);
    Voter v42("belarus");
    Voter v43("switzerland",Regular);
    Voter v44("bosnia");
    Voter v45("armenia",Judge);
    Voter v46("greece",Judge);
    Voter v47("germany",Judge);
    Voter v48("latvia",Regular);
    Voter v49("latvia",Judge);
    Voter v50("netherlands",Judge);
    Voter v51("spain",Judge);
    Voter v52("france",Judge);
    Voter v53("kazakhastan",Judge);
    Voter v54("ukraine");
    Voter v55("russia",Regular);
    Voter v56("italy",Judge);
    Voter v57("moldova");
    Voter v58("turkey",Judge);
    Voter v59("andora",Regular);
    Voter v60("greece");
    Voter v61("slovakia",Judge);
    Voter v62("georgia");
    Voter v63("bulgaria",Judge);
    Voter v64("hungary",Judge);
    Voter v65("france");
    Voter v66("ireland");
    Voter v67("israel",Judge);
    Voter v68("ireland",Regular);
    Voter v69("italy",Regular);
    Voter v70("cyrpus");
    Voter v71("italy",Judge);
    Voter v72("belarus");
    Voter v73("belarus",Regular);
    Voter v74("france",Regular);
    Voter v75("netherlands");
    Voter v76("belarus",Regular);
    Voter v77("slovenia",Judge);
    Voter v78("bulgaria");
    Voter v79("lithiania");
    Voter v80("bulgaria",Regular);
    Voter v81("malta",Judge);
    Voter v82("georgia",Regular);
    Voter v83("italy");
    Voter v84("spain",Regular);
    Voter v85("germany");
    Voter v86("israel",Judge);
    Voter v87("austria");
    Voter v88("israel");
    Voter v89("bulgaria",Judge);
    Voter v90("turkey",Regular);
    Voter v91("armenia",Regular);
    Voter v92("hungary");
    Voter v93("slovenia",Judge);
    Voter v94("austria",Regular);
    Voter v95("germany",Regular);
    Voter v96("bulgaria");
    Voter v97("ireland",Judge);
    Voter v98("germany",Judge);
    Voter v99("kazakhastan");
    cout<<eurovision<<endl;
    eurovision+=Vote(v75,"austria");
    eurovision+=Vote(v90,"netherlands");
    eurovision+=Vote(v90,"andora");
    eurovision+=Vote(v57,"switzerland");
    eurovision+=Vote(v54,"switzerland");
    eurovision+=Vote(v98,"sweden","lithiania","israel","ukraine","greece","kazakhastan","ireland");
    eurovision+=Vote(v26,"norway","kazakhastan","estonia","malta","spain","ukraine","cyrpus","sweden");
    eurovision+=Vote(v86,"armenia","lithiania");
    eurovision+=Vote(v53,"estonia","bosnia");
    eurovision+=Vote(v29,"italy","latvia","belarus","kazakhastan","netherlands");
    eurovision+=Vote(v47,"serbia","georgia","israel","greece","armenia","latvia","norway");
    eurovision+=Vote(v24,"luxembourg","spain","lithiania","belgium","cyrpus","slovakia");
    eurovision+=Vote(v46,"bulgaria","belarus","georgia");
    eurovision+=Vote(v49,"israel","germany","netherlands");
    eurovision+=Vote(v21,"italy","israel","ireland","andora","spain","serbia");
    eurovision+=Vote(v17,"slovenia","estonia","netherlands","lithiania","moldova");
    eurovision+=Vote(v83,"cyrpus");
    eurovision+=Vote(v87,"bulgaria");
    eurovision+=Vote(v74,"croatia");
    eurovision+=Vote(v98,"switzerland","croatia","cyrpus","georgia","slovakia","turkey");
    eurovision+=Vote(v37,"ireland","switzerland","georgia","belarus","belgium");
    eurovision+=Vote(v5,"ireland","kazakhastan","sweden","malta","belgium","russia");
    eurovision+=Vote(v52,"turkey","moldova","italy","ireland","kazakhastan","belgium","bosnia");
    eurovision+=Vote(v2,"serbia");
    eurovision+=Vote(v8,"kazakhastan");
    eurovision+=Vote(v88,"hungary");
    eurovision+=Vote(v66,"russia");
    eurovision+=Vote(v97,"serbia","malta","slovakia","serbia","croatia","latvia","luxembourg","israel");
    eurovision+=Vote(v96,"hungary");
    eurovision+=Vote(v67,"norway","slovenia","ukraine","ireland","greece","lithiania");
    eurovision+=Vote(v62,"italy");
    eurovision+=Vote(v92,"lithiania");
    eurovision+=Vote(v48,"israel");
    eurovision+=Vote(v29,"bosnia","netherlands","armenia","kazakhastan","slovakia","georgia","luxembourg","greece");
    eurovision+=Vote(v32,"belgium");
    eurovision+=Vote(v70,"serbia");
    eurovision+=Vote(v7,"belarus");
    eurovision+=Vote(v19,"italy");
    eurovision+=Vote(v81,"italy","latvia","georgia","sweden","france","greece","bulgaria");
    eurovision+=Vote(v15,"switzerland","germany","slovenia","ireland","moldova","estonia","bosnia","slovakia","france");
    eurovision+=Vote(v56,"latvia","croatia");
    eurovision+=Vote(v37,"moldova","switzerland","france","israel","bulgaria","georgia","andora");
    eurovision+=Vote(v27,"italy");
    eurovision+=Vote(v94,"turkey");
    eurovision+=Vote(v63,"slovakia","greece","estonia","malta","spain","andora","russia","bulgaria");
    eurovision+=Vote(v50,"germany","russia","georgia","norway","latvia");
    eurovision+=Vote(v31,"russia");
    eurovision+=Vote(v94,"austria");
    eurovision+=Vote(v84,"france");
    eurovision+=Vote(v74,"serbia");
    eurovision+=Vote(v94,"bulgaria");
    eurovision+=Vote(v77,"cyrpus","serbia");
    eurovision+=Vote(v57,"hungary");
    eurovision+=Vote(v50,"serbia","moldova","greece","estonia","lithiania","turkey","spain","slovakia","france","slovenia");
    eurovision+=Vote(v93,"greece","greece","turkey","luxembourg","italy","france","andora","slovakia","estonia");
    eurovision+=Vote(v23,"moldova");
    eurovision+=Vote(v74,"norway");
    eurovision+=Vote(v15,"serbia","hungary","belarus","armenia","croatia");
    eurovision+=Vote(v20,"italy","russia","bosnia","lithiania","austria");
    eurovision+=Vote(v67,"cyrpus","austria","italy");
    eurovision+=Vote(v80,"switzerland");
    eurovision+=Vote(v77,"netherlands","estonia","malta","israel","latvia");
    eurovision+=Vote(v66,"georgia");
    eurovision+=Vote(v16,"switzerland");
    eurovision+=Vote(v27,"italy");
    eurovision+=Vote(v96,"malta");
    eurovision+=Vote(v1,"norway");
    eurovision+=Vote(v92,"sweden");
    eurovision+=Vote(v36,"bulgaria","austria","spain","belarus");
    eurovision+=Vote(v13,"andora");
    eurovision+=Vote(v96,"greece");
    eurovision+=Vote(v74,"croatia");
    eurovision+=Vote(v68,"sweden");
    eurovision+=Vote(v61,"ukraine","slovenia","france","serbia","sweden","bosnia","cyrpus");
    eurovision+=Vote(v65,"latvia");
    eurovision+=Vote(v70,"armenia");
    eurovision+=Vote(v71,"greece","ukraine","russia","hungary","austria","sweden");
    eurovision+=Vote(v8,"armenia");
    eurovision+=Vote(v20,"croatia","armenia","bosnia","serbia");
    eurovision+=Vote(v97,"greece","germany","serbia");
    eurovision+=Vote(v65,"austria");
    eurovision+=Vote(v56,"estonia","serbia");
    eurovision+=Vote(v6,"belarus");
    eurovision+=Vote(v34,"bosnia");
    eurovision+=Vote(v41,"serbia","belarus","belgium","georgia","moldova","hungary","malta","cyrpus");
    eurovision+=Vote(v63,"latvia","slovenia","greece","lithiania","netherlands","turkey","italy","belarus","moldova","georgia");
    eurovision+=Vote(v57,"serbia");
    eurovision+=Vote(v52,"slovakia","slovenia","russia");
    eurovision+=Vote(v51,"estonia","andora","ireland","serbia","belarus","kazakhastan");
    eurovision+=Vote(v10,"belarus","croatia","russia","austria","israel");
    eurovision+=Vote(v2,"armenia");
    eurovision+=Vote(v62,"spain");
    eurovision+=Vote(v37,"russia","cyrpus","spain","estonia","bulgaria","france","luxembourg");
    eurovision+=Vote(v3,"latvia");
    eurovision+=Vote(v12,"norway");
    eurovision+=Vote(v2,"russia");
    eurovision+=Vote(v68,"slovenia");
    eurovision+=Vote(v37,"hungary","switzerland","israel");
    eurovision+=Vote(v6,"slovakia");
    eurovision+=Vote(v96,"bosnia");
    eurovision+=Vote(v86,"luxembourg","germany","georgia","norway","kazakhastan","belgium","armenia","israel");
    eurovision+=Vote(v43,"spain");
    eurovision+=Vote(v3,"turkey");
    eurovision+=Vote(v97,"israel","andora","spain","cyrpus","greece","moldova","netherlands");
    eurovision+=Vote(v29,"italy","belarus","slovenia","estonia","croatia","russia","andora","bosnia");
    eurovision+=Vote(v20,"switzerland","hungary");
    eurovision+=Vote(v86,"moldova","bulgaria","luxembourg","latvia","belgium","france","lithiania");
    eurovision+=Vote(v30,"georgia");
    eurovision+=Vote(v81,"ukraine","israel","kazakhastan");
    eurovision+=Vote(v68,"ukraine");
    eurovision+=Vote(v19,"malta");
    eurovision+=Vote(v97,"luxembourg","belarus");
    eurovision+=Vote(v38,"spain");
    eurovision+=Vote(v19,"lithiania");
    eurovision+=Vote(v33,"spain");
    eurovision+=Vote(v25,"latvia");
    eurovision+=Vote(v64,"netherlands","lithiania","france","hungary","germany");
    eurovision+=Vote(v3,"netherlands");
    eurovision+=Vote(v95,"greece");
    eurovision+=Vote(v85,"latvia");
    eurovision+=Vote(v35,"georgia");
    eurovision+=Vote(v68,"croatia");
    eurovision+=Vote(v31,"switzerland");
    eurovision+=Vote(v94,"netherlands");
    eurovision+=Vote(v96,"spain");
    eurovision+=Vote(v69,"slovakia");
    eurovision+=Vote(v4,"belgium","austria","norway","lithiania","slovakia");
    eurovision+=Vote(v96,"cyrpus");
    eurovision+=Vote(v63,"switzerland","spain","croatia","armenia","moldova","germany","austria");
    eurovision+=Vote(v34,"spain");
    eurovision+=Vote(v41,"malta","slovakia","estonia","latvia","armenia","lithiania","ukraine");
    eurovision+=Vote(v53,"moldova","belarus");
    eurovision+=Vote(v42,"greece");
    eurovision+=Vote(v63,"bosnia","andora","serbia","switzerland","france");
    eurovision+=Vote(v43,"estonia");
    eurovision+=Vote(v45,"kazakhastan","turkey","spain","france");
    eurovision+=Vote(v75,"ukraine");
    eurovision+=Vote(v94,"hungary");
    eurovision+=Vote(v27,"croatia");
    eurovision+=Vote(v28,"austria");
    eurovision+=Vote(v75,"russia");
    eurovision+=Vote(v80,"croatia");
    eurovision+=Vote(v9,"moldova");
    eurovision+=Vote(v4,"russia","slovakia","latvia","germany");
    eurovision+=Vote(v84,"hungary");
    eurovision+=Vote(v31,"latvia");
    eurovision+=Vote(v57,"croatia");
    eurovision+=Vote(v23,"sweden");
    eurovision+=Vote(v37,"norway","belgium","greece");
    eurovision+=Vote(v15,"ukraine","serbia","israel","georgia","croatia");
    eurovision+=Vote(v71,"lithiania","luxembourg","turkey","hungary","russia");
    eurovision+=Vote(v26,"spain","slovakia","sweden","georgia","turkey","ukraine","slovenia","norway");
    eurovision+=Vote(v33,"austria");
    eurovision+=Vote(v33,"greece");
    eurovision+=Vote(v51,"latvia","croatia");
    eurovision+=Vote(v86,"norway","russia","croatia","belgium","slovakia","sweden","italy");
    eurovision+=Vote(v96,"austria");
    eurovision+=Vote(v48,"malta");
    eurovision+=Vote(v57,"serbia");
    eurovision+=Vote(v47,"spain","slovenia");
    eurovision+=Vote(v21,"austria","norway","israel","russia","armenia");
    eurovision+=Vote(v15,"france","cyrpus","croatia");
    eurovision+=Vote(v50,"croatia","lithiania","ukraine","armenia","latvia");
    eurovision+=Vote(v25,"sweden");
    eurovision+=Vote(v97,"georgia","ukraine","kazakhastan","ireland","serbia","bulgaria","france");
    eurovision+=Vote(v75,"armenia");
    eurovision+=Vote(v69,"bosnia");
    eurovision+=Vote(v26,"turkey","slovakia","norway","sweden","greece","moldova");
    eurovision+=Vote(v34,"netherlands");
    eurovision+=Vote(v94,"france");
    eurovision+=Vote(v47,"bulgaria","bosnia");
    eurovision+=Vote(v45,"ukraine","switzerland","belarus","germany","russia");
    eurovision+=Vote(v59,"croatia");
    eurovision+=Vote(v38,"croatia");
    eurovision+=Vote(v29,"estonia","belarus","bulgaria");
    eurovision+=Vote(v14,"serbia");
    eurovision+=Vote(v89,"lithiania","switzerland","austria","russia","belarus","germany","georgia","croatia");
    eurovision+=Vote(v17,"greece","kazakhastan");
    eurovision+=Vote(v24,"hungary","ireland","italy","moldova","sweden","serbia","belarus");
    eurovision+=Vote(v92,"malta");
    eurovision+=Vote(v25,"sweden");
    eurovision+=Vote(v11,"serbia");
    eurovision+=Vote(v59,"estonia");
    eurovision+=Vote(v46,"luxembourg","malta");
    eurovision+=Vote(v68,"turkey");
    eurovision+=Vote(v62,"slovenia");
    eurovision+=Vote(v56,"bosnia","greece","kazakhastan","turkey","georgia","netherlands");
    eurovision+=Vote(v60,"ireland");
    eurovision+=Vote(v95,"belarus");
    eurovision+=Vote(v69,"malta");
    eurovision+=Vote(v89,"andora","moldova","slovakia","israel","belgium","hungary","estonia","italy","belarus");
    eurovision+=Vote(v98,"italy","latvia");
    eurovision+=Vote(v52,"armenia","malta","andora","croatia");
    eurovision+=Vote(v51,"latvia","serbia","slovenia","turkey","estonia","hungary","germany","cyrpus");
    eurovision+=Vote(v19,"slovakia");
    eurovision+=Vote(v33,"slovenia");
    eurovision+=Vote(v46,"luxembourg","belarus","russia","belgium","sweden","kazakhastan","israel","norway");
    eurovision+=Vote(v71,"luxembourg","andora","bulgaria","hungary","sweden","latvia");
    eurovision+=Vote(v41,"andora","malta");
    cout<<eurovision<<endl;
    fclose(stdout);

}
