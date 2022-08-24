class Solution {
public:
    bool isPowerOfThree(int n) {
        //log n with base 3
        //log n divided by log 3
        if(n<1)
        {
            return false;
        }
        double b=(log10(n))/(log10(3));
        if(b-int(b)==0)
        {
            return true;
        }
        else
            return false;
    }
};