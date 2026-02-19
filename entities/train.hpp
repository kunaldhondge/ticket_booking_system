#include <iostream>
#include <string>
#include <time.h>

using namespace std;

struct Train {
  string trainId;
  string source;
  string destination;
  time_t departureTime;
  time_t arrivalTime;
  int price;
  int totalSeats;
  int availableSeats;
};