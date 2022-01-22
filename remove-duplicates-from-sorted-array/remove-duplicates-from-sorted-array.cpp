class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int itr=0;
        int size = nums.size();
        if(size==0)
            return 0;
        for(int i=1;i<size;i++)
        {
            if(nums[i]!=nums[i-1]){
                nums[itr++]=nums[i-1];
            }
        }
        nums[itr++]=nums[size-1];
        return itr;
    }
};