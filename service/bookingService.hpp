#include <iostream>

using namespace std;

template <typename T>
class BookingService {
public:
    void bookTicket(string entityId, string userId);
    void cancelTicket(string entityId, string userId);
    void showTicket(string entityId, string userId);

private:
    void saveTicket(T entity);
};
