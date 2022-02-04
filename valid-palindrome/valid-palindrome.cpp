class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==1)
            return true;
        int n = s.size();
        string a;
        for(int i=0;i<n;i++){
            if(isalpha(s[i])||isdigit(s[i])){
                if(islower(s[i])){
                    a+=s[i];
                }
                else if(isupper(s[i])){
                    a+=tolower(s[i]);
                }
                else{
                    a+=s[i];
                }
            }
        }
        int k = a.size();
        int j=k-1;
        for(int i=0;i<k/2;i++){
            if(a[i]!=a[j]){
                return false;
            }
            j--;
        }
        return true;
    }
};