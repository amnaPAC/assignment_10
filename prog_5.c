#include <stdio.h>

int main() {
    float temperature, convertedTemp;
    char unit;
    
    printf("Enter temperature (e.g., 25C or 77F): ");
    scanf("%f %c", &temperature, &unit);
    
    if (unit == 'C' || unit == 'c') {
        convertedTemp = (temperature * 9/5) + 32;
        printf("%.2fC is equal to %.2fF\n", temperature, convertedTemp);
    } else if (unit == 'F' || unit == 'f') {
        convertedTemp = (temperature - 32) * 5/9;
        printf("%.2fF is equal to %.2fC\n", temperature, convertedTemp);
    } else {
        printf("Invalid unit. Please use 'C' for Celsius or 'F' for Fahrenheit.\n");
    }
    
    return 0;
}
