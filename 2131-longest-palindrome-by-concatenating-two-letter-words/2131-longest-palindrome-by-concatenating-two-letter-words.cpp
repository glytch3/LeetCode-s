/*class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int check[words.size()+1];
        int ans=0;
        int b=0;
        for(int i=0;i<words.size();i++)
        {
            check[i]=0;
        }
        
        for(int x=0;x<words.size();x++)
        {
            if(words[x][0]==words[x][1])
            {
                b=2;
            }
            for(int y=x+1;y<words.size();y++)
            {
                if(words[x][0]==words[y][1] && words[x][1] && check[x]==0 && check[y]==0)
                {
                    ans+=2;
                    check[y]=1;
                    check[x]=1;
                    break;
                }
            }
        
        }
        ans=ans*2;
        ans=ans+b;
        return ans;
            
    }
};
*/
//reverse(str.begin(), str.end()); 
//reverse(words[y].begin(), words[y].end()); 

class Solution {
 public:
  int longestPalindrome(vector<string>& words) {
    int ans = 0;
    vector<vector<int>> count(26, vector<int>(26));

    for (const string& word : words) {
      const int i = word[0] - 'a';
      const int j = word[1] - 'a';
      if (count[j][i]) {
        ans += 4;
        --count[j][i];
      } else {
        ++count[i][j];
      }
    }

    for (int i = 0; i < 26; ++i)
      if (count[i][i])
        return ans + 2;

    return ans;
  }
};