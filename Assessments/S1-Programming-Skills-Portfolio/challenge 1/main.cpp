#include <iostream>
#include <string>
using namespace std;

void UserInput(float& CarMiles, float& Usage) {
    cout << "How many miles do you drive in a month: ";
    cin >> CarMiles;

    cout << "How many hours do you use electricity in a month: ";
    cin >> Usage;
}

float TotalEmissions(float CarMiles, float Usage) {
    float CarMiles2 = CarMiles * 0.25;
    float Usage2 = Usage * 0.20;
    float Total = CarMiles2 + Usage2;
    return Total; 
}

string TotalUsed(float Total) {
    if (Total < 100) {
        return "Low";
    } else if (Total >= 100 && Total < 300) {
        return "Medium";
    } else {
        return "High";
    }
}

int main() {
    float CarMiles;
    float Usage;

    UserInput(CarMiles, Usage);

    float Total = TotalEmissions(CarMiles, Usage);

    cout << "Your total emissions are: " << Total << " kg" << endl;
    cout << "Your classification is: " << TotalUsed(Total) << endl;

    return 0;
}