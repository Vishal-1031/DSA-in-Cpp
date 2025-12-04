class Solution {
public:
    int numberOfSubstrings(string s) {
        int freq[] = {-1,-1,-1};// for a,b,c
        int cnt = 0, mini = 0;
        for(int i = 0; i < s.size(); i++){
            freq[s[i]-'a'] = i;
            if(freq[0] != -1 && freq[1] != -1 && freq[2] != -1)
            {
                mini = min(freq[0], freq[1]);
                cnt = cnt + (1 + min(mini, freq[2]));
            }
        }
        return cnt ;
    }
};