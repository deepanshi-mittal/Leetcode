class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_set<int> s(nums.begin(),nums.end());
        // return !(nums.size() == s.size());
        map<int,int> m;
        for(auto n : nums)
        {
            if(!m[n]){
                m[n]=1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};