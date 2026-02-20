#include <iostream>
#include <vector>
#include <time.h>
#include "train.hpp"

using namespace std;

struct Vehicle {
  string vehicleId;
  string source;
  string destination;
  time_t departureTime;
  time_t arrivalTime;
  int price;
  int totalSeats;
  int availableSeats;
};

Train convert(Vehicle vehicle) {
  struct Train train;
  train.trainId = vehicle.vehicleId;
  train.source = vehicle.source;
  train.destination = vehicle.destination;
  train.departureTime = vehicle.departureTime;
  train.arrivalTime = vehicle.arrivalTime;
  train.price = vehicle.price;
  train.totalSeats = vehicle.totalSeats;
  train.availableSeats = vehicle.availableSeats;
  return train;
}