#include <iostream>
#include "Plane.h"
using namespace std;

int main()
{
    Airplane plane1;
    plane1.showInfo();

    Airplane plane2("PS123", "Kyiv", "London", "Boeing 737", 180, 100);
    plane2.showInfo();

    plane1.setFlightNumber("AA987");
    plane1.setDeparture("New York");
    plane1.setDestination("Paris");
    plane1.setBrand("Airbus A320");
    plane1.setTotalSeats(150);
    plane1.setBookedSeats(50);
    plane1.showInfo();

    plane1.sellTicket(20);    
    plane1.sellTicket(100);   
    plane1.returnTicket(30);  
    plane1.returnTicket(100); 

    plane1.showInfo();

    return 0;
}

