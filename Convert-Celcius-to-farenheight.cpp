#include <iostream>
using namespace std;
int main()
{
    double c , f;
    cout << "Enter temperature in Celsius: ";
    cin >> c;
    f = (c * 9.0 / 5.0) + 32;
    cout << c << "C is " << f << "F" ;
    return 0;
}
