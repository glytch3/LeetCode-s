
#include <iostream>
#include <string>
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int boxer[9][4]={{0,2,0,2},{3,5,0,2},{6,8,0,2},{0,2,3,5},{3,5,3,5},{6,8,3,5},{0,2,6,8},{3,5,6,8},{6,8,6,8}};
        bool test;
        for(int i=0;i<9;i++)
        {
            test=rowcheck(i,board);
            if(test==false)
                return false;
            test=colcheck(i,board);
            if(test==false)
                return false;
            test=boxcheck(boxer[i][0],boxer[i][1],boxer[i][2],boxer[i][3],board);
            if(test==false)
                return false;
        }
        
        
        return true;
    }
    
     bool rowcheck(int j,vector<vector<char>>& board) {
        vector<int> v{int(board[j][0]),int(board[j][1]),int(board[j][2]),int(board[j][3]),int(board[j][4]),int(board[j][5]),int(board[j][6]),int(board[j][7]),int(board[j][8])};
        sort(v.begin(), v.end());
        int temp=0;
        for(auto i:v)
        {
            if(i==temp)
                return false;
            if(i>48)
                temp=i;
        }
        return true; 
    }
    
     bool colcheck(int j,vector<vector<char>>& board) {
        vector<int> v{int(board[0][j]),int(board[1][j]),int(board[2][j]),int(board[3][j]),int(board[4][j]),int(board[5][j]),int(board[6][j]),int(board[7][j]),int(board[8][j])};
        sort(v.begin(), v.end());
        int temp=0;
        for(auto i:v)
        {
            if(i==temp)
                return false;
            if(i>48)
                temp=i;
        }
        return true; 
    }
    
    bool boxcheck(int a, int b,int c,int d,vector<vector<char>>& board) {
        vector<int> v;
        for(int i=c;i<=d;i++)
        {
            for(int j=a;j<=b;j++)
            {
                int num=int(board[i][j]);
                v.insert(v.end(),num);        
            }
        }
        sort(v.begin(), v.end());
        int temp=999;
        for(auto i:v)
        {
            if(i==temp)
                return false;
            if(i>47)
                temp=i;
        }
        return true; 
    }
};