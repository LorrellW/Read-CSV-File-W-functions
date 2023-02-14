//Lorrell Winfield
// CS 303 Assignment 1
#include "pch.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

// Define the name of the file containing the data
string filename = "integers2.txt";

// Define the number of rows in the array
const int rows = 10;

// Define the main function
int main() {

    // Declare a 2D array to store the data from the file
    int array[rows][cols];

    // Open the file
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error opening file" << endl;
        return 0;
    }

    // Read the data from the file and store it in the array
    string line;
    int rows = 0;
    while (getline(file, line)) {
        stringstream sstream(line);
        string cell;
        int c = 0;
        while (getline(sstream, cell, ',')) {
            array[rows][c] = stoi(cell);
            c++;
        }
        rows++;
    }
    file.close();

    // Test the array manipulation functions on the data
    replaceWithZero(array, rows, 1, 1);
    modifyValue(array, rows, 1, 1, 2);
    returnIndex(array, rows, 2);
    cout << "testing" << endl;

    // Print the data from the array to check if it was read correctly
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // End the program
    return 0;
}