class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s.find(s[i])==s.find_last_of(s[i]))
                return i;
        }
        return -1;
    }
};