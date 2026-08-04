class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i=0;i<board.size();i++){
            unordered_map<char,int> mp1,mp2;
            for (int j=0;j<board[0].size();j++){
                if (board[i][j]!='.'){
                    mp1[board[i][j]]++;
                    if (mp1[board[i][j]]>1) return 0;
                }
                if (board[j][i]!='.'){
                mp2[board[j][i]]++;
                if (mp2[board[j][i]]>1) return 0;
                }
            }
        }
        for (int k=0;k<board.size();k+=3){
            for (int l=0;l<board[0].size();l+=3){
                unordered_map<char,int> mp;
        for (int i=k;i<board.size() && i<k+3;i++){
            for (int j=l;j<board[0].size() && j<l+3;j++){
                if (board[i][j]!='.'){mp[board[i][j]]++;
                if (mp[board[i][j]]>1) return false;
                }
            }
        }
        }
        }
        return true;
    }
};
