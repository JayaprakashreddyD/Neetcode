class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=matrix.size()-1;
        int idx=0;
        while(i<=j && j>=0 && i<matrix.size()){
            int mid=i+(j-i)/2;
            if (matrix[mid][0]==target){
                return true;
            }
            else if (matrix[mid][0]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
            cout<<"i->"<<i<<"j->"<<j<<endl;
        }
        idx=j;
        cout<<"Idx->"<<idx;
        if (idx<0 || idx>matrix.size()-1) return false;
        i=0;
        j=matrix[0].size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if (matrix[idx][mid]==target){
                return true;
            }
            else if (matrix[idx][mid]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return false;
    }
};
