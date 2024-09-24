#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double g = 9.8;  // Gravitational acceleration
    double H, V, alpha;

    // Input values for H, V, and alpha
    cout << "Enter height H (in meters): ";
    cin >> H;
    cout << "Enter initial velocity V (in m/s): ";
    cin >> V;
    cout << "Enter angle alpha (in degrees): ";
    cin >> alpha;

    // Convert angle alpha from degrees to radians
    double rad_alpha = alpha * M_PI / 180.0;

    // Calculate flight time T
    double term = (1 + sqrt(1 + (2 * g * H) / (V * V * sin(rad_alpha) * sin(rad_alpha))));
    double T = (V * sin(rad_alpha) / g) * term;

    // Display flight time T
    cout << "Flight time T = " << T << " seconds" << endl;

    // Calculate x(T) and y(T)
    double x_T = V * T * cos(rad_alpha);
    double y_T = 0;  // y(T) is 0 when the stone hits the ground

    // Display positions x(T) and y(T)
    cout << "x(T) = " << x_T << " meters" << endl;
    cout << "y(T) = " << y_T << " meters" << endl;

    return 0;
}
