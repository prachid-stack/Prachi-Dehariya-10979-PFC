#include <stdio.h>

int main() {
    int units;
    float billAmount = 0.0;

    printf("Enter total electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        billAmount = units * 1.50;
    } 
    else if (units <= 200) {
        billAmount = (100 * 1.50) + (units - 100) * 2.50;
    } 
    else if (units <= 300) {
        billAmount = (100 * 1.50) +
                     (100 * 2.50) +
                     (units - 200) * 4.00;
    } 
    else {
        billAmount = (100 * 1.50) +
                     (100 * 2.50) +
                     (100 * 4.00) +
                     (units - 300) * 6.00;
    }

    billAmount += 50;

    printf("\nTotal Bill Amount: %.2f\n", billAmount);

    return 0;
}