class Solution {
public:
    bool halvesAreAlike(string s) {
        string first="";
        string second="";
        for(int i=0;i<s.size()/2;i++)
        {
            first=first+s[i];
        }
        for(int i=s.size()/2;i<s.size();i++)
        {
            second=second+s[i];
        }
        int firsthalf=aeioucalc(first);
        int secondhalf=aeioucalc(second);
        if(firsthalf==secondhalf)
            return true;
        return false;
    }
    int aeioucalc(string s)
    {
        int res;
        for(auto i:s)
        {
            if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
                res++;
        }
        return res;
    }
};