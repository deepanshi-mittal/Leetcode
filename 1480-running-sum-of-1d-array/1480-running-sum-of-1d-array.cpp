class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int sum = nums[0];
        result.push_back(nums[0]);
        int n = nums.size();
        for(int i=1;i<n;i++) {
            sum += nums[i];
            result.push_back(sum);
        }
        return result;
    }
};