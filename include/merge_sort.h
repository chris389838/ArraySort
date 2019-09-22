#include "pch.h"
#pragma once
#include <iostream>

// Функция сортировки нисходящим слиянием
void mergeSortUP(int *array, int left, int right);

// to call	-->	mergeSortUP(array, 0, 1);


// Метод восходящего слияния
void mergeSortDOWN(int *array, int sizeOfArray);

// to call	-->	mergeSortDOWN(array, sizeOfArray);