class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int i = 0 ;
        int j = i + 1 ;

        while(j < arr.size()) {
            if(arr[j] > arr[i]) {
                arr[++i] = arr[j] ;
            }
            j++;
        }

        return i+1;
    }
};