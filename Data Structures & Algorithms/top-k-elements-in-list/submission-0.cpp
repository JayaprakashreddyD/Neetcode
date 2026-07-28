class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for (auto i : nums){
            mp[i]++;
        }
        vector<pair<int,int>> temp(mp.begin(),mp.end());
        sort(temp.begin(),temp.end(),[](pair<int,int>& a,pair<int,int>& b){
            return a.second>b.second;
        });
        vector<int> ans;
        for (auto i : temp){
            if (k==0) break;
            ans.push_back(i.first);
            k--;
        }
        return ans;
    }
};
