//
//  main.cpp
//  Assignment_3
//
//  Created by Noah Honickman on 12/25/20.
//

#include <iostream>
#include <cstring>
#include <string>
int main() {
    using namespace std;
    string firstname;
    string lastname;
    cout<< "Enter your first name. \n";
    cin >>  firstname;
    cout << "\n";
    cout << "Enter your last name. \n";
    cin >> lastname;
    cout << "\n";
    string combined = lastname + ", " + firstname;
    cout << " Here is the information in a single string: " << combined << "\n"; 
    
    
    return 0;
}
