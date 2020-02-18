#ifndef EUROVISION_H_
#define EUROVISION_H_

#include <iostream>

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

//String CLASS:

class String {
	int length;
	char* data;
	static char* allocate_and_copy(const char* data, int size);
	void verify_index(int index) const;
public:
	String(const char* str = ""); // String s1; or String s1 = "aa";
	String(const String& str); // String s2(s1);
	~String();
	int size() const;
	String& operator=(const String&); // s1 = s2;
	String& operator+=(const String& str); // s1 += s2;
	const char& operator[](int index) const; // s[5] for const s
	char& operator[](int index); // s[5] for non-const s
	friend ostream& operator<<(ostream&, const String&); // cout << s1;
	friend bool operator==(const String&, const String&); // s1==s2
	friend bool operator<(const String&, const String&); // s1<s2
};

bool operator!=(const String& str1, const String& str2);
bool operator<=(const String& str1, const String& str2);
bool operator>(const String& str1, const String& str2);
bool operator>=(const String& str1, const String& str2);
String operator+(const String& str1, const String& str2);

//END OF String CLASS.

class Participant
{
// relevant private members can be defined here, if necessary.
    String country_name;
    String song_name;
    int time_length;
    String singer_name;
    bool registered;

public:
    Participant(String country_name, String song_name, int time_length,
            String singer_name);
    Participant() = delete; //Check if this is needed.
    ~Participant() = default;
    String state() const;
    String song() const;
    int timeLength() const;
    String singer() const;
    bool isRegistered() const;
    void update(String song_name, int time_length, String singer_name);
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
	String country_name; //Possibly Const, Check.
	VoterType type;
	int number_of_votes;

public:

    Voter(String country_name, VoterType type = Regular);
    ~Voter() = default;
    Voter& operator++();

    String state() const;
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
	String* states;

	Vote(Voter& voter, String state1, String state2 = "", String state3 = "", String state4 = "",
	    String state5 = "", String state6 = "", String state7 = "",
		String state8 = "", String state9 = "", String state10 = "");
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
	bool participate(String state_name) const;  // Done.

// need to define here possibly c'tr and d'tr and ONLY methods that
// are mentioned and demonstrated in the test example that has been published.
// NO OTHER METHODS SHOULD APPEAR HERE.

// Also it's allowed here to define friend.

};

// -----------------------------------------------------------

#endif
