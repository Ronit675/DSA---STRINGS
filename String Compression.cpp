// # Intuition
// To Iterate through the array and count the consecutive similar characters and then store the count just after the character.

// # Approach
// -> Start iterating through the array and put idx variable at start which can be used for updating values.
// -> store the character in ch and count its occurences in the array.
// -> If count is 1 then replace ch with element at index idx.
// -> else store the character and convert the count into string and put that string at idx index.
// -> reduce i one time so that it can be placed correctly after incrementing once. 
// -> return and resize the array into idx.

// # Complexity
// - Time complexity:
// O(n)

// - Space complexity:
// O(1)

// # Code
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;
        for(int i = 0; i<n; i++){
            char ch = chars[i];
            int cnt = 0;
            while(i<n && chars[i] == ch){
                cnt++;
                i++;
            }
            if(cnt == 1){
                chars[idx++] = ch;
            }
            else{
                chars[idx++] = ch;
                string str = to_string(cnt);
                for(char dig : str){
                    chars[idx++] = dig;
                }
            }
            i--;
        }
        // chars.resize(idx);
        return idx;
    }
};
