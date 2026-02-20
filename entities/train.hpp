#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include "user.hpp"

using namespace std;

struct Train {
  string trainId;
  string source;
  string destination;
  time_t departureTime;
  time_t arrivalTime;
  int price;
  vector<vector<User>> seats;
  int totalSeats;
  int availableSeats; 
};