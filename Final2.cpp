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
    
}






int main() {
    srand(time(0));

    string coffeeNames[] = {"Alice", "Bob", "Charlie", "Diana", "Eve", "Frank", "Grace", "Henry"};
    string coffeeDrinks[] = {"Espresso", "Latte", "Cappuccino", "Americano", "Mocha", "Macchiato"};


}