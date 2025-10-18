#include <iostream>
#include <windows.h>
#include "root.h"
using namespace std;

int main() {
    int choice;
    while (true) {
        cout << "\nMenu:\n";
        cout << "1 - Find the perimeter of a square given its area\n";
        cout << "2 - Find the area of the ring\n";
        cout << "3 - Perimeter of a right triangle\n";
        cout << "4 - Analysis of a two-digit number\n";
        cout << "0 - Esc\n";
        cout << "Your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting the program...\n";
            break;
        }

        switch (choice) {
        case 1:
            A();
            break;
        case 2:
            B();
            break;
        case 3:
            C();
            break;
        case 4:
            D();
            break;
        default:
            cout << "The selection is incorrect, please try again.\n";
        }
    }

    return 0;
}