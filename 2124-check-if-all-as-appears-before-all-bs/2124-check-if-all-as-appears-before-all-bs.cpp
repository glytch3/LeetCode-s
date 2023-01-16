class Solution {
public:
    bool checkString(string s) {
        bool a=false;
        for(int i=s.size();i>=0;i--)
        {
            if(s[i]=='a')
                a=true;
            if(a==true and s[i]=='b')
                return false;
        }
        return true;
    }
};