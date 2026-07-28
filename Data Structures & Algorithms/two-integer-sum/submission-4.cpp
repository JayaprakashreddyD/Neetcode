class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        int element1=0,element2=0;
        while(i<j){
            if (temp[i]+temp[j]==target){
                element1=temp[i];
                element2=temp[j];
                break;
            }
            else if (temp[i]+temp[j]<target){
                i++;
            }
            else{
                j--;
            }
        }
        int idx1=-1,idx2=-1;
        for (int i=0;i<nums.size();i++){
            if ((nums[i]==element1 || nums[i]==element2) && idx1==-1){
                idx1=i;
            }
            else if (nums[i]==element1 || element2==nums[i]){
                idx2=i;
                break;
            }
        }
        return {idx1,idx2};
    }
};
