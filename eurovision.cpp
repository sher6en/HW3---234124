#include <iostream>
#include <string> //Check if needed.
#include "eurovision.h"

using std::cout;
using std::endl;

//Voter functions:

Voter::Voter(string country_name, VoterType type) :
             country_name(country_name), type(type), number_of_votes(0) {}

std::ostream& operator<<(std::ostream& os, const Voter& voter) {
    os <<"<"<< voter.state() <<"/"<< voter.voterType() <<">";
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

//End of Voter functions.