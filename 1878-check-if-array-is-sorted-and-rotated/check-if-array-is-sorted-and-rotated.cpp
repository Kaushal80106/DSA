class Solution {
public:
    bool check(vector<int>& nums) {
        int n  = nums.size();
        int num = -1 ;
        for(int i = 0 ;i<n-1;i++){
             if(nums[i] > nums[i+1]) 
             {
                num = i ;
                break ;
             }
        }
         if (num == -1) return true ;
        reverse(nums.begin() ,nums.begin() + num +1 );
        reverse(nums.begin()+num+1,nums.end() ) ;
        reverse(nums.begin(),nums.end()) ;
          for(int i = 0 ;i<n-1;i++){
             if(nums[i] > nums[i+1]) 
             {
               return false ;
        }
        }

        return true ;

    }
};