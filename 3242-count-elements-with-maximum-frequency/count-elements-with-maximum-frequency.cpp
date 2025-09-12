class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto i:nums) {
            mp[i]++;
        }

        int ans = INT_MIN ;

        for(auto i : mp){
            if(i.second > ans) {
                ans = i.second;
            }
        }
         int count = 0;

       for(auto i:mp){
        if(i.second == ans) count++;
       }

       return count*ans;
    }
};