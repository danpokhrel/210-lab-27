// COMSC-210 | Lab 27 | Dan Pokhrel
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <tuple>
using namespace std;

// prototypes
int menu();
void add_vil(map<string, tuple<int, string, string>> &villagers);
void delete_vil(map<string, tuple<int, string, string>> &villagers);
void increase(map<string, tuple<int, string, string>> &villagers);
void decrease(map<string, tuple<int, string, string>> &villagers);
void search(map<string, tuple<int, string, string>> &villagers);
void print(map<string, tuple<int, string, string>> &villagers);

int main() {
    //       <friendship, species, catchphrase>
    map<string, tuple<int, string, string>> villagers;

    bool quit = false;
    while (!quit){
        int choice = menu();
        switch (choice){
            case 1:
                add_vil(villagers);
                break;
            case 2:
                delete_vil(villagers);
                break;
            case 3:
                increase(villagers);
                break;
            case 4:
                decrease(villagers);
                break;
            case 5:
                search(villagers);
                break;
            case 6:
                quit = true;
                break;
        }
    }

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
    
    int choice; cin >> choice; cin.ignore();
    if (choice < 1 || choice > 6){ // Input Validation
        cout << "\n<Invalid Input>\n";
        return menu();
    }
    
    cout << endl;
    return choice;
}

void add_vil(map<string, tuple<int, string, string>> &villagers){
    // Input
    cout << "Name: ";
    string name; getline(cin, name);
    cout << "Friendship Level (0-10): ";
    int level; cin >> level; cin.ignore();
    cout << "Species: ";
    string species; getline(cin, species);
    cout << "Catchphrase: ";
    string catchphrase; getline(cin, catchphrase);
    cout << endl;

    // Map level to 0-10
    if (level < 0) level = 0;
    if (level > 10) level = 10;
    
    villagers[name] = {level, species, catchphrase}; // Add to map
    print(villagers);
}

void delete_vil(map<string, tuple<int, string, string>> &villagers){
    cout << "Name: ";
    string name; getline(cin, name);

    villagers.erase(name);
    print(villagers);
}

void increase(map<string, tuple<int, string, string>> &villagers){
    cout << "Name: ";
    string name; getline(cin, name);


}

void decrease(map<string, tuple<int, string, string>> &villagers){
    cout << "Name: ";
    string name; getline(cin, name);
}

void search(map<string, tuple<int, string, string>> &villagers){
}

void print(map<string, tuple<int, string, string>> &villagers){
    cout << "Villagers:\n";
    for (auto pair : villagers){
        cout << pair.first << "[";
        cout << get<0>(pair.second) << ", ";
        cout << get<1>(pair.second) << ", ";
        cout << get<2>(pair.second) << "]\n";
    }
    cout << endl;
}
