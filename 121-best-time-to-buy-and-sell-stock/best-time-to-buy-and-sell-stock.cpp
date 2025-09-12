class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int profit = INT_MIN ;

        int buy = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < buy){
                buy = nums[i];
            }
            else if(nums[i]-buy > profit) {
                 profit = nums[i]-buy ;
            }
        }
        if(profit < 0) return 0;
        return profit ;
    }
};