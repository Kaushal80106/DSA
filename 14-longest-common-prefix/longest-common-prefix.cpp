class Solution {
public:

    void check(string&  sub,string b){
        int size = min(sub.length(),b.length()) ;
        int ans = 0 ;
        for(int i = 0;i<size;i++){
            if(sub[i] != b[i]) {
                break;
            }
            ans = i+1 ;
        }
      
        sub = sub.substr(0,ans);

    }
    string longestCommonPrefix(vector<string>& strs) {
        
        string sub = strs[0];

        for(int i = 1 ;i<strs.size();i++) {
            check(sub,strs[i]);
            if(sub == "" ) return sub ;
        }


        return sub ;

    }
};