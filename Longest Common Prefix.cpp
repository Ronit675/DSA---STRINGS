// # Intuition
// <!-- Describe your first thoughts on how to solve this problem. -->
// -> First thought is to iterate and check for the first array element if it is found in the other elements or not.
// # Approach
// <!-- Describe your approach to solving the problem. -->
// -> Assign string prefix as first element.
// -> Iterate through the array from second element.
// -> If the prefix does not matches at the start of the string then trim the prefix from the end.
// -> if prefix is empty then return empty string.
// # Complexity
// - Time complexity:
// O(S)

// - Space complexity:
// O(1)

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0){
            return "";
        }
        string prefix = strs[0];
        for(int i = 1; i<strs.size(); i++){
          // loop will run untill the prefix does not matches from the start.
            while(strs[i].find(prefix) != 0){
                prefix = prefix.substr(0, prefix.length()-1);
                if(prefix.empty()){
                    return "";
                }
            }
        }
        return prefix;
    }
};
