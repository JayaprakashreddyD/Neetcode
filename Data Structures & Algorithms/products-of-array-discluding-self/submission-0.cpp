class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix,suffix;
        prefix.push_back(1);
        suffix.push_back(1);
        int presum=1,sufsum=1;
        for (auto i : nums ){
            presum*=i;
            prefix.push_back(presum);
        }
        for (int i=nums.size()-1;i>0;i--){
            sufsum*=nums[i];
            suffix.push_back(sufsum);
        }
        vector<int> ans;
        for (int i=0;i<nums.size();i++){
            ans.push_back(prefix[i]*suffix[nums.size()-i-1]);
        }
        return ans;
    }
};
