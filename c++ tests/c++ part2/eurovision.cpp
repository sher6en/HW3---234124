#include <iostream>
#include "eurovision.h"

//Used only in part B.
#include <vector>
using std::vector;

//==============================================================================Helper functions and class delclerations:
static void participantPointerSwap(Participant **pointer1, Participant **pointer2);
static void participantBubbleSort(Participant** arr, int n);

template<typename Iterator>
Iterator get(Iterator first, Iterator end, int place);

//This struct is used in Part B section 3, in order to store data about the 
//participanting states more conviniantly.
struct StatePlace {
	int points;
	String state;
	
	StatePlace() : points(0), state("") {}
	StatePlace(int points, String state) : points(points), state(state) {}
	
	bool operator<(const StatePlace& statePlace){
		if (statePlace.points > points){
			return true;
		}
		else if (statePlace.points == points) {
			if (statePlace.state > state) {
				return true;
			}
		}
		return false;
	}
};

//==============================================================================End of helper functions and class delclerations.

//==============================================================================String class functions:

int strcmp(char* String1, char* String2)
{
    for (int i = 0; ; i++)
    {
        if (String1[i] != String2[i])
        {
            return String1[i] < String2[i] ? -1 : 1;
        }

        if (String1[i] == '\0')
        {
            return 0;
        }
    }
}

int strlen(const char* start) {
   const char* end;
   for (end = start; *end; end++);
   return (end - start);
}

char* strcpy(char *c, const char* s)
{
    int i=0;
    for(i=0;i<=strlen(s);i++)
        c[i]=s[i];
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

char* String::allocate_and_copy(const char* str, int size) {
	return strcpy(new char[size + 1], str);
}

//Everything from here until the end of the string class related funcitons was copied from the lectures.
String::String(const char* str) {
	length = strlen(str);
	data = allocate_and_copy(str, length);
}
String::String(const String& str) :
	length(str.size()),
	data(allocate_and_copy(str.data, str.length)) {
}
String::~String() {
	delete[] data;
}
int String::size() const {
	return length;
}

String& String::operator=(const String& str) {
	if (this == &str) {
		return *this;
	}
	delete[] data;
	data = allocate_and_copy(str.data, str.length);
	length = str.length;
	return *this;
}
String& String::operator+=(const String& str) {
	char* new_data = allocate_and_copy(data, this->length + str.length);
	strcat(new_data, str.data);
	delete[] data;
	length += str.length;
	data = new_data;
	return *this;
}
const char& String::operator[](int index) const {
	return data[index];
}
char& String::operator[](int index) {
	return data[index];
}
bool operator==(const String& str1, const String& str2) {
	return strcmp(str1.data, str2.data) == 0;
}
ostream& operator<<(ostream& os, const String& str) {
	return os << str.data;
}
bool operator<(const String& str1, const String& str2) {
	return strcmp(str1.data, str2.data) < 0;
}
bool operator!=(const String& str1, const String& str2) {
	return !(str1 == str2);
}
bool operator<=(const String& str1, const String& str2) {
	return (str1<str2 || str1==str2);
}
bool operator>(const String& str1, const String& str2) {
	return !(str1 <= str2);
}
bool operator>=(const String& str1, const String& str2) {
	return !(str1 < str2);
}
String operator+(const String& str1, const String& str2) {
	return String(str1) += str2;
}

//==============================================================================String class functions.


//==============================================================================Participant functions:
Participant::Participant(String country_name, String song_name,
                        int time_length, String singer_name) :
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

String Participant::state() const {
    return country_name;
}

String Participant::song() const {
    return song_name;
}

int Participant::timeLength() const {
    return time_length;
}

String Participant::singer() const {
    return singer_name;
}

bool Participant::isRegistered() const {
    return registered;
}

void Participant::update(String song_name, int time_length, String singer_name){
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
Voter::Voter(String country_name, VoterType type) :
             country_name(country_name), type(type), number_of_votes(0) {}

std::ostream& operator<<(std::ostream& os, const Voter& voter) {
    String type_of_voter = (voter.voterType() == Regular) ? "Regular" : "Judge";
    os <<"<"<< voter.state() <<"/"<< type_of_voter <<">";
    return os;
}

Voter& Voter::operator++() {
    ++number_of_votes;
    return *this;
}

String Voter::state() const {
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
	Vote::Vote(Voter& voter, String state1, String state2, String state3, String state4, String state5,
			String state6, String state7, String state8, String state9, String state10) : 
			voter(voter), states(new String [10]){
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
							participants[i] = NULL; 
							regular_votes[i] = 0;
							judge_votes[i] = 0;
						}
					}
MainControl::~MainControl() {
	for (int i = 0; i<current_participants_number; i++){
		participants[i]->updateRegistered(false);
	}
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
	
	participants[current_participants_number++] = &(const_cast <Participant&>(participant));
	participants[current_participants_number-1]->updateRegistered(true);
	participantBubbleSort(participants, current_participants_number);
	return *this;
}

MainControl& MainControl::operator+=(const Vote& vote) {
	if (current_phase != Voting || !(participate(vote.voter.state()))) {
		return *this;
	}
	if (vote.voter.voterType() == Regular) {
		if ((vote.voter.state() != vote.states[0])&&(vote.voter.timesOfVotes() < max_vote_amount)&&
			(participate(vote.voter.state()))) {
			for (int i = 0; i<current_participants_number; i++){
				if (vote.states[0] == participants[i]->state()){
					regular_votes[i]++;
					//Compiler gives warning when trying to pass Vote as not const, so const cast is needed.
					++(const_cast <Voter&>(vote.voter)); 
					return *this;
				}
			}
		}
	}
	if (vote.voter.voterType() == Judge) {
		if (vote.voter.timesOfVotes() < 1) {
			for (int j = 0; j<10; j++){
				for (int i = 0; i<current_participants_number; i++){
					if(vote.states[j] == participants[i]->state() && (vote.voter.state() != vote.states[j])){
						switch (j) {
							case 0: judge_votes[i]+=12; break;
							case 1: judge_votes[i]+=10; break;
							default: judge_votes[i]+=(10-j); break;
						}
						//Compiler gives warning when trying to pass Vote as not const, so const cast is needed.
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
	participantPointerSwap(&participants[index], &participants[current_participants_number-1]);
	current_participants_number--;
	
	participantBubbleSort(participants, current_participants_number);
	
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

String MainControl::operator()(int index, VoterType type){
	if (index<0 || index>current_participants_number) return "";
	vector<StatePlace> states(current_participants_number);
	
	int j = 0;
	vector<StatePlace>::iterator i = states.begin();
	
	switch(type){
		case Regular:
			for (; i != states.end(); ++i, ++j){
				(*i).points = regular_votes[j];
				(*i).state = participants[j]->state();
			}
			break;
		case Judge:
			for (; i != states.end(); ++i, ++j){
				(*i).points = judge_votes[j];
				(*i).state = participants[j]->state();
			}
			break;
		case All:
			for (; i != states.end(); ++i, ++j){
				(*i).points = judge_votes[j] + regular_votes[j];
				(*i).state = participants[j]->state();
			}
			break;
	}
	
	vector<StatePlace>::iterator winner = get(states.begin(), states.end(), index);
	return ((*winner).state);
}

void MainControl::setPhase(Phase phase) { //Check if you can't go back (like from Con to Reg)
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
        (participant.timeLength()>max_song_time)){  //Check if negative? Define as unsigned?
        return false;
    }
    return true;
}

bool MainControl::participate(String state_name) const{
	for (int i = 0; i<current_participants_number; i++) {
		if (participants[i]->state() == state_name) {
			return true;
		}
	}
	return false;
}

MainControl::Iterator MainControl::begin() const{
	return Iterator(this, 0);
}

MainControl::Iterator MainControl::end() const{
	return Iterator(this, current_participants_number);
}
//==============================================================================End of MainControl functions.

//==============================================================================MainControl Iterator functions.

MainControl::Iterator::Iterator(const MainControl* mainControl, int index) : mainControl(mainControl), index(index) {}

const Participant& MainControl::Iterator::operator*() const {
	return (*(mainControl->participants[index]));
}

MainControl::Iterator& MainControl::Iterator::operator++() {
	++index;
	return *this;
}

bool MainControl::Iterator::operator==(const Iterator& iterator) const {
	if (index == iterator.index && mainControl == iterator.mainControl /* Check if whats after the && is needed*/){
		return true;
	}
	return false;
}

bool MainControl::Iterator::operator<(const Iterator& iterator) const {
	if (index < iterator.index){
		return true;
	}
	return false;
}

//==============================================================================End of MainControl Iterator functions.

//==============================================================================Helper functions:

static void participantPointerSwap(Participant **pointer1, Participant **pointer2) {  
    Participant *temp = *pointer1;  
    *pointer1 = *pointer2;  
    *pointer2 = temp;  
}  
 
static void participantBubbleSort(Participant** arr, int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++){
		for (j = 0; j < n-i-1; j++) {
			if (arr[j]->state() > arr[j+1]->state()){
				participantPointerSwap(&arr[j], &arr[j+1]);  
			}
		}
	}
}  

//==============================================================================End of helper functions.

template<typename Iterator>
Iterator get(Iterator first, Iterator end, int place) {
	
	Iterator current_max = first;
	for (Iterator temp = first; temp != end; ++temp){
		if (*current_max < *temp){
			current_max = temp;
		}
	}
	
	Iterator min = first;
	for (Iterator temp = first; temp != end; ++temp){
		if (*temp < *min){
			min = temp;
		}
	}
	
	//Each loop we find the max value thats smaller then the last max value.
	for (int i = 1; i<place; i++){
		Iterator current_loop_max = min;
		for (Iterator temp = first; temp != end; ++temp){
			if (*current_loop_max < *temp && *temp < *current_max){
				current_loop_max = temp;
			}
		}
		current_max = current_loop_max;
	}
	
	return current_max;
}


























