class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> s;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    string s1="";
                    s1 += "row";
                    s1+=i;
                    s1+=board[i][j];
                    string s2="";
                    s2 += "col";
                    s2+=j;
                    s2+=board[i][j];
                    int b = (i/3)*3+(j/3);
                    string s3="";
                    s3 += "box";
                    s3+=b;
                    s3+=board[i][j];
                    if(s.count(s1) || s.count(s2) || s.count(s3)){
                        return false;
                    }
                    else{
                        s.insert(s1);
                        s.insert(s2);
                        s.insert(s3);
                    }
                }
            }
        }
        return true;
    }
};