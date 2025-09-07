// # Intuition
// <!-- Describe your first thoughts on how to solve this problem. -->
// -> 
// # Approach
// <!-- Describe your approach to solving the problem. -->
// -> 
// # Complexity
// - Time complexity:
// O(n)
// where n = s2.size()

// - Space complexity:
// O(1)

class Solution {
public:
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
        int freq1[26] = {0};
        int freq2[26] = {0};
        for(char c : s1){
            freq1[c - 'a']++;
        }

        int left = 0;
        for(int i = left; i<s1.size(); i++){
            freq2[s2[i] - 'a']++;
        }
        if(isFreqSame(freq1, freq2)){
            return true;
        }
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
