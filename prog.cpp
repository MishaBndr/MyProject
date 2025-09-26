using namespace std;

#pragma once
#include <Windows.h>
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

int main() {
    srand(static_cast<int>(time(0)));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size;
    cin >> size;

    int* ptr = new int[size];

    for (int i = 0; i < size; i++) {
        ptr[i] = rand() % 51;
    }

    int max = 0;

    for (int i = 0; i < size; i++) {
        if (ptr[i] + 1 > ptr[i]) {
            max = ptr[i] + 1;
        }
    }

    cout << "Max element: " << max;
    int min = 0;
    for (int i = 0; i < size; i++) {
        if (ptr[i] + 1 < ptr[i]) {
            max = ptr[i] + 1;
        }
    }

    cout << "Min element: " << min;
    return 0;
}


