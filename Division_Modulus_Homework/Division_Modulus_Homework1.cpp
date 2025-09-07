#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    cout << "the avg = " << (a+b+c+d+e)/5 << endl;
    cout << "the sum of 3 nums divided by the sum of last 2 = " 
         << (a+b+c)/(d+e) << endl;

    double x = (a+b+c)/3;
    double y = d+e;
    cout << x / y << endl;

    return 0;
}
