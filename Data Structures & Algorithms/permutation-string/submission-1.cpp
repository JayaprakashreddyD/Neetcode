class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size()-1;
        unordered_map<char,int> mp;
        for (int i=0;i<k && i<s2.size();i++){
            mp[s2[i]]++;
        }
        vector<int> store(26,0);
        for (auto i :  s1){
            store[i-'a']++;
        }
        for (int i=k;i<s2.size();i++){
            mp[s2[i]]++;
            bool flag=true;
            for (int i=0;i<26;i++){
                if (store[i]!=mp['a'+i]){
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
