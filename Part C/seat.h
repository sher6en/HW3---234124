#include <iostream>
#include <string>
using std::string;
using std::exception;

/*
 Notes:
 Check that all price increases are correct.
 In all printing functions check if its okay to define helper functions in cpp file so there isnt code duplication.
 Check if classes need copy constractor.
 Check if there can be couple of seats with the same place, or its not needed to check such thing.
 For regular seats, check if area will always be in range - 'A' to 'Z'.
*/


// ---------------------------------------------
class NoPrice : public exception
{
	virtual char const *what() const noexcept override{
		return ("Not For Sale !");
	}
};

// ---------------------------------------------
class Seat
{
protected:	

	int row, seat, base_price;
	
public:
	Seat() = delete; //We don't want a default constractor. Check if there is a need to delete the constractor.
	Seat(int row, int seat, int base_price) :  //Check if there are default values.
	  row(row), seat(seat), base_price(base_price){}
	virtual ~Seat() {}
	virtual int price() const = 0;
	virtual string location() const = 0;

};

// ---------------------------------------------
class GreenRoomSeat : public Seat
{
public:
	GreenRoomSeat() = delete; //We don't want a default constractor. Check if there is a need to delete the constractor.
	GreenRoomSeat(int row, int seat) : Seat(row,seat,0) {}
	~GreenRoomSeat() = default;
	//Check if theres a need for a copy constractor.
	
	//Move to cpp file.
	string location() const override {
		string row_string(std::to_string(row)); //Check if theres a better function then to_string
		string seat_string(std::to_string(seat)); //Check if theres a better function then to_string
		string result = "Green Room-> line: " + row_string + ", chair: " + seat_string;
		return result;
	}
	int price() const override {
		throw NoPrice(); //Check if this actually calls a constractor and if it needs to.
		return 0; //Shouldn't get here. check if needed
	}
};

// ---------------------------------------------
class MainHallSeat : public Seat
{
	//Check if there needs to be more stuff here or if this is just a name to inherate from.
	//Check if the way Im increasing the price by a 100 is valid/what they were looking for.
protected: //Maybe constractor needs to move to private, because startup list has access to private section.
	MainHallSeat(int row, int seat, int base_price) : Seat(row,seat,base_price+100) {}
	~MainHallSeat() = default;
	//Check if theres a need to override location and price.
};

// ---------------------------------------------
class SpecialSeat : public MainHallSeat
{
protected: //Maybe constractor needs to move to private.
	SpecialSeat(int row, int seat, int base_price) : MainHallSeat(row,seat,base_price+300) {}
	~SpecialSeat() = default;
	//Check if theres a need to override location and price.
};

// ---------------------------------------------
class GoldenCircleSeat : public SpecialSeat
{
public:
	GoldenCircleSeat() = delete; //We don't want a default constractor. Check if there is a need to delete the constractor.
	GoldenCircleSeat(int row, int seat, int base_price) : SpecialSeat(row,seat,base_price+1000) {}
	~GoldenCircleSeat() = default;
	//Move to cpp file.
	string location() const override {
		string row_string(std::to_string(row)); //Check if theres a better function then to_string
		string seat_string(std::to_string(seat)); //Check if theres a better function then to_string
		string result = "Golden Circle-> line: " + row_string + ", chair: " + seat_string;
		return result;
	}
	int price() const override {
		return base_price;
	}
};

// ---------------------------------------------
class DisablePodiumSeat : public SpecialSeat
{
public:
	DisablePodiumSeat() = delete;
	DisablePodiumSeat(int row, int seat, int base_price = 0) : SpecialSeat(row, seat, base_price){}
	~DisablePodiumSeat() = default;
	
	string location() const override {
		string row_string(std::to_string(row)); //Check if theres a better function then to_string
		string seat_string(std::to_string(seat)); //Check if theres a better function then to_string
		string result = "Disable Podium-> line: " + row_string + ", chair: " + seat_string;
		return result;
	}
	int price() const override {
		return 200; //Check if its okay or if they want to replace this with a define
	}
};

// ---------------------------------------------
class RegularSeat : public MainHallSeat
{
protected: //Maybe constractor needs to move to private.	
	char area; //If private, no problem with constractor. If protected, problem with prints in front and stuff.
	
	RegularSeat(char area, int row, int seat, int base_price) :
		MainHallSeat(row, seat, base_price), area(area) {}
	~RegularSeat() = default;
};

// ---------------------------------------------
class FrontRegularSeat : public RegularSeat
{
public:
	FrontRegularSeat() = delete;
	FrontRegularSeat(char area, int row, int seat, int base_price) : RegularSeat(area, row, seat, base_price+500) {}
	~FrontRegularSeat() = default;
	
	string location() const override {
		string row_string(std::to_string(row)); //Check if theres a better function then to_string
		string seat_string(std::to_string(seat)); //Check if theres a better function then to_string
		string area_string(1,area);
		string result = "Front-> area: " + area_string /* Maybe gets converted to ascii */ + ", line: " + row_string + ", chair: " + seat_string;
		return result;
	}
	int price() const override {
		return base_price;
	}
};

// ---------------------------------------------
class MiddleRegularSeat : public RegularSeat
{
public:
	MiddleRegularSeat() = delete;
	MiddleRegularSeat(char area, int row, int seat, int base_price) : RegularSeat(area, row, seat, base_price+250) {}
	~MiddleRegularSeat() = default;
	
	string location() const override {
		string row_string(std::to_string(row)); //Check if theres a better function then to_string
		string seat_string(std::to_string(seat)); //Check if theres a better function then to_string
		string area_string(1, area);
		string result = "Middle-> area: " + area_string /* Maybe gets converted to ascii */ + ", line: " + row_string + ", chair: " + seat_string;
		return result;
	}
	
	int price() const override {
		return base_price;
	}
};

// ---------------------------------------------
class RearRegularSeat : public RegularSeat
{
public:
	RearRegularSeat() = delete;
	RearRegularSeat(char area, int row, int seat, int base_price) : RegularSeat(area, row, seat, base_price) {}
	~RearRegularSeat() = default;
	
	string location() const override {
		string row_string(std::to_string(row)); //Check if theres a better function then to_string
		string seat_string(std::to_string(seat)); //Check if theres a better function then to_string
		string area_string(1, area);
		string result = "Rear-> area: " + area_string /* Maybe gets converted to ascii */ + ", line: " + row_string + ", chair: " + seat_string;
		return result;
	}
	int price() const override {
		return base_price;
	}
};

// ---------------------------------------------
