#include <iostream>
#include "../external/json.hpp"

using namespace std;
using json = nlohmann::json;

template <typename T>
class FileIO {
    private:
        const string fileName = "db.json";
    public:
        void saveToFile(T entity) {
            json j;
            ifstream file(fileName);

            if(file.is_open()) {
                file >> j;
                file.close();
            }
            
            json entityJson = {
                {"trainId", entity.trainId},
                {"source", entity.source},
                {"destination", entity.destination},
                {"departureTime", entity.departureTime},
                {"arrivalTime", entity.arrivalTime},
                {"totalSeats", entity.totalSeats},
                {"availableSeats", entity.availableSeats},
                {"price", entity.price}
            };

            j.push_back(entityJson);

            ofstream outFile(fileName);
            outFile << j.dump(4);
            outFile.close();
        }

        vector<T> readFromFile() {
            vector<T> entities;
            ifstream file(fileName);

            if(!file.is_open()) {
                return entities;
            }

            json j;
            file >> j;
            file.close();

            for(const auto& item : j) {
                T entity;
                entity.trainId = item["trainId"];
                entity.source = item["source"];
                entity.destination = item["destination"];
                entity.departureTime = item["departureTime"];
                entity.arrivalTime = item["arrivalTime"];
                entity.totalSeats = item["totalSeats"].get<vector<vector<int>>>();
                entity.availableSeats = item["availableSeats"];
                entity.price = item["price"];

                entities.push_back(entity);
            }

            return entities;
        }
};