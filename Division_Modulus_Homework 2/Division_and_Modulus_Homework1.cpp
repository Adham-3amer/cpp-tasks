#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    bool is_even1 = (x % 2 == 0);

    int div2 = x / 2;             
    bool is_even2 = (div2 * 2 == x);

    int last_digit = x % 10;          
    bool ends_with_zero = (last_digit == 0);

    cout << "Even (method 1): " << is_even1 << endl;
    cout << "Even (method 2): " << is_even2 << endl;
    cout << "Ends with zero: " << ends_with_zero << endl;

    return 0;
}
