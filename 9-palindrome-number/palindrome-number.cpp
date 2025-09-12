class Solution {
public:
    bool isPalindrome(int x) {
       if(x < 0) return 0 ;
       string first = to_string(x) ;
       string second = to_string(x) ;
       reverse(second.begin(),second.end());

       return first == second ;
    }
};