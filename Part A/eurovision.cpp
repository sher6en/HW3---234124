#include <iostream>
#include <string> //Check if needed.
#include "eurovision.h"

using std::cout;
using std::endl;

//==============================================================================Participant functions:
Participant::Participant(string country_name, string song_name,
                        int time_length, string singer_name) :
            country_name(country_name), song_name(song_name), time_length(time_length), singer_name(singer_name),
            registered(false) {}

std::ostream& operator<<(std::ostream& os, const Participant& participant) {
    os << "[" << participant.country_name
        << "/" << participant.song_name
        << "/" << participant.time_length
        << "/" << participant.singer_name
        << "]";
    return os;
}

string Participant::state() {
    return country_name;
}

string Participant::song() {
    return song_name;
}

int Participant::timeLength() {
    return time_length;
}

string Participant::singer() {
    return singer_name;
}

bool Participant::isRegistered() {
    return registered;
}

void Participant::update(string song_name, int time_length, string singer_name){
    if (this->isRegistered()) {
        return;
    }
    if (song_name != "")
        this->song_name = song_name;
    if (time_length != 0)
        this->time_length = time_length;
    if (singer_name != "")
        this->singer_name = singer_name;
}

void Participant::updateRegistered(bool condition) {
    registered = condition;
}
//==============================================================================End of Participant functions.


//==============================================================================Voter functions:

Voter::Voter(string country_name, VoterType type) :
             country_name(country_name), type(type), number_of_votes(0) {}

std::ostream& operator<<(std::ostream& os, const Voter& voter) {
    string type_of_voter = (voter.voterType() == Regular) ? "Regular" : "Judge"; //Check collision with all.
    os <<"<"<< voter.state() <<"/"<< type_of_voter <<">";
    return os;
}

Voter& Voter::operator++() { //Check if "return this;" is good. + I think this needs friend.
    ++number_of_votes;
    return *this;
}

string Voter::state() const {
    return country_name;
}

int Voter::timesOfVotes() const {
    return number_of_votes;
}

VoterType Voter::voterType() const {
    return type;
}

//==============================================================================End of Voter functions.

//==============================================================================MainControl functions:

MainControl::MainControl(int song_time, int max_participants, int max_vote_amount) : //Check default argument decleraction doesnt need to be here.
					participants(new Participant* [max_participants]), votes(new int [max_participants]),
					current_phase(Registration), max_participants(max_participants), max_song_time(song_time),
					max_vote_amount(max_vote_amount) {
						for (int i = 0; i<max_participants; i++) {
							participants[i] = NULL; //Check this is actually needed.
						}
					}
MainControl::~MainControl() {
	delete[] participants;
	delete[] votes;
}

//==============================================================================End of MainControl functions.






























