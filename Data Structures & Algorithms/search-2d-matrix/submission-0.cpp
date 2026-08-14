class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> store;
        for (int i=0;i<matrix.size();i++){
            for (int j=0;j<matrix[0].size();j++){
                if (matrix[i][j]==target) return true;
            }
        }
        return false;
        // int i=0,j=store.size()-1;
        // while(i<=j){
        //     int mid=i+(j-i)/2;
        //     if (store[mid]==target){
        //         return return;
        //     }
        // }
    }
};
