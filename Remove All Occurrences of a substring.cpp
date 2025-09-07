// # Intuition
// <!-- Describe your first thoughts on how to solve this problem. -->
// -> First thought is to find the index of the part substring in s string and erase it.

// # Approach
// <!-- Describe your approach to solving the problem. -->
// -> Find function is used in s to return the starting index of the part string.
// -> And run a loop till we find the part string in s.
// -> And also till the s is not empty.
// -> Erase that part string using erase function.

// # Complexity
// - Time complexity:
// O(n^2/m)

// - Space complexity:
// O(1)
  
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.length();
        int m = part.length();
        
        while(n>0 && s.find(part) < n){
            s.erase(s.find(part), m);
        }
        return s;
    }
};
