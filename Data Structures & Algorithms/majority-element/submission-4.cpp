class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,element=nums[0];
        for (int i=0;i<nums.size();i++){
            if (element!=nums[i]){
                count--;
                if (count==0){
                    element=nums[i];
                }
            }
            count++;
        }
        return element;
    }
};