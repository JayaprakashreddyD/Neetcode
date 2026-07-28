class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int size=INT_MAX;
        for (auto i : strs){
            size=min(size,(int)i.size());
        }
        for (int i=0;i<size;i++){
            bool flag=true;
            for (int j=0;j<strs.size()-1;j++){
                string temp1=strs[j];
                string temp2=strs[j+1];
                if (temp1[i]!=temp2[i]){
                    flag=false;
                }
            }
            string s=strs[0];
            if (flag){
                ans+=s[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};