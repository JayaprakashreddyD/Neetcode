class Solution {
public:
    vector<int> store;
    string encode(vector<string>& strs) {
        string s="";
        for (auto i : strs){
            s+=i;
            store.push_back(i.size());
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int idx=0;
        for (int i=0;i<store.size();i++){
            ans.push_back(s.substr(idx,store[i]));
            idx+=store[i];
        }
        return ans;
    }
};
