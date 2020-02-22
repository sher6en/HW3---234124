#include <iostream>
#include "eurovision.h"

int main(){
	
	Participant p34("germany", "song_germany", 137, "singer_germany");

    {
    MainControl eurovision;
    Participant p1("spain", "song_spain", 112, "singer_spain");
    cout << p1 << endl;
    Participant p2("croatia", "song_croatia", 178, "singer_croatia");
    cout << p2 << endl;
    Participant p3("russia", "song_russia", 144, "singer_russia");
    cout << p3 << endl;
    Participant p4("bulgaria", "song_bulgaria", 146, "singer_bulgaria");
    cout << p4 << endl;
    Participant p5("greece", "song_greece", 230, "singer_greece");
    cout << p5 << endl;
    Participant p6("ireland", "song_ireland", 149, "singer_ireland");
    cout << p6 << endl;
    Participant p7("austria", "song_austria", 175, "singer_austria");
    cout << p7 << endl;
    Participant p8("italy", "song_italy", 155, "singer_italy");
    cout << p8 << endl;
    Participant p9("croatia", "song_croatia", 163, "singer_croatia");
    cout << p9 << endl;
    Participant p10("moldova", "song_moldova", 148, "singer_moldova");
    cout << p10 << endl;
    Participant p11("italy", "song_italy", 189, "singer_italy");
    cout << p11 << endl;
    Participant p12("luxembourg", "song_luxembourg", 127, "singer_luxembourg");
    cout << p12 << endl;
    Participant p13("ireland", "song_ireland", 116, "singer_ireland");
    cout << p13 << endl;
    Participant p14("bulgaria", "song_bulgaria", 113, "singer_bulgaria");
    cout << p14 << endl;
    Participant p15("greece", "song_greece", 221, "singer_greece");
    cout << p15 << endl;
    Participant p16("bulgaria", "song_bulgaria", 173, "singer_bulgaria");
    cout << p16 << endl;
    Participant p17("cyrpus", "song_cyrpus", 138, "singer_cyrpus");
    cout << p17 << endl;
    Participant p18("kazakhastan", "song_kazakhastan", 123,
                    "singer_kazakhastan");
    cout << p18 << endl;
    Participant p19("norway", "song_norway", 208, "singer_norway");
    cout << p19 << endl;
    Participant p20("ireland", "song_ireland", 141, "singer_ireland");
    cout << p20 << endl;
    Participant p21("belarus", "song_belarus", 184, "singer_belarus");
    cout << p21 << endl;
    Participant p22("bosnia", "song_bosnia", 230, "singer_bosnia");
    cout << p22 << endl;
    Participant p23("bulgaria", "song_bulgaria", 141, "singer_bulgaria");
    cout << p23 << endl;
    Participant p24("spain", "song_spain", 110, "singer_spain");
    cout << p24 << endl;
    Participant p25("serbia", "song_serbia", 170, "singer_serbia");
    cout << p25 << endl;
    Participant p26("estonia", "song_estonia", 199, "singer_estonia");
    cout << p26 << endl;
    Participant p27("uk", "song_uk", 151, "singer_uk");
    cout << p27 << endl;
    Participant p28("belarus", "song_belarus", 121, "singer_belarus");
    cout << p28 << endl;
    Participant p29("netherlands", "song_netherlands", 180,
                    "singer_netherlands");
    cout << p29 << endl;
    Participant p30("russia", "song_russia", 148, "singer_russia");
    cout << p30 << endl;
    Participant p31("slovakia", "song_slovakia", 147, "singer_slovakia");
    cout << p31 << endl;
    Participant p32("russia", "song_russia", 186, "singer_russia");
    cout << p32 << endl;
    Participant p33("sweden", "song_sweden", 101, "singer_sweden");
    cout << p33 << endl;
    cout << p34 << endl;
    Participant p35("uk", "song_uk", 164, "singer_uk");
    cout << p35 << endl;
    Participant p36("luxembourg", "song_luxembourg", 189, "singer_luxembourg");
    cout << p36 << endl;
    p30.update("new_song", 0, "");
    p10.update("new_song", 0, "");
    p23.update("new_song", 0, "");
    p15.update("new_song", 0, "");
    p26.update("new_song", 0, "newsinger");
    p1.update("new_song", 0, "newsinger");
    p24.update("new_song", 0, "newsinger");
    p36.update("new_song", 0, "newsinger");
    p21.update("new_song", 187, "newsinger");
    p25.update("new_song", 144, "newsinger");
    p36.update("new_song", 106, "newsinger");
    p32.update("new_song", 102, "newsinger");
    cout << eurovision << endl;
    eurovision += p34;
    cout << eurovision.participate("germany") << endl;
    eurovision += p24;
    eurovision += p25;
    eurovision += p34;
    eurovision += p34;
    eurovision += p4;
    eurovision += p2;
    eurovision += p26;
    eurovision += p20;
    eurovision += p16;
    eurovision += p20;
    eurovision += p21;
    eurovision += p13;
    eurovision += p20;
    cout << eurovision << endl;
    eurovision += p14;
    eurovision -= p24;
    eurovision -= p13;
    eurovision -= p17;
    eurovision += p26;
    eurovision += p20;
    eurovision -= p2;
    eurovision += p12;
    eurovision += p14;
    eurovision += p29;
    eurovision += p35;
    eurovision -= p24;
    eurovision -= p35;
    eurovision -= p20;
    eurovision += p5;
    eurovision += p11;
    eurovision += p21;
    eurovision -= p3;
    eurovision -= p5;
    eurovision += p24;
    eurovision -= p14;
    eurovision -= p17;
    eurovision -= p15;
    eurovision += p16;
    cout << eurovision << endl;
    ((((((eurovision += p36) -= p31) -= p14) -= p14) -= p21) += p17) += p12;
    MainControl::Iterator i;
    for (i = eurovision.begin(); i < eurovision.end(); ++i)
        cout << *i << endl;
    for (i = eurovision.begin(); !(i == eurovision.end()); ++i)
        cout << *i << endl;
    eurovision.setPhase(Contest);
    cout << eurovision << endl;
    eurovision.setPhase(Voting);
    eurovision.participate("netherlands");
    eurovision.participate("croatia");
    eurovision.participate("lithiania");
    eurovision.participate("austria");
    eurovision.participate("israel");
    eurovision.participate("turkey");
    eurovision.participate("uk");
    eurovision.participate("armenia");
    eurovision.participate("kazakhastan");
    eurovision.participate("cyrpus");
    eurovision.participate("israel");
    eurovision.participate("spain");
    eurovision.participate("serbia");
    eurovision.participate("bosnia");
    p14.update("", 120, "");
    cout << p14 << endl;
    p25.update("", 120, "");
    cout << p25 << endl;
    p3.update("", 120, "");
    cout << p3 << endl;
    p31.update("", 120, "");
    cout << p31 << endl;
    p28.update("", 120, "");
    cout << p28 << endl;
    p12.update("", 120, "");
    cout << p12 << endl;
    p25.update("", 120, "");
    cout << p25 << endl;
    p35.update("", 120, "");
    cout << p35 << endl;
    p21.update("", 120, "");
    cout << p21 << endl;
    p4.update("", 120, "");
    cout << p4 << endl;
    p25.update("", 120, "");
    cout << p25 << endl;
    p17.update("", 120, "");
    cout << p17 << endl;
    p29.update("", 120, "");
    cout << p29 << endl;
    p18.update("", 120, "");
    cout << p18 << endl;
    Voter v1("israel");
    Voter v2("russia", Regular);
    Voter v3("switzerland", Judge);
    Voter v4("spain");
    Voter v5("slovakia", Regular);
    Voter v6("slovenia", Judge);
    Voter v7("malta", Regular);
    Voter v8("turkey", Judge);
    Voter v9("spain", Regular);
    Voter v10("uk", Judge);
    Voter v11("italy", Judge);
    Voter v12("croatia", Regular);
    Voter v13("kazakhastan", Regular);
    Voter v14("andora");
    Voter v15("uk", Judge);
    Voter v16("andora");
    Voter v17("uk", Regular);
    Voter v18("ukraine", Judge);
    Voter v19("italy", Judge);
    Voter v20("slovakia");
    Voter v21("armenia", Regular);
    Voter v22("belarus");
    Voter v23("sweden", Regular);
    Voter v24("bulgaria", Regular);
    Voter v25("moldova", Regular);
    Voter v26("france", Regular);
    Voter v27("norway", Regular);
    Voter v28("bosnia");
    Voter v29("bulgaria", Judge);
    Voter v30("belgium");
    Voter v31("slovenia", Judge);
    Voter v32("latvia");
    Voter v33("belgium", Judge);
    Voter v34("belgium");
    Voter v35("italy", Judge);
    Voter v36("bosnia");
    Voter v37("ukraine", Regular);
    Voter v38("spain");
    Voter v39("serbia", Judge);
    Voter v40("russia", Judge);
    Voter v41("netherlands", Regular);
    Voter v42("slovenia", Regular);
    Voter v43("bosnia", Judge);
    Voter v44("luxembourg", Judge);
    Voter v45("luxembourg", Regular);
    Voter v46("italy");
    Voter v47("cyrpus", Regular);
    Voter v48("sweden");
    Voter v49("switzerland", Judge);
    Voter v50("turkey", Judge);
    Voter v51("moldova");
    Voter v52("israel", Regular);
    Voter v53("cyrpus");
    Voter v54("malta", Judge);
    Voter v55("kazakhastan", Regular);
    Voter v56("slovakia", Judge);
    Voter v57("belgium", Regular);
    Voter v58("norway", Regular);
    Voter v59("netherlands", Judge);
    Voter v60("latvia", Judge);
    Voter v61("greece", Judge);
    Voter v62("bosnia", Judge);
    Voter v63("belgium", Regular);
    Voter v64("sweden");
    Voter v65("greece", Judge);
    Voter v66("serbia");
    Voter v67("moldova", Regular);
    Voter v68("luxembourg");
    Voter v69("bulgaria", Judge);
    Voter v70("moldova");
    Voter v71("greece", Regular);
    Voter v72("lithiania");
    Voter v73("luxembourg");
    Voter v74("germany");
    Voter v75("russia");
    Voter v76("slovakia", Regular);
    Voter v77("ireland", Regular);
    Voter v78("kazakhastan", Regular);
    Voter v79("croatia");
    Voter v80("latvia", Regular);
    Voter v81("sweden", Judge);
    Voter v82("austria", Judge);
    Voter v83("austria", Judge);
    Voter v84("cyrpus");
    Voter v85("kazakhastan", Judge);
    Voter v86("serbia", Regular);
    Voter v87("latvia", Judge);
    Voter v88("belarus");
    Voter v89("belarus", Judge);
    Voter v90("belarus");
    Voter v91("bosnia", Judge);
    Voter v92("georgia", Regular);
    Voter v93("norway", Judge);
    Voter v94("russia", Regular);
    Voter v95("austria", Judge);
    Voter v96("israel", Regular);
    Voter v97("france", Regular);
    Voter v98("cyrpus", Regular);
    Voter v99("israel", Judge);
    cout << eurovision << endl;
    eurovision += Vote(v67, "italy");
    eurovision += Vote(v79, "germany");
    eurovision += Vote(v51, "belgium");
    eurovision += Vote(v26, "andora");
    eurovision += Vote(v57, "france");
    eurovision += Vote(v89, "belarus", "sweden", "spain", "luxembourg",
                       "israel");
    eurovision += Vote(v11, "austria", "italy", "malta", "estonia", "greece");
    eurovision += Vote(v36, "bosnia");
    eurovision += Vote(v89, "bulgaria", "slovenia", "greece", "armenia");
    eurovision += Vote(v41, "luxembourg");
    eurovision += Vote(v80, "moldova");
    eurovision += Vote(v78, "bulgaria");
    eurovision += Vote(v48, "latvia");
    eurovision += Vote(v9, "germany");
    eurovision += Vote(v84, "gema");
    eurovision += Vote(v71, "germany");
    eurovision += Vote(v36, "germany");
    eurovision += Vote(v66, "serbia");
    eurovision += Vote(v48, "bosnia");
    eurovision += Vote(v64, "norway");
    eurovision += Vote(v5, "turkey");
    eurovision += Vote(v68, "serbia");
    eurovision += Vote(v83, "netherlands", "sweden", "ireland", "hungary");
    eurovision += Vote(v19, "ireland", "slovenia", "moldova");
    eurovision += Vote(v27, "luxembourg");
    eurovision += Vote(v37, "serbia");
    eurovision += Vote(v89, "malta", "switzerland", "russia", "lithiania",
                       "turkey", "sweden", "bosnia");
    eurovision += Vote(v23, "georgia");
    eurovision += Vote(v73, "netherlands");
    eurovision += Vote(v91, "hungary", "slovenia");
    eurovision += Vote(v78, "germany");
    eurovision += Vote(v72, "andora");
    eurovision += Vote(v29, "italy", "greece", "norway", "serbia", "luxembourg",
                       "moldova", "turkey");
    eurovision += Vote(v90, "ireland");
    eurovision += Vote(v2, "france");
    eurovision += Vote(v34, "malta");
    eurovision += Vote(v49, "slovakia", "kazakhastan", "germany", "belarus");
    eurovision += Vote(v21, "ireland");
    eurovision += Vote(v5, "latvia");
    eurovision += Vote(v14, "bosnia");
    eurovision += Vote(v38, "ukraine");
    eurovision += Vote(v64, "slovakia");
    eurovision += Vote(v68, "slovenia");
    eurovision += Vote(v33, "malta");
    eurovision += Vote(v61, "switzerland", "andora", "ukraine", "slovenia",
                       "malta");
    eurovision += Vote(v23, "bosnia");
    eurovision += Vote(v38, "moldova");
    eurovision += Vote(v40, "croatia", "andora", "greece", "sweden", "germany",
                       "austria", "ukraine", "france", "russia", "luxembourg");
    eurovision += Vote(v20, "norway");
    eurovision += Vote(v64, "estonia");
    eurovision += Vote(v92, "spain");
    eurovision += Vote(v50, "austria", "turkey", "italy", "ireland", "estonia",
                       "germany", "croatia");
    eurovision += Vote(v68, "netherlands");
    eurovision += Vote(v95, "lithiania", "spain", "netherlands", "belarus",
                       "germany", "russia", "moldova", "croatia");
    eurovision += Vote(v14, "malta");
    eurovision += Vote(v97, "belarus");
    eurovision += Vote(v79, "armenia");
    eurovision += Vote(v56, "israel", "andora", "hungary", "slovenia", "latvia",
                       "cyrpus", "ukraine", "ireland", "spain");
    eurovision += Vote(v77, "russia");
    eurovision += Vote(v53, "moldova");
    eurovision += Vote(v18, "slovenia", "kazakhastan", "italy", "bulgaria",
                       "norway", "lithiania", "spain", "germany", "croatia");
    eurovision += Vote(v56, "israel");
    eurovision += Vote(v44, "israel", "ukraine", "italy", "serbia");
    eurovision += Vote(v4, "france");
    eurovision += Vote(v42, "turkey");
    eurovision += Vote(v76, "latvia");
    eurovision += Vote(v30, "slovakia");
    eurovision += Vote(v2, "russia");
    eurovision += Vote(v48, "georgia");
    eurovision += Vote(v4, "slovakia");
    eurovision += Vote(v57, "armenia");
    eurovision += Vote(v42, "france");
    eurovision += Vote(v8, "italy", "slovenia", "kazakhastan", "bosnia",
                       "malta", "croatia", "luxembourg", "switzerland");
    eurovision += Vote(v93, "cyrpus");
    eurovision += Vote(v95, "ireland", "armenia");
    eurovision += Vote(v28, "andora");
    eurovision += Vote(v38, "netherlands");
    eurovision += Vote(v45, "switzerland");
    eurovision += Vote(v19, "cyrpus", "serbia", "andora", "kazakhastan",
                       "lithiania", "sweden", "belgium");
    eurovision += Vote(v63, "turkey");
    eurovision += Vote(v44, "ireland", "estonia", "belarus", "hungary",
                       "armenia", "malta");
    eurovision += Vote(v24, "luxembourg");
    eurovision += Vote(v55, "georgia");
    eurovision += Vote(v98, "cyrpus");
    eurovision += Vote(v16, "georgia");
    eurovision += Vote(v24, "netherlands");
    eurovision += Vote(v13, "belarus");
    eurovision += Vote(v23, "italy");
    eurovision += Vote(v19, "norway", "armenia", "belarus", "andora");
    eurovision += Vote(v32, "lithiania");
    eurovision += Vote(v83, "switzerland", "spain", "sweden", "bosnia",
                       "serbia", "turkey", "malta", "netherlands", "belgium");
    eurovision += Vote(v15, "kazakhastan");
    eurovision += Vote(v73, "switzerland");
    eurovision += Vote(v62, "malta", "belarus", "greece", "moldova",
                       "switzerland", "netherlands", "hungary", "ukraine");
    eurovision += Vote(v62, "hungary", "ireland", "malta", "russia", "bulgaria",
                       "croatia", "slovakia", "serbia", "ukraine");
    eurovision += Vote(v29, "israel", "croatia", "serbia", "turkey");
    eurovision += Vote(v38, "norway");
    eurovision += Vote(v50, "france", "sweden");
    eurovision += Vote(v82, "malta");
    eurovision += Vote(v75, "turkey");
    eurovision += Vote(v24, "israel");
    eurovision += Vote(v69, "spain", "sweden", "austria", "belgium", "ukraine",
                       "slovakia", "georgia", "slovenia", "netherlands");
    eurovision += Vote(v77, "germany");
    eurovision += Vote(v1, "latvia");
    eurovision += Vote(v16, "andora");
    eurovision += Vote(v94, "estonia");
    eurovision += Vote(v17, "slovakia");
    eurovision += Vote(v63, "austria");
    eurovision += Vote(v46, "andora");
    eurovision += Vote(v15, "cyrpus", "italy", "serbia", "bosnia");
    eurovision += Vote(v36, "andora");
    eurovision += Vote(v56, "greece", "sweden");
    eurovision += Vote(v28, "estonia");
    eurovision += Vote(v78, "bulgaria");
    eurovision += Vote(v46, "armenia");
    eurovision += Vote(v69, "spain", "sweden", "belarus");
    eurovision += Vote(v73, "italy");
    eurovision += Vote(v22, "italy");
    eurovision += Vote(v82, "latvia", "georgia", "germany", "armenia", "turkey",
                       "luxembourg");
    eurovision += Vote(v86, "norway");
    eurovision += Vote(v95, "georgia", "netherlands");
    eurovision += Vote(v41, "austria");
    eurovision += Vote(v70, "sweden");
    eurovision += Vote(v95, "spain", "russia", "belarus");
    eurovision += Vote(v19, "croatia", "slovenia", "georgia", "israel",
                       "luxembourg", "bulgaria", "greece", "belarus",
                       "ukraine");
    eurovision += Vote(v47, "belgium");
    eurovision += Vote(v32, "germany");
    eurovision += Vote(v8, "georgia", "lithiania", "germany", "moldova",
                       "norway", "greece", "hungary", "israel");
    eurovision += Vote(v70, "estonia");
    eurovision += Vote(v32, "malta");
    eurovision += Vote(v22, "slovakia");
    eurovision += Vote(v99, "switzerland", "hungary");
    eurovision += Vote(v40, "bosnia");
    eurovision += Vote(v47, "andora");
    eurovision += Vote(v74, "serbia");
    eurovision += Vote(v56, "switzerland", "serbia", "israel", "slovenia",
                       "latvia", "estonia");
    eurovision += Vote(v47, "norway");
    eurovision += Vote(v90, "luxembourg");
    eurovision += Vote(v3, "turkey");
    eurovision += Vote(v36, "cyrpus");
    eurovision += Vote(v23, "slovakia");
    eurovision += Vote(v13, "sweden");
    eurovision += Vote(v2, "bosnia");
    eurovision += Vote(v73, "estonia");
    eurovision += Vote(v39, "kazakhastan", "luxembourg", "norway", "georgia");
    eurovision += Vote(v16, "austria");
    eurovision += Vote(v51, "germany");
    eurovision += Vote(v90, "serbia");
    eurovision += Vote(v10, "spain", "greece", "italy", "ukraine", "france",
                       "cyrpus", "bosnia", "kazakhastan", "slovakia",
                       "bulgaria");
    eurovision += Vote(v90, "sweden");
    eurovision += Vote(v83, "netherlands", "slovenia", "russia");
    eurovision += Vote(v31, "belarus", "serbia", "france");
    eurovision += Vote(v51, "bulgaria");
    eurovision += Vote(v96, "belarus");
    eurovision += Vote(v54, "luxembourg", "slovenia", "estonia");
    eurovision += Vote(v41, "slovenia");
    eurovision += Vote(v23, "georgia");
    eurovision += Vote(v16, "russia");
    eurovision += Vote(v63, "bulgaria");
    eurovision += Vote(v97, "israel");
    eurovision += Vote(v19, "belgium", "armenia", "malta");
    eurovision += Vote(v44, "austria", "turkey", "bosnia", "luxembourg");
    eurovision += Vote(v34, "slovenia");
    eurovision += Vote(v30, "austria");
    eurovision += Vote(v4, "luxembourg");
    eurovision += Vote(v61, "hungary", "israel");
    eurovision += Vote(v59, "norway");
    eurovision += Vote(v24, "norway");
    eurovision += Vote(v69, "hungary");
    eurovision += Vote(v39, "israel", "spain", "bulgaria", "cyrpus",
                       "slovakia");
    eurovision += Vote(v28, "cyrpus");
    eurovision += Vote(v34, "serbia");
    eurovision += Vote(v52, "estonia");
    eurovision += Vote(v73, "ireland");
    eurovision += Vote(v85, "moldova", "serbia", "greece", "armenia",
                       "switzerland", "cyrpus");
    eurovision += Vote(v62, "luxembourg", "france");
    eurovision += Vote(v93, "italy", "belgium", "ireland", "luxembourg",
                       "lithiania");
    eurovision += Vote(v32, "netherlands");
    eurovision += Vote(v20, "france");
    eurovision += Vote(v92, "moldova");
    eurovision += Vote(v40, "luxembourg", "georgia", "andora", "spain");
    eurovision += Vote(v60, "estonia", "ireland", "andora");
    eurovision += Vote(v18, "malta", "netherlands", "bulgaria", "luxembourg",
                       "bosnia", "greece", "georgia", "moldova");
    eurovision += Vote(v52, "hungary");
    eurovision += Vote(v52, "georgia");
    eurovision += Vote(v75, "ukraine");
    eurovision += Vote(v8, "russia", "greece", "germany", "france", "italy",
                       "estonia", "netherlands", "lithiania");
    eurovision += Vote(v59, "norway", "netherlands", "moldova", "turkey",
                       "bulgaria", "ukraine", "sweden", "slovakia", "georgia");
    eurovision += Vote(v10, "cyrpus", "russia", "luxembourg", "germany",
                       "moldova", "netherlands", "andora");
    eurovision += Vote(v41, "lithiania");
    eurovision += Vote(v53, "russia");
    eurovision += Vote(v50, "greece");
    eurovision += Vote(v5, "kazakhastan");
    eurovision += Vote(v89, "norway", "belarus");
    eurovision += Vote(v99, "estonia");
    eurovision += Vote(v48, "bosnia");
    eurovision += Vote(v10, "bosnia", "netherlands", "georgia", "bulgaria",
                       "france", "sweden", "israel", "estonia");
    eurovision += Vote(v52, "croatia");
    eurovision += Vote(v37, "ukraine");
    p26.update("shouldnot", 143, "error");
    cout << p26 << endl;
    p19.update("shouldnot", 143, "error");
    cout << p19 << endl;
    p21.update("shouldnot", 143, "error");
    cout << p21 << endl;
    p24.update("shouldnot", 143, "error");
    cout << p24 << endl;
    p23.update("shouldnot", 143, "error");
    cout << p23 << endl;
    p23.update("shouldnot", 143, "error");
    cout << p23 << endl;
    p6.update("shouldnot", 143, "error");
    cout << p6 << endl;
    p19.update("shouldnot", 143, "error");
    cout << p19 << endl;
    p26.update("shouldnot", 143, "error");
    cout << p26 << endl;
    p31.update("shouldnot", 143, "error");
    cout << p31 << endl;
    p22.update("shouldnot", 143, "error");
    cout << p22 << endl;
    p24.update("shouldnot", 143, "error");
    cout << p24 << endl;
    p28.update("shouldnot", 143, "error");
    cout << p28 << endl;
    p22.update("shouldnot", 143, "error");
    cout << p22 << endl;
    cout << eurovision << endl;
    cout << eurovision(1, Regular) << endl;
    cout << eurovision(2, Regular) << endl;
    cout << eurovision(3, Regular) << endl;
    cout << eurovision(4, Regular) << endl;
    cout << eurovision(5, Regular) << endl;
    cout << eurovision(6, Regular) << endl;
    cout << eurovision(7, Regular) << endl;
    cout << eurovision(8, Regular) << endl;
    cout << eurovision(9, Regular) << endl;
    cout << eurovision(10, Regular) << endl;
    cout << eurovision(1, Judge) << endl;
    cout << eurovision(2, Judge) << endl;
    cout << eurovision(3, Judge) << endl;
    cout << eurovision(4, Judge) << endl;
    cout << eurovision(5, Judge) << endl;
    cout << eurovision(6, Judge) << endl;
    cout << eurovision(7, Judge) << endl;
    cout << eurovision(8, Judge) << endl;
    cout << eurovision(9, Judge) << endl;
    cout << eurovision(10, Judge) << endl;
    cout << eurovision(1, All) << endl;
    cout << eurovision(2, All) << endl;
    cout << eurovision(3, All) << endl;
    cout << eurovision(4, All) << endl;
    cout << eurovision(5, All) << endl;
    cout << eurovision(6, All) << endl;
    cout << eurovision(7, All) << endl;
    cout << eurovision(8, All) << endl;
    cout << eurovision(9, All) << endl;
    cout << eurovision(10, All) << endl;
    cout << eurovision << endl;
    cout<<p34.isRegistered()<<endl;
}
MainControl eurovisioncheck;
    cout<<p34.isRegistered()<<endl;
    eurovisioncheck+=p34;
    cout<<eurovisioncheck.participate("germany")<<endl;
    cout<<eurovisioncheck<<endl;
    eurovisioncheck.setPhase(Contest);
    eurovisioncheck.setPhase(Voting);
    eurovisioncheck.setPhase(Contest);
    cout<<eurovisioncheck<<endl;
    cout<<eurovisioncheck(1,All)<<endl;
	
	return 1;
}