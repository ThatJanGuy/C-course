#include <stdio.h>

// Prototypes
double metersToFeet(double);
double gramsToPounds(double);
double celsiusToFahrenheit(double);


// MAIN
int main(void){
    int noOfConversions = 0;
    int maxNoOfConversions = 10;
    double inOutValues[maxNoOfConversions];
    char inOutUnits[maxNoOfConversions];

    scanf("%d", &noOfConversions);

    for (int i = 0; i < noOfConversions; i++){
        scanf("%lf %c", &inOutValues[i], &inOutUnits[i]);
    }

    for (int i = 0; i < noOfConversions; i++){
        if (inOutUnits[i] == 'm') {
            printf("%lf ft\n", metersToFeet(inOutValues[i]));
        } else if (inOutUnits[i] == 'g') {
            printf("%lf lbs\n", gramsToPounds(inOutValues[i]));
        } else if (inOutUnits[i] == 'c') {
            printf("%lf f\n", celsiusToFahrenheit(inOutValues[i]));
        }
    }
    return (0);
}

//Functions
double metersToFeet(double input){
    return (input * 3.28080);
}

double gramsToPounds(double input){
    return (input * 0.002205);
}

double celsiusToFahrenheit(double input){
    return ((input * 9 / 5) + 32);
}