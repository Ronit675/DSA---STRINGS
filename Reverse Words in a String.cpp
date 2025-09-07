// # Intuition
// <!-- Describe your first thoughts on how to solve this problem. -->
// -> First thought is to iterate in string, reverse it, and print it using string stream

// # Approach
// <!-- Describe your approach to solving the problem. -->
// -> Using string stream store the words in a vector.
// -> reverse the array.
// -> declare a result string and put the vector elements in that string.

// # Complexity
// - Time complexity:
// -> O(n)

// - Space complexity:
// -> O(n)

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string words;
        vector<string> word;
        while(ss >> words){
            word.push_back(words);
        }
        reverse(word.begin(), word.end());
        string result;
        for(int i = 0; i<word.size(); i++){
            result += word[i];
            if(i != word.size() - 1){
                result += ' ';
            }
        }
        return result;
    }
};
