// # Intuition
// <!-- Describe your first thoughts on how to solve this problem. -->
// -> To check if the left characters and right characters are same or not.
// -> and the characters should be alpa numeric characters.

// # Approach
// <!-- Describe your approach to solving the problem. -->
// -> Take two pointers left and right
// -> run a loop to check if the left and the right are alpha numeric or not.
// -> iswalnum is the function that returns if the character is aplhanumeric or not.
// -> if not then move the pointer.
// -> if left element and right element are not same in lowercase then return false.
// -> else keep moving pointers.

// # Complexity
// - Time complexity:
// <!-- Add your time complexity here, e.g. $$O(n)$$ -->
// -> O(N)
// - Space complexity:
// <!-- Add your space complexity here, e.g. $$O(n)$$ -->
// -> O(1)


class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;
        while(left <= right){
            while(left < right && !iswalnum(s[left])){
                left++;
            }
            while(left < right && !iswalnum(s[right])){
                right--;
            }
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
