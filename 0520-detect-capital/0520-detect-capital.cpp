class Solution {
public:
    bool detectCapitalUse(string word) {
        int small=0,big=0;
        int size=word.size();
        int check;
        
        for(auto ch:word)
        {
            check=int(ch);
            if(check>96 and check<123)
                small++;
            else if(check>64 and check<91)
                big++;
        }   
        
        check=0;
        if(int(word[0])>64 and int(word[0])<91)
            check=1;
            
        if(small==size || big==size || small==size-1 && check==1)
            return true;
        
        return false;
    }
};