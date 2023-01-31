#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int cod1, num1, cod2, num2;
    double val1, val2;
    
    cin >> cod1 >> num1 >> val1;
    cin >> cod2 >> num2 >> val2;

    double total = (num1 * val1) + (num2 * val2);
    
    cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << total << endl;
    
    return 0;
}