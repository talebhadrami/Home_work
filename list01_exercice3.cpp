#include <iostream>
#include <cmath>  // For abs(), log(), sqrt(), pow()
using namespace std;

int main() {
    double x, g_x, f_gx;

    // Input value for x
    cout << "Enter the value of x: ";
    cin >> x;

    // Calculate g(x) based on the given conditions
    if (x > 5) {
        g_x = log(x + 10) - 2;
    } 
    else if (x >= -1 && x <= 5) {
        g_x = sqrt(5 - x);
    } 
    else if (x >= -4 && x < -1) {
        g_x = (x + 6) / (abs(x + 3) - 3);
        if (abs(x + 3) == 3) {  // Avoid division by zero
            cout << "Impossible to calculate — g(x) is undefined (division by zero)." << endl;
            return 0;
        }
    } 
    else {
        cout << "Impossible to calculate — g(x) is out of the domain." << endl;
        return 0;
    }

    // Now calculate f(g(x)) based on the value of g(x)
    if (g_x < -2) {
        f_gx = g_x / (1 - g_x);
    } 
    else if (g_x >= -2 && g_x <= 1) {
        f_gx = pow(g_x, 2);
    } 
    else {
        cout << "Impossible to calculate — f(g(x)) is out of the domain." << endl;
        return 0;
    }

    // Output the result f(g(x))
    cout << "f(g(x)) = " << f_gx << endl;

    return 0;
}
