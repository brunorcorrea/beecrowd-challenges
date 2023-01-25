#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    char name[100];
    double sl, cm;

    cin >> name >> sl >> cm;

    double tt = sl + 0.15 * cm;

    cout << "TOTAL = R$ " << std::fixed << std::setprecision(2) << tt << endl;

    return 0;
}