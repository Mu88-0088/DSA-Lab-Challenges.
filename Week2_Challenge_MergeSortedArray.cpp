#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Pointers for nums1, nums2, and the final merged array (nums1)
        int i = m - 1;      // Pointer to the last valid element in nums1
        int j = n - 1;      // Pointer to the last element in nums2
        int k = m + n - 1;  // Pointer to the position to place elements in nums1

        // Step 1: Merge both arrays starting from the end
        while (i >= 0 && j >= 0) {
            // Place the larger of the two elements at the current position
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];  // Place nums1[i] at position k
                i--;                  // Move pointer i backward
            } else {
                nums1[k] = nums2[j];  // Place nums2[j] at position k
                j--;                  // Move pointer j backward
            }
            k--;  // Move the position pointer backward
        }

        // Step 2: If there are remaining elements in nums2, copy them
        // (nums1's elements are already in the correct positions)
        
        while (j >= 0) {
            nums1[k] = nums2[j];  // Copy remaining elements from nums2 to nums1
            j--;                  // Move pointer j backward
            k--;                  // Move position pointer k backward
        }

        // No need to check for remaining elements in nums1 since they're already in place.
    }
};

int main() {
    Solution sol;

    // Test case
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};  // m = 3 (nums1 has space for nums2)
    vector<int> nums2 = {2, 5, 6};           // n = 3
    int m = 3;
    int n = 3;

    sol.merge(nums1, m, nums2, n);

    // Print the merged nums1
    
    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
