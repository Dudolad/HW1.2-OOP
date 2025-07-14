#include "Plane.h"

Plane::Plane()
{
    flightNumber = new char[10] {"NoFlight"};
    departure = new char[20] {"NoDeparture"};
    destination = new char[20] {"NoDestination"};
    brand = new char[20] {"NoBrand"};
    totalSeats = 0;
    bookedSeats = 0;
    cout << "Airplane() " << flightNumber << endl;
}

Plane::Plane(const char* flightNumber, const char* departure, const char* destination, const char* brand, int totalSeats, int bookedSeats)
{
    int size = strlen(flightNumber) + 1;
    this->flightNumber = new char[size];
    strcpy_s(this->flightNumber, size, flightNumber);

    size = strlen(departure) + 1;
    this->departure = new char[size];
    strcpy_s(this->departure, size, departure);

    size = strlen(destination) + 1;
    this->destination = new char[size];
    strcpy_s(this->destination, size, destination);

    size = strlen(brand) + 1;
    this->brand = new char[size];
    strcpy_s(this->brand, size, brand);

    this->totalSeats = totalSeats;
    this->bookedSeats = bookedSeats;

    cout << "Airplane(flightNumber, departure, destination, brand, totalSeats, bookedSeats): " << this->flightNumber << endl;
}

Plane::~Plane()
{
    cout << "~Airplane() " << flightNumber << endl;
    delete[] flightNumber;
    delete[] departure;
    delete[] destination;
    delete[] brand;
}

void Plane::showInfo()
{
    cout << "Flight Number: " << flightNumber << endl;
    cout << "Departure: " << departure << endl;
    cout << "Destination: " << destination << endl;
    cout << "Brand: " << brand << endl;
    cout << "Total Seats: " << totalSeats << endl;
    cout << "Booked Seats: " << bookedSeats << endl << endl;
}

void Plane::setFlightNumber(const char* flightNumber)
{
    delete[] this->flightNumber;
    int size = strlen(flightNumber) + 1;
    this->flightNumber = new char[size];
    strcpy_s(this->flightNumber, size, flightNumber);
}

const char* Plane::getFlightNumber()
{
    return flightNumber;
}

void Plane::setDeparture(const char* departure)
{
    delete[] this->departure;
    int size = strlen(departure) + 1;
    this->departure = new char[size];
    strcpy_s(this->departure, size, departure);
}

const char* Plane::getDeparture()
{
    return departure;
}

void Plane::setDestination(const char* destination)
{
    delete[] this->destination;
    int size = strlen(destination) + 1;
    this->destination = new char[size];
    strcpy_s(this->destination, size, destination);
}

const char* Plane::getDestination()
{
    return destination;
}

void Plane::setBrand(const char* brand)
{
    delete[] this->brand;
    int size = strlen(brand) + 1;
    this->brand = new char[size];
    strcpy_s(this->brand, size, brand);

}

const char* Plane::getBrand()
{
    return brand;
}

void Plane::setTotalSeats(int totalSeats)
{
    this->totalSeats = totalSeats;
}

int Plane::getTotalSeats()
{
    return totalSeats;
}

void Plane::setBookedSeats(int bookedSeats)
{
    this->bookedSeats = bookedSeats;
}

int Plane::getBookedSeats()
{
    return bookedSeats;
}

bool Plane::sellTicket(int count)
{
    if (count <= 0)
    {
        cout << "Invalid ticket count to sell." << endl;
        return false;
    }
    if (bookedSeats + count > totalSeats)
    {
        cout << "Not enough free seats to sell " << count << " tickets." << endl;
        return false;
    }
    bookedSeats += count;
    cout << count << " tickets sold successfully." << endl;
    return true;
}

bool Plane::returnTicket(int count)
{
    if (count <= 0)
    {
        cout << "Invalid ticket count to return." << endl;
        return false;
    }
    if (bookedSeats - count < 0)
    {
        cout << "Cannot return more tickets than sold." << endl;
        return false;
    }
    bookedSeats -= count;
    cout << count << " tickets returned successfully." << endl;
    return true;;
}
