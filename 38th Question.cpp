### 1st approach ###

#include <iostream>
using namespace std;
float convert(float celsius) {
    return (celsius * 9 / 5) + 32;
}
int main() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    float fahrenheit = convert(celsius);
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    return 0;
}