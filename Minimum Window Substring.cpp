// # Intuition
// <!-- Describe your first thoughts on how to solve this problem. -->
// -> First thought is to iterate through the string find the substring using two pointer approach

// # Approach
// <!-- Describe your approach to solving the problem. -->
// -> Declare two pointers, one starting index variable to track index, variable to track minimum length and cnt variable.
// -> Declare hash map
// -> Store the cnt of elements from string t in hash map
// -> Iterate through the string s and if element of string t is found then increase the count.
// -> decrease the value for other characters.
// -> If the cnt reaches the length of string t then run a loop.
// -> check for the minimum value and if the minimum value is greater than current length then mark the left pointer as starting index,
// -> and assign new length.
// -> Increase the value that has been decreased previously
// -> In this loop if value of character found is positive then decrease the count and move forward with the left pointer.
// -> return sub string from starting index till minimum length.

// # Complexity
// - Time complexity:
// O(N)

// - Space complexity:
// O(256)

// # Code


class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        int i = 0;
        int j = 0;
        int sind = -1;
        int mini = 1e8;
        int cnt = 0;
        vector<int> hash(256, 0);
        for(int k = 0; k<m; k++){
            hash[t[k]]++;
        }
        while(j<n){
            if(hash[s[j]] > 0){
                cnt++;
            }
            hash[s[j]]--;
            while(cnt == m){
                if(mini > j-i+1){
                    sind = i;
                    mini = j-i+1;
                }
                hash[s[i]]++;
                if(hash[s[i]] > 0){
                    cnt--;
                }
                i++;
            }
            j++;
        }
        return sind == -1?"": s.substr(sind, mini);
    }
};
