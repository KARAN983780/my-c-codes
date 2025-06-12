#include <iostream>
using namespace std;

int main() {
    float number = 5.75;
    int intNumber;

    // Type casting float to int
    intNumber = (int)number;

    cout << "Original number (float): " << number << endl;
    cout << "After type casting to int: " << intNumber << endl;

    return 0;
}
