#include <iostream>
#include <deque>
#include <vector>
#include <stack>
#include <cstdlib>
#include <ctime>
using namespace std;

// MILESTONE 1
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
                head = tail = newOrder;
            } else {
                tail->next = newOrder;
                tail = newOrder;
            }
        }

        void printOrders() {
            Order* current = head;
            while (current != nullptr) {
                cout << current->customer << " - " << current->drink << endl;
                current = current->next;
            }
        }

        bool isempty() {
            return head == nullptr;
        }

         Order* front() {
            return head;
        }

        void dequeueOrder() {
            if (head == nullptr) return;
            Order* temp = head;
            head = head->next;
            if (head == nullptr) tail = nullptr;
            delete temp;
        }


            
        
};


struct Customer {
    string name;
    string order;

    Customer(string n, string o) : name(n), order(o) {}
};



int main() {
    srand(time(0));

    string coffeeNames[] = {"Alice", "Bob", "Charlie", "Diana", "Eve", "Frank", "Grace", "Henry"};
    string coffeeDrinks[] = {"Espresso", "Latte", "Cappuccino", "Americano", "Mocha", "Macchiato"};


    string muffinNames[] = {"Ivy", "Jack", "Kate", "Liam", "Mia", "Noah", "Olivia", "Paul"};
    string muffinTypes[] = {"Blueberry", "Chocolate Chip", "Banana Nut", "Bran", "Lemon Poppy"};

    CoffeeShop coffeeshop;
    deque<Customer> muffinshop;

    for (int i = 0; i < 3; ++i) {
        string customer = coffeeNames[rand() % 8];
        string drink = coffeeDrinks[rand() % 6];
        coffeeshop.entQueueOrder(customer, drink);
    }
     

    for (int i = 0; i < 3; i++) {
        string name = muffinNames[rand() % 8];
        string muffin = muffinTypes[rand() % 5];
        muffinshop.push_back(Customer(name, muffin));
        cout << "  " << name << " ordered " << muffin << " muffin" << endl;
    }


    // cout << "Current Orders: " << "\n";
    // coffeeshop.printOrders();

    // for (int i = 0; i < 10; ++i) {
    //     cout << "+++ Round " << i << "+++" << endl;
    
    // if (!coffeeshop.isempty()) {
    //     Order* current = coffeeshop.front();
    //     cout << "Served: " << current->customer << endl;
    //     coffeeshop.dequeueOrder();
    //     } else {
    //         cout << "No orders to serve." << endl;
    //     }
    
    //     if (rand() % 2 == 0) {
    //     string customer = coffeeNames[rand() % 8];
    //     string drink = coffeeDrinks[rand() % 6];
    //     coffeeshop.entQueueOrder(customer, drink);
    //     cout << "New Order Added: " << customer << " - " << drink << endl;
    // }
    
    // }
    // cout << "--------------------------------------" << endl;
    // cout << "Current Orders: " << "\n";
    // if (coffeeshop.isempty()) {
    //     cout << "No more orders." << endl;
    // } else {
    //     coffeeshop.printOrders();
    // }
    
    
    #include "Car.h"
#include <cstdlib>
#include <ctime>
#include <deque>
using namespace std;

const int initalSize = 2;


    for (int i = 0; i < initalSize; i++) { //from lab 32
        Car c;
        tollbooth.push_back(c);
    }

    cout << "Start queue" << endl;
    
    for (auto& car : tollbooth) {
        cout << "    ";
        car.print();
    }


    int time = 1;

    while (!tollbooth.empty()) {
        cout << "\nTime " << time << ":\n";

        int action = rand() % 2;

        if (action == 0) {
            Car newCar;
            tollbooth.push_back(newCar);
            cout << "    New car arrived: ";
            newCar.print();
        }
        else {
            cout << "Paid toll: ";
            tollbooth.front().print();
            tollbooth.pop_front(); // take it out 
        }

        cout << "Queue: \n";

        if (tollbooth.empty()) {
            cout << "empty queue \n";
        } else {
            for (auto& car : tollbooth) {
                cout << "    ";
                car.print();
            }
        }
        
        time ++;
    
    }

    return 0;





    return 0;

}