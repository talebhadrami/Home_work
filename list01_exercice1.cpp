// hello its me Abde Selam Taleb this is the first exircice in list01
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Variables
    double k, A, omega, phi, T, xT;

    //  input of parameters k, A, and omega
    cout << "Enter value of k: ";
    cin >> k;
    cout << "enter value of A(amplitude) : ";
    cin >> A;
    cout << "Enter value of  omega (angular frequency) : ";
    cin >> omega;

    // Calculation of phi0 and T
    phi = asin(1.0 / k);
    T = (M_PI / 2 - phi) / omega;

    // Calculation of  x(T)
    xT = A * sin(omega * T + phi);

    // Affichage des résultats
    cout << "value of phi its : " << phi << endl;
    cout << "the value of T its : " << T << endl;
    cout << "value of (T) its : " << xT << endl;

    return 0;
}
// thank you for your attention 
