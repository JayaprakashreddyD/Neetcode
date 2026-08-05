class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if (!isalnum(s[i])) i++;
            else if (!isalnum(s[j])) j--;
            else{
                if (s[i]>'Z' && s[j]<='Z'){
                    if ('z'-s[i]!='Z'-s[j]) return 0;
                }
                else if (s[i]<='Z' && s[j]>'Z'){
                    if ('Z'-s[i]!='z'-s[j]) return 0;
                }
                else{
                    if (s[i]!=s[j]) return 0;
                }
                i++;j--;
            }
        }
        return 1;
    }
};
