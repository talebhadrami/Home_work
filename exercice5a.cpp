//hello professor it me Abde Selam Taleb
//this is the method without using function
#include <iostream>
using namespace std;

int main() {
    double area;
    int tax = 0;
    string typeMaterial;
    string coverType;
    char Services;
    int Nfloors;

    // User input
    cout << "Enter the area of your land: ";
    cin >> area;

    cout << "Choose coverage type of your land: roof, w.roof, garden: ";
    cin >> coverType;

    cout << "Choose between these types of material: high, normal, another: ";
    cin >> typeMaterial;

    cout << "Enter the number of floors on your land: ";
    cin >> Nfloors;

    cout << "Is there water and sewerage on the property? (y/n): ";
    cin >> Services;

   // Calculation of taxes based on coverage
    if (coverType == "roof") {
        tax = 5000 * area;
    } else if (coverType == "w.roof") {
        tax = 3000 * area;
    } else if (coverType == "garden") {  
        tax = 1000 * area;
    }

   // Calculation based on the type of material
    if (typeMaterial == "high") {
        tax *= 1.15;
    } else if (typeMaterial == "normal") {
        tax *= 1.1;
    } else if (typeMaterial == "another") {
        tax *= 0.5;
    }

   // Water and sewer services
    if (Services == 'y') {
        tax += 2500;  
    }

   // Calculation based on the number of floors
    if (Nfloors == 2) {
        tax *= 1.1;
    } else if (Nfloors == 3 || Nfloors == 4) {
        tax *= 1.5;
    } else if (Nfloors > 4) {  
        tax *= 0.2;
    }

   // Display result
    cout << "Total tax: " << tax << endl;

    return 0;
}
// thank you for your attention