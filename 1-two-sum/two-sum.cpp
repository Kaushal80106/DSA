class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp ;
        int n = nums.size();
        for(int i = 0 ;i<n;i++) {
           mp[nums[i]] = i ;
        }

        for(int i = 0 ;i<n;i++) {

            int t = target - nums[i];
           if(mp.find(t) != mp.end()) {
            if(i != mp[t] ) {
            return {i,mp[t]}; }
           }
        }

        return {-1,-1};
    }
};