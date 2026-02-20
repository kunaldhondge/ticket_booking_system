#include "bookingService.hpp"

#include "../entities/train.hpp"
#include "../entities/user.hpp"
#include "../entities/vehicle.hpp"
#include "fileIO.cpp"

template <typename T>
void BookingService<T>::bookTicket(string entityId, User user, string name, string source, string destination, string date) {
  struct Vehicle vehicle;
  vehicle.vehicleId = entityId;
  vehicle.name = name;
  vehicle.source = source;
  vehicle.destination = destination;
  vehicle.date = date;
  vehicle.time = time(NULL);
  vehicle.seats = {{userId}};

  saveTicket(vehicle);
}

template <typename T>
void saveTicket(T entity) {
  FileIO file;
  file.saveToFile(entity);
}