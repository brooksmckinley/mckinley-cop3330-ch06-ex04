/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Brooks McKinley
 */

#include "std_lib_facilities.h"
#include "main.h"

int main(void) {
    vector<Name_value> scores;
    cout << "Enter names in the following format: Name Score" << endl;
    while (true) {
        Name_value newName;
        cin >> newName.name >> newName.value;
        if (newName.name == "NoName" && newName.value == 0) {
            break;
        }
        // Terminate with an error if the name already exists in the scores list
        for (int i = 0; i < scores.size(); i++) {
            if (scores[i].name == newName.name) {
                cout << "ERROR: Name already exists in list!" << endl;
                return 1;
            }
        }
        // Otherwise add to list
        scores.push_back(newName);
    }
    // Print out results
    for (int i = 0; i < scores.size(); i++) {
        cout << "(" << scores[i].name << ", " << scores[i].value << ")" << endl;
    }
}