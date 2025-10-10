// # Intuition
// <!-- Describe your first thoughts on how to solve this problem. -->
// My first thought is to store the same letter words in a Data Structure
// # Approach
// <!-- Describe your approach to solving the problem. -->
// -> Declare the map which stores the string and a vector of strings
// -> Iterate through the array
// -> sort the element letter wise. for eg. eat - aet
// -> Now store all the elements which consists of letters 'aet' in a vector of strings declared in map
// -> iterate through map and store the arrays in a 2D array.

// # Complexity
// - Time complexity:
// O(Nklogk)

// - Space complexity:
// O(Nk)

// # Code

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Declare unordered_map
        unordered_map<string, vector<string>> groupanagrams;

        //iterate to store the strings
        for(const string s: strs){
            string key = s;
            sort(key.begin(), key.end());
            groupanagrams[key].push_back(s);
        }
        
        // store the vectors in the map to the 2d array
        vector<vector<string>> group;
        for(auto const &pair: groupanagrams){
            group.push_back(pair.second);
        }
        return group;
    }
};
