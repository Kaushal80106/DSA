class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k%=n;
        list<int> ls ;

        for(auto i:nums) {
            ls.push_back(i);
        }
        while(k--){
            int num = ls.back();
            ls.pop_back();
            ls.push_front(num);
        }
          nums.clear();
       for(auto i : ls){
        nums.push_back(i);
       }
    }
};