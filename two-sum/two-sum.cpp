class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> res(2);
        for(int i=0;i<nums.size();i++){
            int reqd = target - nums[i];
            if(m.find(reqd)!=m.end()){
                res[1]=i;
                res[0]=m[reqd];
                break;
            }
            else{
                m[nums[i]]=i;
            }
        }
        return res;
    }
};
