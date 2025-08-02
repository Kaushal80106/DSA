class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int,int> mp;
        int mini = INT_MAX ;
        for(auto i : basket1) {
            mp[i]++;
            mini = min(i,mini);
        }
         for(auto i : basket2) {
            mp[i]--;
             mini = min(i,mini);
        }
        vector<int> temp ;
        for(auto i : mp) {
            if(abs(i.second ) % 2  != 0) return -1 ;
            if(abs(i.second )> 0) {
               int count =  abs(i.second) / 2 ;
               for(int j = 0;j<count ;j++){
                temp.push_back(i.first);
               }
            }
           
        }
        if(temp.empty()) return 0 ;

         sort(temp.begin(),temp.end()) ;
         long long   int ans = 0;
            int n = temp.size() / 2 ;
           
            for(int i = 0 ;i<n;i++) {
                  ans+=min(temp[i],mini*2);
            }

        return ans ;
    }
};