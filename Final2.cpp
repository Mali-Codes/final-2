#include <iostream>
#include <deque>
#include <vector>
#include <stack>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Order {
    string customer;
    string drink;
    Order* next;

    Order(string c, string d) : customer(c), drink(d), next(nullptr) {}
};

class CoffeeShop {
    private:
        Order* head;
        Order* tail;

    public:
        CoffeeShop() : head(nullptr), tail(nullptr) {}

        void entQueueOrder(string customer, string drink) {
            Order* newOrder = new Order(customer, drink);
            if (tail == nullptr) {
                tail = newOrder;
            }
        }
        void dequeueOrder() {
            if (head == nullptr) return;
            head = head -> next;
            if (head == nullptr) {
                tail = nullptr;
            }
        }

};






int main() {
    srand(time(0));

    string coffeeNames[] = {"Alice", "Bob", "Charlie", "Diana", "Eve", "Frank", "Grace", "Henry"};
    string coffeeDrinks[] = {"Espresso", "Latte", "Cappuccino", "Americano", "Mocha", "Macchiato"};


}