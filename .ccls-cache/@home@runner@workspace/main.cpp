#include <iostream>
#include <cmath> // for ceil function
using namespace std;

int main() {
    double weight, distance, rate;
    int distanceSegments;

    // Get package weight
    cout << "Enter the weight of the package (in kg): ";
    cin >> weight;

    // Validate package weight
    if (weight <= 0 || weight > 20) {
        cout << "Invalid weight. The weight must be more than 0 and no more than 20 kg.\n";
        return 1; // exit program with error
    }

    // Get shipping distance
    cout << "Enter the distance to be shipped (in miles): ";
    cin >> distance;

    // Validate shipping distance
    if (distance < 10 || distance > 3000) {
        cout << "Invalid distance. The distance must be between 10 and 3000 miles.\n";
        return 1; // exit program with error
    }

    // Determine rate based on weight
    if (weight <= 2) {
        rate = 1.10;
    } else if (weight <= 6) {
        rate = 2.20;
    } else if (weight <= 10) {
        rate = 3.70;
    } else {
        rate = 4.80;
    }

    // Calculate the number of 500-mile segments (rounding up)
    distanceSegments = ceil(distance / 500);

    // Calculate total cost
    double totalCost = distanceSegments * rate;

    // Display the shipping charges
    cout << "The shipping charge is: $" << totalCost << endl;

    return 0;
}