class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      int row = matrix.size();
      int col = matrix[0].size();
     vector<int> arr(row,0);
    vector<int> arr2(col,0);
      for(int i = 0;i<row;i++){
        for(int j =0 ;j<col;j++){
            if(matrix[i][j] == 0) {
                arr[i] = 1 ;
                arr2[j] = 1 ;
            }
        }
      }

    for(int i = 0;i<row;i++){
        for(int j =0 ;j<col;j++){
            if(arr[i] || arr2[j]) {
                matrix[i][j] = 0 ;
            }
        }
      }
    }
};