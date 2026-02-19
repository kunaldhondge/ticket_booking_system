#include <iostream>
#include "train.hpp"
#include <string>
#include <vector>

using namespace std;

struct User {
  string userId;
  string name;
  string aadharCard;
  vector<Train> trains;
};
