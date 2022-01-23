class Solution {
public:
    int gcdnum(int a, int b){
        if(b==0)
            return a;
        return gcdnum(b,a%b);
    }
    void rotate(vector<int>& nums, int k) {
        // this solution is of time complexity : O(n) and space complexity : O(n)
        /*int size = nums.size();
        vector<int> temp(size);
        for(int i=0;i<size;i++)
        {
            temp[(i+k)%size] = nums[i];
        }
        nums = temp;*/
        
        // this solution is of time complexity : O(n) and space complexity : O(1)
        int n = nums.size();
        k = k%n;
        int gcd = gcdnum(k,n);
        for(int i=n-1;i>=(n-gcd);i--){
            int temp = nums[i];
            int j=i;
            while(1){
                int d = j-k;
                if(d<0){
                    d = n+d;
                }
                if(d == i){
                    break;
                }
                nums[j] = nums[d];
                j=d;
            }
            nums[j] = temp;
        }
    } 
};
