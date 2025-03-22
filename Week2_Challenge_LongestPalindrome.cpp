#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        int oddCount = 0;
        unordered_map<char, int> freq;  // Frequency map to track character occurrences

        for (char ch : s) {		// count the frequency of each character
            freq[ch]++;

            // Update the odd count dynamically
            if (freq[ch] % 2 == 1)
                oddCount++;  // Odd occurrence increases count
            else    
                oddCount--;  // Even occurrence decreases count
        }
		if (oddCount > 1){
        return s.length() - oddCount + 1;		// Use at most one odd character
        }
        else{
        // If there's more than one odd character, we can only use one for the center
        return s.length();
        }
    }
};

// **Driver Code to Test the Function**
int main() {
    Solution sol;
    
    // Test cases
    cout << "Longest Palindrome Length: " << sol.longestPalindrome("abccccdd") << endl;  // Output: 7
    cout << "Longest Palindrome Length: " << sol.longestPalindrome("a") << endl;  // Output: 1
    cout << "Longest Palindrome Length: " << sol.longestPalindrome("AaBbCc") << endl;  // Output: 1
    cout << "Longest Palindrome Length: " << sol.longestPalindrome("aaabbbb") << endl;  // Output: 7

    return 0;
}
