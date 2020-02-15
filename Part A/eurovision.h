#ifndef EUROVISION_H_
#define EUROVISION_H_

#include <iostream>
#include <string>

// it's allowed to define here any using statements, according to needs.
// do NOT define here : using namespace std;

//---------------------------------------------------

enum VoterType { All, Regular, Judge };
enum Phase { Registration, Contest, Voting };

//---------------------------------------------------

using std::cout;
using std::endl;
using std::cerr;
using std::ostream;
using std::string;

//string CLASS:
/*
class string {
	int length;
	char* data;
	static char* allocate_and_copy(const char* data, int size);
	void verify_index(int index) const;
public:
	string(const char* str = ""); // string s1; or string s1 = "aa";
	string(const string& str); // string s2(s1);
	~string();
	int size() const;
	string& operator=(const string&); // s1 = s2;
	string& operator+=(const string& str); // s1 += s2;
	const char& operator[](int index) const; // s[5] for const s
	char& operator[](int index); // s[5] for non-const s
	friend ostream& operator<<(ostream&, const string&); // cout << s1;
	friend bool operator==(const string&, const string&); // s1==s2
	friend bool operator<(const string&, const string&); // s1<s2
};

bool operator!=(const string& str1, const string& str2);
bool operator<=(const string& str1, const string& str2);
bool operator>(const string& str1, const string& str2);
bool operator>=(const string& str1, const string& str2);
string operator+(const string& str1, const string& str2);
*/
//END OF string CLASS.

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
    Participant() = delete; //Check if this is needed.
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

	Voter& voter;
	string* states;

	Vote(Voter& voter, string state1, string state2 = "", string state3 = "", string state4 = "",
	    string state5 = "", string state6 = "", string state7 = "",
		string state8 = "", string state9 = "", string state10 = "");
	~Vote();
};

// -----------------------------------------------------------


class MainControl
{

	Participant** participants; //participants[i] = i'th participant.
	int* regular_votes; //votes[i] = votes given to i'th participant by regular voters.
	int* judge_votes; //votes[i] = votes given to i'th participant by judges.
	int current_participants_number;
	Phase current_phase;
	int max_participants;
	int max_song_time;
	int max_vote_amount;

public:

	MainControl(int song_time = 180, int max_participants = 26, int max_vote_amount = 5);  // Done.
	~MainControl();  // Done.

	MainControl& operator+=(const Participant& participant);  // Check if const place is correct. Done.
	MainControl& operator+=(const Vote& vote); //Cant be const because updating voter num of votes. Check if you cant change this.
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
