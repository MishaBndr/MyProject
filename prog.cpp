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

    string colour_of_text;
    string colour_of_background;
    cout << "Введите желаемый цвет текста (красный, синий или зелёный): ";
    cin >> colour_of_text;
    cout << "Введите желаемый цвет фона (красный, синий или зелёный): ";
    cin >> colour_of_background;

    if (colour_of_text == "красный") {
        cout << "\033[31m";
        if (colour_of_background == "красный") {
            cout << "Вывод отменён из-за сливающихся цветов!";
            return 1;
        }

        else if (colour_of_background == "синий") {
            cout << "\033[44m";
        }

        else if (colour_of_background == "зелёный") {
            cout << "\033[42m";
        }
        cout << "Ceci est un texte de test de la console !";
    }

    else if (colour_of_text == "синий") {
        cout << "\033[34m";
        if (colour_of_background == "красный") {
            cout << "\033[41m";
        }

        else if (colour_of_background == "синий") {
            cout << "Вывод отменён из-за сливающихся цветов!";
            return 1;
        }

        else if (colour_of_background == "зелёный") {
            cout << "\033[42m";
        }
        cout << "Ceci est un texte de test de la console !";
    }

    else if (colour_of_text == "зелёный") {
        cout << "\033[32m";
        if (colour_of_background == "красный") {
            cout << "\033[41mCeci est un texte de test de la console !";
        }

        else if (colour_of_background == "синий") {
            cout << "\033[44mCeci est un texte de test de la console !";
        }

        else if (colour_of_background == "зелёный") {
            cout << "Вывод отменён из-за сливающихся цветов!";
            return 1;
        }
        cout << "Ceci est un texte de test de la console !";
    }

    return 0;
}


