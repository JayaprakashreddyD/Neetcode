class Solution {
public:
    int maxArea(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int ans=0;
        while(i<j){
            int minn=min(nums[i],nums[j]);
            ans=max(ans,(j-i)*minn);
            if (nums[i]<=nums[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};
