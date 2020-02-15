#include <iostream>
#include "eurovision.h"

//==============================================================================Helper functions delclerations:

static void swap(Participant **xp, Participant **yp);
static void participant_bubbleSort(Participant** arr, int n);

//==============================================================================End of helper functions delclerations.

//==============================================================================string class functions:
/*
void error(const char* str) {
	cerr << "Error: " << str << endl;
	exit(0);
}

int strcmp(char* string1, char* string2)
{
    for (int i = 0; ; i++)
    {
        if (string1[i] != string2[i])
        {
            return string1[i] < string2[i] ? -1 : 1;
        }

        if (string1[i] == '\0')
        {
            return 0;
        }
    }
}

int strlen(const char* start) {
   const char* end = start;
   while(*end++ != 0);
   return end - start;
}

char* strcpy(char *c, const char* s)
{
    int i=0;
    for(i=0;i<strlen(s);i++)
        c[i]=s[i];
    c[++i]=0;
    return c;
}

char* strcat(char * s1, const char * s2)
{
	int i=0;
    for(i=strlen(s2);i<strlen(s1);i++)
        s1[i]=s2[i];
    s1[++i]=0;
    return s1;
}

char* string::allocate_and_copy(const char* str, int size) {
	return strcpy(new char[size + 1], str);
}

string::string(const char* str) {
	length = strlen(str);
	data = allocate_and_copy(str, length);
}
string::string(const string& str) :
	length(str.size()),
	data(allocate_and_copy(str.data, str.length)) {
}
string::~string() {
	delete[] data;
}
int string::size() const {
	return length;
}

string& string::operator=(const string& str) {
	if (this == &str) {
		return *this;
	}
	delete[] data;
	data = allocate_and_copy(str.data, str.length);
	length = str.length;
	return *this;
}
string& string::operator+=(const string& str) {
	char* new_data = allocate_and_copy(data, this->length + str.length);
	strcat(new_data, str.data);
	delete[] data;
	length += str.length;
	data = new_data;
	return *this;
}
void string::verify_index(int index) const {
	if (index >= size() || index < 0) {
		error("Bad index");
	}
	return;
}
const char& string::operator[](int index) const {
	verify_index(index);
	return data[index];
}
char& string::operator[](int index) {
	verify_index(index);
	return data[index];
}
bool operator==(const string& str1, const string& str2) {
	return strcmp(str1.data, str2.data) == 0;
}
ostream& operator<<(ostream& os, const string& str) {
	return os << str.data;
}
bool operator<(const string& str1, const string& str2) {
	return strcmp(str1.data, str2.data) < 0;
}
bool operator!=(const string& str1, const string& str2) {
	return !(str1 == str2);
}
bool operator<=(const string& str1, const string& str2) {
	return (str1<str2 || str1==str2);
}
bool operator>(const string& str1, const string& str2) {
	return !(str1 <= str2);
}
bool operator>=(const string& str1, const string& str2) {
	return !(str1 < str2);
}
string operator+(const string& str1, const string& str2) {
	return string(str1) += str2;
}
//==============================================================================string class functions.
*/

//==============================================================================Participant functions:
Participant::Participant(string country_name, string song_name,
                        int time_length, string singer_name) :
            country_name(country_name), song_name(song_name), time_length(time_length), singer_name(singer_name),
            registered(false) {}

std::ostream& operator<<(std::ostream& os, const Participant& participant) {
    os << "[" << participant.state()
        << "/" << participant.song()
        << "/" << participant.timeLength()
        << "/" << participant.singer()
        << "]";
    return os;
}

string Participant::state() const {
    return country_name;
}

string Participant::song() const {
    return song_name;
}

int Participant::timeLength() const {
    return time_length;
}

string Participant::singer() const {
    return singer_name;
}

bool Participant::isRegistered() const {
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

Voter& Voter::operator++() {
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


//==============================================================================Vote functions:
	Vote::Vote(Voter& voter, string state1, string state2, string state3, string state4, string state5,
			string state6, string state7, string state8, string state9, string state10) : 
			voter(voter), states(new string [10]){
				states[0] = state1;
				states[1] = state2;
				states[2] = state3;
				states[3] = state4;
				states[4] = state5;
				states[5] = state6;
				states[6] = state7;
				states[7] = state8;
				states[8] = state9;
				states[9] = state10;
	}
	
	Vote::~Vote() {
		delete[] states;
	}
//==============================================================================End of Vote functions.


//==============================================================================MainControl functions:
MainControl::MainControl(int song_time, int max_participants, int max_vote_amount) :
					participants(new Participant* [max_participants]), regular_votes(new int [max_participants]),
					judge_votes(new int [max_participants]), current_participants_number(0), current_phase(Registration), 
					max_participants(max_participants), max_song_time(song_time), max_vote_amount(max_vote_amount) {
						for (int i=0; i<max_participants; i++) {
							participants[i] = NULL; //Check this is actually needed (If pointers are inisiated (knowing english is nice) to NULL).
						}
					}
MainControl::~MainControl() {
	delete[] participants;
	delete[] regular_votes;
	delete[] judge_votes;
}

MainControl& MainControl::operator+=(const Participant& participant){
    if (current_phase != Registration ||
		current_participants_number >= max_participants ||
		!legalParticipant(participant)) {
			return *this;
		}
	for (int i = 0; i < current_participants_number; i++) {
		if (participant.state() == participants[i]->state()){
			return *this;
		}
	}
	
	//Participant participant_copy(participant.state(),participant.song(),participant.timeLength(),participant.singer());
	/* participants[current_participants_number++] = (new Participant(participant.state(),participant.song(),participant.timeLength(),participant.singer()));
	//WHY DO YOU NEED new here? */
	participants[current_participants_number++] = &(const_cast <Participant&>(participant));
	participants[current_participants_number-1]->updateRegistered(true);
	participant_bubbleSort(participants, current_participants_number);
	return *this;
}

MainControl& MainControl::operator+=(const Vote& vote) {
	if (current_phase != Voting) {
		return *this;
	}
	if (vote.voter.voterType() == Regular) {
		if ((vote.voter.state() != vote.states[0])&&(vote.voter.timesOfVotes() < max_vote_amount)&&
			(participate(vote.voter.state()))) {
			for (int i = 0; i<current_participants_number; i++){
				if (vote.states[0] == participants[i]->state()){
					regular_votes[i]++;
					++((const_cast <Vote&>(vote)).voter);
					return *this;
				}
			}
		}
	}
	if (vote.voter.voterType() == Judge) {
		if (vote.voter.timesOfVotes() < 1) {
			for (int j = 0; j<10; j++){
				for (int i = 0; i<max_participants; i++){
					if (!participants[i]){
						continue;
					}
					if(vote.states[j] == participants[i]->state()){
						switch (j) {
							case 0: judge_votes[i]+=12; break;
							case 1: judge_votes[i]+=10; break;
							default: judge_votes[i]+=(10-j); break;
						}
						++(const_cast <Voter&>(vote.voter));
						break;
					}
				}
			}
			return *this;
		}
	}
	return *this;
}

MainControl& MainControl::operator-=(const Participant& participant){
    if (current_phase != Registration ||
		!(participant.isRegistered())){
        return *this;
    }
    
	int index;
	
	for (index = 0; index < current_participants_number; index++) {
		if (participant.state() == participants[index]->state()) {
			break;
		}
	}

	participants[index]->updateRegistered(false);
	participants[index] = NULL;
	swap(&participants[index], &participants[current_participants_number-1]);
	current_participants_number--;
	
	participant_bubbleSort(participants, current_participants_number);
	
	return *this;
}

std::ostream& operator<<(std::ostream& os, const MainControl& system){
	cout<<"{"<<endl;
	
	switch (system.current_phase){
		case Registration:
			cout<<"Registration"<<endl;
			for (int i = 0; i<system.current_participants_number; i++){
				cout << (*(system.participants[i])) << endl;
			}
			break;
		case Contest:
			cout<<"Contest"<<endl;
			break;
		case Voting:
			cout<<"Voting"<<endl;
			for (int i = 0; i<system.current_participants_number; i++){
				cout << system.participants[i]->state() << " : Regular(" << system.regular_votes[i] <<
				") Judge(" << system.judge_votes[i] << ")" << endl;
			}
			break;
	}
			
	cout<<"}"<<endl;
	
	return os;
}

void MainControl::setPhase(Phase phase) { //Check this works. Check if you can't go back (like from Con to Reg)
	if (current_phase==Registration && phase==Contest){
		current_phase = phase;
	}
	else if (current_phase==Contest && phase==Voting){
		current_phase = phase;
	}
}

bool MainControl::legalParticipant(const Participant& participant) const{
    if ((participant.state()=="") ||
        (participant.song()=="") ||
        (participant.singer()=="") ||
        (participant.timeLength()>max_song_time)){  // Check if negative? Define as unsigned?
        return false;
    }
    return true;
}

bool MainControl::participate(string state_name) const{
	for (int i = 0; i<current_participants_number; i++) {
		if (participants[i]->state() == state_name) {
			return true;
		}
	}
	return false;
}
//==============================================================================End of MainControl functions.

//==============================================================================Helper functions:

static void swap(Participant **xp, Participant **yp)  
{  
    Participant *temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
// A function to implement bubble sort  
static void participant_bubbleSort(Participant** arr, int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++){
		// Last i elements are already in place  
		for (j = 0; j < n-i-1; j++) {
			if (arr[j]->state() > arr[j+1]->state()){
				//cout << "j: " <<arr[j]->state() << ", j+1:" << arr[j+1]->state() << endl;
				swap(&arr[j], &arr[j+1]);  
			}
		}
	}
}  

//==============================================================================End of helper functions.



























