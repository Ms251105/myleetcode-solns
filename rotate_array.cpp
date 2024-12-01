class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();          // Get the size of the array
        k = k % n;                    // Handle cases where k >= n
        vector<int> temp(k);          // Temporary array to store last 'k' elements

        // Step 1: Store last 'k' elements in 'temp'
        for (int i = n - k; i < n; i++) {
            temp[i - (n - k)] = nums[i];
        }

        // Step 2: Shift first 'n-k' elements 'k' steps to the right
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        // Step 3: Copy 'temp' elements back to the beginning
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};
