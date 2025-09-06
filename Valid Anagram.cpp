// # Intuition
// <!-- Describe your first thoughts on how to solve this problem. -->
// -> First thought is to store the count of the characters in a data structure and match the count for both the strings.

// # Approach
// <!-- Describe your approach to solving the problem. -->
// -> Define two arrays of length 26 for 26 characters.
// -> store the count for one string in one array and other string in other.
// -> match the count, if matched return true.
// -> else false.

// # Complexity
// - Time complexity:
// O(s)

// - Space complexity:
// O(52)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        vector<int> v(26, 0);
        vector<int> q(26, 0);
        for(int i = 0; i<s.size(); i++){
            v[s[i] - 'a']++;
            q[t[i] - 'a']++;
        }
        for(int i = 0; i<v.size(); i++){
            if(v[i] != q[i]){
                return false;
            }
        }
        return true;
    }
};
