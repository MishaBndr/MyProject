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

    int width;
    int visota;
    string symbol;
    string colour;
    cout << "Введите ширину: ";
    cin >> visota;
    cout << "Введите высоу: ";
    cin >> width;
    cout << "Введите символ: ";
    cin >> symbol;
    cout << "введите желаемый цвет(красный, синий или зелёный): ";
    cin >> colour;

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < visota; j++) {
            if ((j >= 1 && j < visota-1) && (i != 0 && i != width - 1)) {
                
                cout << " ";
            }
            else {
                if (colour == "красный") {
                    cout << "\033[31m" << symbol;
                }

                else if (colour == "синий") {
                    cout << "\033[34m" << symbol;
                }

                else if (colour == "зелёный") {
                    cout << "\033[32m" << symbol;
                }
            }
        }
        cout << "\033[0m" << endl;
    }

 
    return 0;
}


