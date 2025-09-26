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

    int a;
    cin >> a;
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) {
        cout << "Год высокостный.";
    }

    else {
        cout << "Год не высокостный!";
    }







    return 0;
}


