#include "seat.h"

string GreenRoomSeat::location() const{
	string row_string(std::to_string(row));
	string seat_string(std::to_string(seat));
	string result = "Green Room-> line: " + row_string + ", chair: " + seat_string;
	return result;
}

int GreenRoomSeat::price() const {
	throw NoPrice();
	return 0;
}

string GoldenCircleSeat::location() const{
	string row_string(std::to_string(row)); 
	string seat_string(std::to_string(seat));
	string result = "Golden Circle-> line: " + row_string + ", chair: " + seat_string;
	return result;
}

int GoldenCircleSeat::price() const{
	return base_price;
}

string DisablePodiumSeat::location() const{
	string row_string(std::to_string(row));
	string seat_string(std::to_string(seat));
	string result = "Disable Podium-> line: " + row_string + ", chair: " + seat_string;
	return result;
}

int DisablePodiumSeat::price() const{
	return 200;
}

string FrontRegularSeat::location() const{
	string row_string(std::to_string(row));
	string seat_string(std::to_string(seat));
	string area_string(1,area);
	string result = "Front-> area: " + area_string + ", line: " + row_string + ", chair: " + seat_string;
	return result;
}

int FrontRegularSeat::price() const{
		return base_price;
}

string MiddleRegularSeat::location() const{
	string row_string(std::to_string(row));
	string seat_string(std::to_string(seat));
	string area_string(1, area);
	string result = "Middle-> area: " + area_string + ", line: " + row_string + ", chair: " + seat_string;
	return result;
}

int MiddleRegularSeat::price() const{
	return base_price;
}

string RearRegularSeat::location() const{
	string row_string(std::to_string(row));
	string seat_string(std::to_string(seat));
	string area_string(1, area);
	string result = "Rear-> area: " + area_string + ", line: " + row_string + ", chair: " + seat_string;
	return result;
}

int RearRegularSeat::price() const{
	return base_price;
}
