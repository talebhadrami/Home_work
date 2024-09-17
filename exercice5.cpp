//hello professor it me Abde Selam Taleb
//this is the second methode with using function
#include <iostream>
using namespace std;

// Function for calculating land tax
double calculateTax(int area, string coverType, string materialType, bool Services, int floors) {
    double Tax;

    // 1. Coverage type
    if (coverType == "roof") {
        Tax = 5000 * area;
    } else if (coverType == "no_roof") {
        Tax = 3000 * area;
    } else if (coverType == "garden") {
        Tax = 1000 * area;
    } else {
        cout << "choise a good type of covert" << endl;
        return 0;
    }

    // 2. Material type
    if (materialType == "high_quality") {
        Tax *= 1.15;
    } else if (materialType == "adobe") {
        Tax *= 1.10;
    } else if (materialType == "other") {
        Tax *= 1.05;
    } else {
        cout << "Wrong material type" << endl;
        return 0;
    }   

    // 3. Availability of basic services (water and sewerage)
    if (Services==true) {
        Tax += 2500;
    }

    // 4. Number of floors of the building
    if (floors == 2) {
        Tax *= 1.10;
    } else if (floors == 3 || floors == 4) {
        Tax *= 1.15;
    } else if (floors > 4) {
        Tax *= 1.20;
    }

    return Tax;
}

int main() {
    int area;
    string coverType, materialType;
    bool Services;
    int floors;
    char servicesOption;

    //User input
    cout << "Enter the area of the land ";
    cin >> area;

    cout << "Enter the type of covering (roof, no_roof, garden): ";
    cin >> coverType;

    cout << "Enter material type (high_quality, adobe, other): ";
    cin >> materialType;

    cout <<"Is there water and sewerage on the property? (y/n): ";
    cin >> servicesOption;
    Services = (servicesOption == 'y');

    cout << "Enter the number of floors: ";
    cin >> floors;

    // Tax calculation
    double totalTax = calculateTax(area, coverType, materialType, Services, floors);

    //Output of the result of calculation of
    cout << "Total tax amount: " << totalTax << " rubels" << endl;

    return 0;
}
// thank you for your attention