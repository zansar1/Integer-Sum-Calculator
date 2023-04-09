#include <stdio.h>

int main() {
    // this declare variables
    int nums[5];
    int sum = 0;
    
    // this loop prompts user to enter 5 integers and store them in the array
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i+1);
        scanf("%d", &nums[i]);
    }
    
    // this loop calculates the sum of integers in the array
    for (int i = 0; i < 5; i++) {
        sum += nums[i];
    }
    
    // this displays the sum of integers on the screen
    printf("The sum of the integers is: %d\n", sum);
    
    return 0;
}