// COMSC-210 | Lab 27 | Dan Pokhrel
#include <iostream>
#include <map>
#include <vector>
#include <tuple>
using namespace std;

// prototypes
int menu();

int main() {
    //       <friendship, species, catchphrase>
    map<string, tuple<int, string, string>> villagers;

    int choice = menu();

    return 0;
}

int menu(){
    cout << "-------------------------\n";
    cout << "1. Add Villager\n" 
        << "2. Delete Villager\n"
        << "3. Increase Friendship\n"
        << "4. Decrease Friendship\n"
        << "5. Search for Villager\n"
        << "6. Exit\n";
    cout << "-------------------------\n";
    cout << "Enter your choice: ";
    
    int choice; cin >> choice;

    return choice;
}