class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size()-1;
        unordered_map<char,int> mp;
        for (int i=0;i<k && i<s2.size();i++){
            mp[s2[i]]++;
        }
        for (int i=k;i<s2.size();i++){
            mp[s2[i]]++;
            bool flag=true;
            unordered_map<char,int> temp=mp;
            for (auto l : s1){
                if (temp[l]){
                    temp[l]--;
                }
                else{
                    flag=false;
                    break;
                }
            }
            if (flag) return true;
            mp[s2[i-k]]--;
        }
        return false;
    }
};
