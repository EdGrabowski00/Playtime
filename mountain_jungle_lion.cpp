#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Struct to store toys available
struct Toy {
    string name;
    int price;
    int ageGroup;
};

// Vector to store all toys
vector<Toy> toys;

// Function to fill vector of toys
void fillToys() {
    Toy t1;
    t1.name = "Lego Blocks";
    t1.price = 15;
    t1.ageGroup = 5;
    toys.push_back(t1);
    
    Toy t2;
    t2.name = "Barbie Doll";
    t2.price = 10;
    t2.ageGroup = 6;
    toys.push_back(t2);
    
    Toy t3;
    t3.name = "Theater Set";
    t3.price = 25;
    t3.ageGroup = 8;
    toys.push_back(t3);
    
    Toy t4;
    t4.name = "Train Set";
    t4.price = 20;
    t4.ageGroup = 3;
    toys.push_back(t4);
    
    Toy t5;
    t5.name = "Race Car Set";
    t5.price = 15;
    t5.ageGroup = 4;
    toys.push_back(t5);
    
    Toy t6;
    t6.name = "Building Blocks";
    t6.price = 10;
    t6.ageGroup = 5;
    toys.push_back(t6);
    
    Toy t7;
    t7.name = "Puzzle Set";
    t7.price = 12;
    t7.ageGroup = 7;
    toys.push_back(t7);
    
    Toy t8;
    t8.name = "Doll House";
    t8.price = 25;
    t8.ageGroup = 6;
    toys.push_back(t8);
    
    Toy t9;
    t9.name = "Action Figure Set";
    t9.price = 30;
    t9.ageGroup = 8;
    toys.push_back(t9);
}

// Function to print list of available toys
void printToys() {
    cout << "Available toys:" << endl;
    for (int i = 0; i < toys.size(); i++) {
        cout << toys[i].name << " (age group " << toys[i].ageGroup << ") - $" << toys[i].price << endl;
    }
    cout << endl;
}

// Function to search toys by age group
void searchToysByAgeGroup(int ageGroup) {
    cout << "Toys for age group " << ageGroup << ":" << endl;
    for (int i = 0; i < toys.size(); i++) {
        if (toys[i].ageGroup == ageGroup) {
            cout << toys[i].name << " - $" << toys[i].price << endl;
        }
    }
    cout << endl;
}

// Function to sort toys by price
void sortToysByPrice() {
    cout << "Sorting toys by price..." << endl;
    sort(toys.begin(), toys.end(),
         [](Toy a, Toy b) {
             return a.price < b.price;
         });
    printToys();
}

int main() {
    cout << "Welcome to the toy store!" << endl;
    cout << "We offer a wide selection of fun and educational toys for children of all ages." << endl;
    fillToys();
    printToys();
    int ageGroup;
    cout << "Enter age group to search for toys: ";
    cin >> ageGroup;
    searchToysByAgeGroup(ageGroup);
    sortToysByPrice();
    return 0;
}