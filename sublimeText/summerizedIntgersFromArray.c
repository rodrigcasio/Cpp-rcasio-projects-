#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50}; // Your array
    int size = sizeof(array) / sizeof(array[0]); // Get array size
    int sum = 0; // Variable to store the total
    
    // Add each element to sum
    for(int i = 0; i < size; i++) {
        sum = sum + array[i]; // or simply: sum += array[i]
    }
    
    // Print the result
    printf("The sum of all elements is: %d\n", sum);
    
    return 0;
}