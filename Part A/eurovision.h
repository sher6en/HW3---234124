#ifndef EUROVISION_H_
#define EUROVISION_H_

#include <iostream>
#include <string>

using std::string;

// it's allowed to define here any using statements, according to needs.
// do NOT define here : using namespace std;

//---------------------------------------------------

enum VoterType { All, Regular, Judge };
/*enum Phase { Registration, Contest, Voting };*/

//---------------------------------------------------
/*
class Participant
{
// relevant private members can be defined here, if necessary.

public :

// need to define here possibly c'tr and d'tr and ONLY methods that
// are mentioned and demonstrated in the test example that has been published.
// NO OTHER METHODS SHOULD APPEAR HERE.

// NO friend is allowed here.

};
*/
//---------------------------------------------------


class Voter
{
	string country_name; //Possibly Const, Check.
	VoterType type;
	int number_of_votes;

public:

    Voter(string country_name, VoterType type = Regular);
    ~Voter() = default;
    friend std::ostream& operator<<(std::ostream& os, const Voter& voter); //Doesn't there need to be a deceleration? + I don't think this needs friend
    Voter& operator++(); //Check if "return this;" is good. + I think this needs friend.

    string state() const;
    int timesOfVotes() const;
    VoterType voterType() const;
};


// -----------------------------------------------------------
/*
struct Vote
{

// ALL is public here.
// need to define ONLY data members and c'tr and d'tr.
// NO NEED to define anything else.

	Participant reciver;
	Voter giver;

	Vote(Participant participant, Voter voter) : reciver(participant), giver(voter){ };
	//Check if this need a copy constructor from Participant and Voter
	//and this may cause problems.
	~Vote() = default;
};
*/
// -----------------------------------------------------------
/*

class MainControl
{
// relevant private members can be defined here, if necessary.

public :

// need to define here possibly c'tr and d'tr and ONLY methods that
// are mentioned and demonstrated in the test example that has been published.
// NO OTHER METHODS SHOULD APPEAR HERE.

// Also it's allowed here to define friend.

};
*/
// -----------------------------------------------------------

#endif
