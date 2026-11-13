#include <iostream>
#include <string>
using namespace std;

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


    return 0;
}