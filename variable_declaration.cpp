#include <iostream> 
#include <string>
using namespace std;

//rooms and their prices
int singleroomprice = 60;
int doubleroomprice = 80;
int suiteroomprice = 120;

// Maximum number of rooms
int maxsinglerooms = 10;
int maxdoublerooms = 5;
int maxsuiterooms = 2;

// Rooms availability
int availableRooms[3] = {maxsinglerooms, maxdoublerooms, maxsuiterooms};

// Booking information
string customers[100];         // Store customer names
int bookingHistory[100][3];    // Customer ID, Room Type, Nights
int totalCustomers = 0; 
