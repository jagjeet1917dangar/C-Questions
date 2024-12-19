#include <iostream>
#include <string>
using namespace std;

void trafficLightAction(const string& color) {
    if (color == "red")
        cout << "Stop" << endl;
    else if (color == "yellow")
        cout << "Get Ready" << endl;
    else if (color == "green")
        cout << "Go" << endl;
    else
        cout << "Invalid color" << endl;
}

int main() {
    string color;
    cout << "Enter the traffic light color (red, yellow, green): ";
    cin >> color;

    trafficLightAction(color);

    return 0;
}
