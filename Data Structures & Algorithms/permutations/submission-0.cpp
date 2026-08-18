class Solution {
public:
    void permutations(vector<int> nums,int n,int idx,vector<vector<int>>& ans){
        if (idx==n){
            ans.push_back(nums);
        }
        for (int i=idx;i<n;i++){
            swap(nums[idx],nums[i]);
            permutations(nums,n,idx+1,ans);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int idx=0;
        permutations(nums,nums.size(),idx,ans);
        return ans;
    }
};
