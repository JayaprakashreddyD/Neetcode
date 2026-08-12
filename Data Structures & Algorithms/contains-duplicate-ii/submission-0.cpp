class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int i=0,j=1;
        mp[nums[0]]++;
        while(i<j && j<nums.size()){
            mp[nums[j]]++;
            while(mp[nums[j]]>1){
                if (nums[i]==nums[j] && abs(i-j)<=k){
                    return true;
                }
                mp[nums[i]]--;
                i++;
            }
            j++;
        }
        return false;
    }
};