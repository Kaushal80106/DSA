class Solution {
public:
    string reverseWords(string s) {

        int left = 0;
    int right = s.size() - 1;

    // move left pointer until a non-space is found
    while (left <= right && isspace(s[left])) {
        left++;
    }

    // move right pointer until a non-space is found
    while (right >= left && isspace(s[right])) {
        right--;
    }

    // substring from left to right
    s = s.substr(left, right - left + 1);
        stack<char> st ;
        for(auto i : s){
            st.push(i);
        }
         string temp = "";
         string ans = "";
        while(!st.empty()) {
             if(!isalnum(st.top())) {
                (reverse(temp.begin(),temp.end())) ;
                if(temp.size()>0){
                ans+=temp ;
                 temp ="";
                ans+=" ";
                }
        
                st.pop();
             }
             else {
                temp+=st.top();
                st.pop();
             }
        }
        (reverse(temp.begin(),temp.end())) ;
        ans+=temp;
      
        return ans ;
    }
};