#pragma once

#include <string>
using namespace std;
const int cols = 10;

void returnIndex(int arr[][cols], int rows, int value);

void modifyValue(int array[][cols], int rows, int i, int j, int newValue);

void replaceWithZero(int array[][cols], int rows, int i, int j);

void changeLastElement(int array[][cols], int rows);