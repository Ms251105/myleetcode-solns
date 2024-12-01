#include <iostream>
using namespace std;

int main() {
    int n = 5;                      // Size of the array
    int d = 2;                      // Right shift by 2 positions
    int nums[] = {1, 2, 3, 4, 5};   // Example array
    int temp[d];                    // Temporary array to store last 'd' elements

    // Step 1: Store last 'd' elements in 'temp'
    for (int i = n - d; i < n; i++) {
        temp[i - (n - d)] = nums[i];
    }

    // Step 2: Shift first 'n-d' elements 'd' steps to the right
    for (int i = 0; i < n - d; i++) {
        nums[i + d] = nums[i];
    }

    // Step 3: Copy 'temp' elements back to the beginning
    for (int i = 0; i < d; i++) {
        nums[i] = temp[i];
    }

    // Output the final array
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
