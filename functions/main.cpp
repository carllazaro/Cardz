#include <iostream>
#include "../headers/profiles.h"
#include "../headers/load_profile.h"
#include "../headers/extras.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){
    string menu[3] = {"Create profile", "Load profile", "Extras"};
    /* 
        [1] Create profile 
            └── > Name : 
                > Age :
                > Customization
        [2] Load profile
            ├   Profile section
            ├── > Profile 1
            ├── > Profile 2
            └── > Profile 3
        [3] Extras
            └── My Link
    */
    for(int i = 0; i < 3; i++){
        cout << "[" << i + 1 << "] " << menu[i] << endl;
    }
    int pick;
    cout << "Select: ";
    cin >> pick;
    switch(pick){
        case 1:
            profiles();
            break;
        case 2:
            load_profile();
            break;
        case 3:
            extras();
            break;
        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}