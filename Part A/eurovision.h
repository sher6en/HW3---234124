#ifndef EUROVISION_H_
#define EUROVISION_H_

#include <iostream>
#include <string>

using std::string;

// it's allowed to define here any using statements, according to needs.
// do NOT define here : using namespace std;

//---------------------------------------------------

enum VoterType { All, Regular, Judge };
enum Phase { Registration, Contest, Voting };

//---------------------------------------------------

class Participant
{
// relevant private members can be defined here, if necessary.
    string country_name;
    string song_name;
    int time_length;
    string singer_name;
    bool registered;

public:
    Participant(string country_name, string song_name, int time_length,
            string singer_name);
    Participant() = delete;
    ~Participant() = default;
    friend std::ostream& operator<<(std::ostream& os, const Participant& participant); //Check how to remove friend because its not allowed.
    string state();
    string song();
    int timeLength();
    string singer();
    bool isRegistered();
    void update(string song_name, int time_length, string singer_name);
    void updateRegistered(bool condition);


// need to define here possibly c'tr and d'tr and ONLY methods that
// are mentioned and demonstrated in the test example that has been published.
// NO OTHER METHODS SHOULD APPEAR HERE.

// NO friend is allowed here.

};

//---------------------------------------------------


class Voter
{
	string country_name; //Possibly Const, Check.
	VoterType type;
	int number_of_votes;

public:

    Voter(string country_name, VoterType type = Regular);
    ~Voter() = default;
    friend std::ostream& operator<<(std::ostream& os, const Voter& voter); //Check how to remove friend because its not allowed.
    Voter& operator++(); //Check if "return this;" is good. + I think this needs friend.

    string state() const;
    int timesOfVotes() const;
    VoterType voterType() const;
};


// -----------------------------------------------------------

struct Vote
{

// ALL is public here.
// need to define ONLY data members and c'tr and d'tr.
// NO NEED to define anything else.

	Participant reciver;
	Voter giver;
	
	//Check if there really needs to be a 10 argument c'tor with 9 default arguments.
	Vote(Participant participant, Voter voter) : reciver(participant), giver(voter) {}
	~Vote() = default;
};

// -----------------------------------------------------------


class MainControl
{

	Participant* participants; //participants[i] = i'th participant.
	int votes; //votes[i] = votes given to i'th participant.
	Phase current_phase;
	int max_participants;
	int max_song_time;
	int max_vote_amount;

public:

	MainControl(int song_time = 180, int max_participants = 26, int max_vote_amount = 5);
	~MainControl();
	
	MainControl& operator+=(const Participant& participant); //Check if const place is correct.
	MainControl& operator+=(const Vote& vote);
	MainControl& operator-=(const Participant& participant);
	friend operator<<(std::ostream& os, const MainControl& system);
	
	void setPhase(Phase phase);
	bool legalParticipant(const Participant& participant) const;
	bool participate(string state_name) const;

// need to define here possibly c'tr and d'tr and ONLY methods that
// are mentioned and demonstrated in the test example that has been published.
// NO OTHER METHODS SHOULD APPEAR HERE.

// Also it's allowed here to define friend.

};

// -----------------------------------------------------------

#endif
