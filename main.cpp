#include <iostream>
#include "../entities/user.hpp"
#include "../entities/vehicle.hpp"

int main() {
    string userId;
    string name;
    string aadharCard;

    cout<<"Enter User ID: ";
    cin>>userId;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Aadhar Card: ";
    cin>>aadharCard;

    User user(userId, name, aadharCard);
    vector<Vehicle> vehicles;
    
    return 0;
}