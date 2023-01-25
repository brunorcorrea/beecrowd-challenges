#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    double a, b;
    
    cin >> a >> b;

    double media = ((a*3.5) + (b*7.5))/11;
    cout << "MEDIA = " << std::fixed << std::setprecision(5) << media << endl;
    

    return 0;
}