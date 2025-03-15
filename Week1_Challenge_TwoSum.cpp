#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
    unordered_map<int, int> numIndex; // Stores {value, index}

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        // Check if complement exists in the map by using .count()
        
        if (numIndex.count(complement)) {
            return {numIndex[complement], i}; // Found a solution
        }

        // Store current number with its index
        numIndex[nums[i]] = i;
    }

    return {}; // Should never reach here as per problem statement
}

int main() {
		// Try with different values.
    vector<int> nums = {8, 1, -5, 6, 0, 9, 7, 3};
    int target = 10;
		// store the function result in the variable result.
    vector<int> result = twoSum(nums, target);
		// print the final output which is the indices of the two values.
    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
    