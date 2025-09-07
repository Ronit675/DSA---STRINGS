// # Intuition
// <!-- Describe your first thoughts on how to solve this problem. -->
// -> First thought is to match the count of the characters from given string in target string.

// # Approach
// <!-- Describe your approach to solving the problem. -->
// -> Store the frequency of the given string characters in frequency array freq1.
// -> assign another frequency array freq2.
// -> Now check for the first elemnts of the target string till size of the given string by storing in freq2 and 
// -> matching the characters with freq1 using isFreqSame function.
// -> If not found then Assign right and left of given string range and iterate after the elements that are already checked.
// -> remove the elements that are out of range from the freq2 array.
// -> Iterate for futher elements by moving left and right pointers and return true if frequency matches.

// # Complexity
// - Time complexity:
// O(n)
// where n = s2.size()

// - Space complexity:
// O(1)

class Solution {
public:
    // function to match the frequency of characters.
    bool isFreqSame(int freq1[], int freq2[]){
        for(int i =0; i<26; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()){
            return false;
        }
        //define frequency array. and store characters of s1 in freq1
        int freq1[26] = {0};
        int freq2[26] = {0};
        for(char c : s1){
            freq1[c - 'a']++;
        }

        //check for the first elements of s2 array with freq1 till s1.size() by storing in freq2 array using isFreqSame function.
        for(int i = left; i<s1.size(); i++){
            freq2[s2[i] - 'a']++;
        }
        if(isFreqSame(freq1, freq2)){
            return true;
        }

        //if not found in first s2.size() number of elements then check for further elements by defining window.
        //reduce freq for the out of range characters.
        
        int left = 0;
        int right = left + s1.size();
        while(right < s2.length()){
            freq2[s2[right] - 'a']++;
            
            int idx = right - s1.size();
            freq2[s2[idx] - 'a']--;
            if(isFreqSame(freq1, freq2)){
                return true;
            }
            left++;
            right++;
        }
        
        return false;
    }
};
