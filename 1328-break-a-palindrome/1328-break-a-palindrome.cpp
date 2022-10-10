class Solution {
public:
    string breakPalindrome(string s) {
        int n = s.length();
        if(n == 1) {
            return "";
        }
        for(int i = 0; i < n; i++) {
            int j = n - 1 - i;
            if(i == j) {
                continue; //break loop
            }
            if(s[i] != 'a') {
                s[i] = 'a';
                return s;
            }
        }
        s[n-1] = 'b';
        return s;
    }
};


//in any given palindrome , traverse from left to right and then make first non 'a' character to a, thus resulting in lexicographically smallest one possible
//abba -> aaba

//if all alpabets is 'a'
//aaaa -> not baaa -> 'aaab' is the correct answer