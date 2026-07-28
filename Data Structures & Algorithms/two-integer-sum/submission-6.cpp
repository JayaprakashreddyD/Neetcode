class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for (auto i : nums){
            mp[i]++;
        }
        int temp=0,idx1=-1,idx2=-1;
        for (int i=0;i<nums.size();i++){
            if (target-nums[i]==nums[i]){
                if (mp[target-nums[i]]>1){
                    temp=target-nums[i];
                    idx1=i;
                    break;
                }
            }
            else if (mp[target-nums[i]]>0){
                temp=target-nums[i];
                idx1=i;
                break;
            }
        }
        for (int i=0;i<nums.size();i++){
            if (temp==nums[i] && idx1!=i){
                idx2=i;
                break;
            }
        }
        return {idx1,idx2};
    }
};
