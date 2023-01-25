#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    double pi = 3.14159, r;
    cin >> r;
    
    double area = pi * (r*r);
    cout << "A=" << std::fixed << std::setprecision(4) << area << endl;

    return 0;
}