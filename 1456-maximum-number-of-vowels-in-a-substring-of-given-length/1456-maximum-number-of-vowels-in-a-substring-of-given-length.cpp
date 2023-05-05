class Solution {
public:
    int maxVowels(string s, int k) {
        int max=0;
        int tmax=0;
        for(int i=0;i<k;i++)
        {
            tmax+=vowels(s[i]);
        }
        max=tmax;
        for(int i=k;i<s.length();i++)
        {
            tmax+=vowels(s[i])-vowels(s[i-k]);
            if(tmax>max)
                max=tmax;
        }
        return max;
    }
    int vowels(char c)
    {
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')?1:0;
    }
};
