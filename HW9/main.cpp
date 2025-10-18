#include <iostream>
#include <cmath>
using namespace std;

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


void A() {
    double S;
    cout << "Enter the area of the square: ";
    cin >> S;

    if (S <= 0) {
        cout << "The area must be greater than 0!\n";
        return;
    }

    double a = sqrt(S);
    double P = 4 * a;
    cout << "Perimeter of a square: " << P << endl;
}

void B() {
    double R, r;
    cout << "Enter the outer radius R: ";
    cin >> R;
    cout << "Enter the inner radius r: ";
    cin >> r;

    if (R <= 0 || r <= 0 || r >= R) {
        cout << "Error: radii must be positive, and R > r.\n";
        return;
    }

    double S = M_PI * (R * R - r * r);
    cout << "Ring area: " << S << endl;
}

void C() {
    double a, b;
    cout << "Enter the side a: ";
    cin >> a;
    cout << "Enter the side b: ";
    cin >> b;

    if (a <= 0 || b <= 0) {
        cout << "The cathetus must be positive!\n";
        return;
    }

    double c = sqrt(a * a + b * b);
    double P = a + b + c;
    cout << "Perimeter of a triangle: " << P << endl;
}

void D() {
    int num;
    cout << "Enter a two-digit number: ";
    cin >> num;

    if (num < 10 || num > 99) {
        cout << "The number is not a two-digit number!\n";
        return;
    }

    int tens = num / 10;
    int ones = num % 10;
    int sum = tens + ones;
    int product = tens * ones;

    cout << "Dozens: " << tens << endl;
    cout << "Units: " << ones << endl;
    cout << "Sum of digits: " << sum << endl;
    cout << "Product of numbers: " << product << endl;
}