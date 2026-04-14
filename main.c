#include <stdio.h>
#include <math.h>


// This is where you add the function calculate_hypotenuse
float calculate_hypotenuse(float leg1, float leg2) {
    return sqrt(pow(leg1, 2) + pow(leg2, 2));
}

int main() {
    float a = 3.0;
    float b = 4.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 5.00

    //Changing the values
    a = 5.0;
    b = 12.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 13.00

    return 0;
}