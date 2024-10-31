#include <iostream>
#include <cmath> // for M_PI constant in some compilers, or use 3.14159 manually
using namespace std;

int main() {
    int choice;
    double radius, length, width, base, height, area;

    do {
        // Display menu
        cout << "Geometry Calculator\n";
        cout << "1. Calculate the Area of a Circle\n";
        cout << "2. Calculate the Area of a Rectangle\n";
        cout << "3. Calculate the Area of a Triangle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // Input validation for menu choice
        if (choice < 1 || choice > 4) {
            cout << "Invalid choice. Please select a number between 1 and 4.\n";
            continue;
        }

        switch (choice) {
            case 1: // Area of a Circle
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                if (radius < 0) {
                    cout << "Invalid input. Radius cannot be negative.\n";
                } else {
                    area = 3.14159 * radius * radius;
                    cout << "The area of the circle is: " << area << endl;
                }
                break;

            case 2: // Area of a Rectangle
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                if (length < 0 || width < 0) {
                    cout << "Invalid input. Length and width cannot be negative.\n";
                } else {
                    area = length * width;
                    cout << "The area of the rectangle is: " << area << endl;
                }
                break;

            case 3: // Area of a Triangle
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                if (base < 0 || height < 0) {
                    cout << "Invalid input. Base and height cannot be negative.\n";
                } else {
                    area = 0.5 * base * height;
                    cout << "The area of the triangle is: " << area << endl;
                }
                break;

            case 4: // Quit
                cout << "Exiting the program.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}