class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0 ;
        for(int i = 0, j = 1;i<s.length();i++,j++) {
            int ch = s[i] ;
            int code = 'z' - ch + 1 ;
            ans+=(code * j);
        }
        return ans ;
    }
};