class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans=haystack.find(needle,0);
        // int ans=haystack.find(needle,0);
        if(ans!=string::npos)
            return ans;
        else
            return -1;
    }
};