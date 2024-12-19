#include <iostream>
using namespace std;

string checkTriangleType(int a, int b, int c) {
    if (a == b && b == c) return "Equilateral";
    else if (a == b || b == c || a == c) return "Isosceles";
    else return "Scalene";
}

int main() {
    int side1, side2, side3;
    cout << "Enter the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    cout << "The triangle is " << checkTriangleType(side1, side2, side3) << "." << endl;

    return 0;
}
