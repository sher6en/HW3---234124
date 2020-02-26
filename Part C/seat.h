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
	Seat() = delete; 
	Seat(int row, int seat, int base_price) :
	  row(row), seat(seat), base_price(base_price){}
	virtual ~Seat() {}
	virtual int price() const = 0;
	virtual string location() const = 0;

};

// ---------------------------------------------
class GreenRoomSeat : public Seat
{
public:
	GreenRoomSeat() = delete;
	GreenRoomSeat(int row, int seat) : Seat(row,seat,0) {}
	~GreenRoomSeat() = default;
	
	string location() const override;
	
	int price() const override;
};

// ---------------------------------------------
class MainHallSeat : public Seat
{
	
protected:
	MainHallSeat(int row, int seat, int base_price) : Seat(row,seat,base_price+100) {}
	~MainHallSeat() = default;
};

// ---------------------------------------------
class SpecialSeat : public MainHallSeat
{
protected:
	SpecialSeat(int row, int seat, int base_price) : MainHallSeat(row,seat,base_price+300) {}
	~SpecialSeat() = default;
};

// ---------------------------------------------
class GoldenCircleSeat : public SpecialSeat
{
public:
	GoldenCircleSeat() = delete;
	GoldenCircleSeat(int row, int seat, int base_price) : SpecialSeat(row,seat,base_price+1000) {}
	~GoldenCircleSeat() = default;

	string location() const override;
	
	int price() const override;
};

// ---------------------------------------------
class DisablePodiumSeat : public SpecialSeat
{
public:
	DisablePodiumSeat() = delete;
	DisablePodiumSeat(int row, int seat, int base_price = 0) : SpecialSeat(row, seat, base_price){}
	~DisablePodiumSeat() = default;
	
	string location() const override;
	
	int price() const override;
};

// ---------------------------------------------
class RegularSeat : public MainHallSeat
{
protected:	
	char area;
	
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
	
	string location() const override;
	int price() const override;
};

// ---------------------------------------------
class MiddleRegularSeat : public RegularSeat
{
public:
	MiddleRegularSeat() = delete;
	MiddleRegularSeat(char area, int row, int seat, int base_price) : RegularSeat(area, row, seat, base_price+250) {}
	~MiddleRegularSeat() = default;
	
	string location() const override;
	
	int price() const override;
};

// ---------------------------------------------
class RearRegularSeat : public RegularSeat
{
public:
	RearRegularSeat() = delete;
	RearRegularSeat(char area, int row, int seat, int base_price) : RegularSeat(area, row, seat, base_price) {}
	~RearRegularSeat() = default;
	
	string location() const override;
	int price() const override;
};

// ---------------------------------------------
