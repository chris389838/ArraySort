#include "pch.h"
#pragma once
#include <iostream>

// Downward merge method
void mergeSortUP(int *array, int left, int right);

// to call	-->	mergeSortUP(array, 0, 1);


// Upward merge method
void mergeSortDOWN(int *array, int sizeOfArray);

// to call	-->	mergeSortDOWN(array, sizeOfArray);