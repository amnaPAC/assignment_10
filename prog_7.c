#include <stdio.h>

int main() {
    float totalAmount, finalAmount;
    
    printf("Enter total shopping amount: ");
    scanf("%f", &totalAmount);
    
    if (totalAmount > 5000) {
        finalAmount = totalAmount * 0.8; // 20% discount
    } else if (totalAmount >= 3000 && totalAmount <= 5000) {
        finalAmount = totalAmount * 0.9; // 10% discount
    } else {
        finalAmount = totalAmount; // No discount
    }
    
    printf("Final amount after discount: %.2f\n", finalAmount);
    
    return 0;
}
