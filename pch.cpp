#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

void returnIndex(int array[][cols], int rows, int newvalue) {
    //function to Report the locationn of requested value

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] == newvalue) {   //if value present in array
                cout << "Found " << newvalue << " at position (" << i << ", " << j << ")" << endl;
            }
        }
    }
}

void modifyValue(int array[][cols], int rows, int i, int j, int newValue) {
    int oldValue = array[i][j];
    array[i][j] = newValue;
    cout << "Old value: " << oldValue << ", New value: " << newValue << endl;
}

void replaceWithZero(int array[][cols], int rows, int i, int j) {
    int oldValue = array[i][j];
    int zero = 0;
    array[i][j] = zero;
    cout << "Replaced " << oldValue << " at position (" << i << ", " << j << ") with 0" << endl;
}

void changeLastElement(int array[][cols], int rows) {
    int newValue;
    cout << "Enter the new value: ";
    cin >> newValue;
    array[rows - 1][cols - 1] = newValue;
    cout << "Last element has been changed to " << newValue << endl;
}