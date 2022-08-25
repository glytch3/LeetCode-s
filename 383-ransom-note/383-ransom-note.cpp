class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool flag;
        bool visited[magazine.length()];
        for(int i=0;i<magazine.length();i++)
        {
            visited[i]=false;
        }
        
        for(int i=0;i<ransomNote.length();i++)
        {
        flag=false;
            for(int j=0;j<magazine.length();j++)
            {
                if(magazine.at(j)==ransomNote.at(i) && visited[j]==false)
                {
                    visited[j]=true;
                    flag=true;
                    break;
                }
            }
            if(flag==false)
            {
                return false;
            }
        }
        return flag;
    }
};