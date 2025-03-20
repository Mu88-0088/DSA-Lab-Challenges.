#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
     // Function to reverse the input string (vector of characters) in-place
    void reverseString(vector<char>& m) {
        int left = 0;   		// Left pointer starts at the beginning
        int right = m.size() - 1;  // Right pointer starts at the end
        while (left < right) {	    // Swap until the pointers meet in the middle
            swap(m[left], m[right]);  // Swap characters at left and right indices
            left++; 			 	// Move left pointer forward
            right--; 				// Move right pointer backward
        }
    };
};
// Function to print the vector contents as a string
void printVector(vector<char>& vec) { 		// Iterate through vector elements and print each character
	for (char a : vec) {
        cout << a;
    };
    cout << endl;
};

int main() {
    Solution Sol; 			// Create an instance of the Solution class
    vector<char> test = {'h', 'e', 'l', 'l', 'o'};	// Test input string (as a vector)
    cout <<"Original String: ";
    printVector(test);  		// Print the original string
    Sol.reverseString(test);    // Reverse the original string by calling the revesedString function
    cout << "Reversed String will be: ";
    printVector(test);		// Print the reversed string
    return 0;
};
