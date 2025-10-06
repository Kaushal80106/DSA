class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCon = 0 ;
        bool one = false ;
        int temp = 0 ;
        for( auto i : nums) {
             if( i == 0){
                maxCon = max(maxCon,temp);
                temp = 0 ;
                one = false ;
             }
             else {
                if(one){
                    temp++;
                } else {
                  one = 1 ;
                  temp++;
                }
             }
        }
        maxCon = max(maxCon,temp);
        return maxCon ;
    }
};