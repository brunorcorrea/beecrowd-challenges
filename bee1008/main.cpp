#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    int num, hrs;
    double val;

    cin >> num >> hrs >> val;
    double sl = hrs * val;
    
    cout << "NUMBER = " << num << endl << "SALARY = U$ " << std::fixed << std::setprecision(2) << sl << endl;

    return 0;
}