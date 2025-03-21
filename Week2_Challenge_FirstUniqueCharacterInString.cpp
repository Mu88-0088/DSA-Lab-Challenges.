#include <iostream>
using namespace std;

class Solution {
public:
    // Function to find the first non-repeating character in a string
    int firstUniqChar(string s) {
    
        // Edge case: If the string is empty, return -1
        if (s.empty()) {
            return -1;
        };

        int freq[26] = {0}; 		// Array to store frequency of each lowercase letter

        // First pass: Count occurrences of each character
        for (char ch : s) {
            freq[ch - 'a']++; 	  // Convert character to index (0-25) and increment count
        }

        // Second pass: Find the first character with frequency = 1
        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i; 		  // Return the index of the first unique character
            }
        }

        return -1; 		// If no unique character is found, return -1
    }
};

int main() {
    Solution sol;

    // Test Cases
    string test1 = "leetcode";          // Unique character at index 0 ('l')
    string test2 = "loveleetcode";  	// Unique character at index 2 ('v')
    string test3 = "aabb";          	// No unique character (-1)

    // Output results
    cout << "Test 1 (\"lettcode\"): " << sol.firstUniqChar(test1) << endl;  	// Expected Output: 0
    cout << "Test 2 (\"loveleetcode\"): " << sol.firstUniqChar(test2) << endl;  // Expected Output will be: 2
    cout << "Test 3 (\"aabb\"): " << sol.firstUniqChar(test3) << endl;  		// Expected Output: -1

    return 0;
}
