class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int l = prices[0];
        int total = 0;
        for(int i=1;i<size;i++)
        {
            if(l>prices[i]){
                l=prices[i];
            }
            if(l<prices[i]){
                total+=(prices[i]-l);
                l=prices[i];
            }
        }
        return total;
    }
};