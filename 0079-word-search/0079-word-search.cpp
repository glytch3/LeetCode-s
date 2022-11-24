

/*
    bool exist(vector<vector<char>>& board, string word) {
        int col=board[0].size();
        int row=board.size();
        int check[row][col];
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                    check[i][j]=0;
            }
        }
        int flag;
        for(int x=0;x<word.size();x++)
        {
            flag=0;
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    if(word[x]==board[i][j] && check[i][j]==0)
                    {
                        check[i][j]=1;
                        flag=1;
                        break;
                    }
                }
                if (flag==1)
                break;
            }
            if (flag==0)
                return false;
        }
        return true;
    }
};

*/

class Solution {
public:

bool exist(vector<vector<char>>& board, string word) {
    for (unsigned int i = 0; i < board.size(); i++) 
        for (unsigned int j = 0; j < board[0].size(); j++) 
            if (dfs(board, i, j, word))
                return true;
    return false;
}

bool dfs(vector<vector<char>>& board, int i, int j, string& word) {
    if (!word.size())
        return true;
    if (i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[0])  
        return false;
    char c = board[i][j];
    board[i][j] = '*';
    string s = word.substr(1);
    bool ret = dfs(board, i-1, j, s) || dfs(board, i+1, j, s) || dfs(board, i, j-1, s) || dfs(board, i, j+1, s);
    board[i][j] = c;
    return ret;
}
};