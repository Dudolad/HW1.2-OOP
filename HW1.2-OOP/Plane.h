#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Plane
{
	char* flightNumber;
	char* departure;
	char* destination;
	char* brand;
	int totalSeats;
	int bookedSeats;
public:
	Plane();
	Plane(const char* flightNumber, const char* departure, const char* destination, const char* brand, int totalSeats, int bookedSeats);
	~Plane();

	void showInfo();

	void setFlightNumber(const char* flightNumber);
	const char* getFlightNumber();

	void setDeparture(const char* departure);
	const char* getDeparture();

	void setDestination(const char* destination);
	const char* getDestination();

	void setBrand(const char* brand);
	const char* getBrand();

	void setTotalSeats(int totalSeats);
	int getTotalSeats();

	void setBookedSeats(int bookedSeats);
	int getBookedSeats();

	bool sellTicket(int count);
	bool returnTicket(int count);


};

