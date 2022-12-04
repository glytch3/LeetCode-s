class Solution {
public:
    bool halvesAreAlike(string s) {
        int res1=0,res2=0;
        int n=s.size();
        int i;
        char c;
        for(i=0;i<n/2;i++)
        {   
            c=s[i];
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            res1++;
        }
        for(i=n/2;i<n;i++)
        {   
            c=s[i];
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')         
            res2++;
        }
        if(res1==res2)
            return true;
        return false;
    }
};

/*class Solution {
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
};*/

