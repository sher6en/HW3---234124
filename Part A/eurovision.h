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
    string state() const;
    string song() const;
    int timeLength() const;
    string singer() const;
    bool isRegistered() const;
    void update(string song_name, int time_length, string singer_name);
    void updateRegistered(bool condition);
    Participant& operator= (Participant participant) = delete;
// need to define here possibly c'tr and d'tr and ONLY methods that
// are mentioned and demonstrated in the test example that has been published.
// NO OTHER METHODS SHOULD APPEAR HERE.

// NO friend is allowed here.
};

std::ostream& operator<<(std::ostream& os,const Participant& participant);

//---------------------------------------------------


class Voter
{
	string country_name; //Possibly Const, Check.
	VoterType type;
	int number_of_votes;

public:

    Voter(string country_name, VoterType type = Regular);
    ~Voter() = default;
    Voter& operator++();

    string state() const;
    int timesOfVotes() const;
    VoterType voterType() const;
};

std::ostream& operator<<(std::ostream& os, const Voter& voter);

// -----------------------------------------------------------

struct Vote
{

// ALL is public here.
// need to define ONLY data members and c'tr and d'tr.
// NO NEED to define anything else.

	Participant receiver; //Change to string/array of strings.
	Voter giver;
	
	//Check if there really needs to be a 10 argument c'tor with 9 default arguments.
	Vote(Participant participant, Voter voter) : receiver(participant), giver(voter) {}
	~Vote() = default;
};

// -----------------------------------------------------------


class MainControl
{

	Participant** participants; //participants[i] = i'th participant.
	int* votes; //votes[i] = votes given to i'th participant.
	int current_participants_number;
	int current_votes_number;
	Phase current_phase;
	int max_participants;
	int max_song_time;
	int max_vote_amount;

public:

	MainControl(int song_time = 180, int max_participants = 26, int max_vote_amount = 5);  // Done.
	~MainControl();  // Done.

	MainControl& operator+=(const Participant& participant);  // Check if const place is correct. Done.
	MainControl& operator+=(const Vote& vote);
	MainControl& operator-=(const Participant& participant);  // Done.
	friend std::ostream& operator<<(std::ostream& os, const MainControl& system);
	
	void setPhase(Phase phase);  // Done.
	bool legalParticipant(const Participant& participant) const;  // Done.
	bool participate(string state_name) const;  // Done.

// need to define here possibly c'tr and d'tr and ONLY methods that
// are mentioned and demonstrated in the test example that has been published.
// NO OTHER METHODS SHOULD APPEAR HERE.

// Also it's allowed here to define friend.

};

// -----------------------------------------------------------

#endif
