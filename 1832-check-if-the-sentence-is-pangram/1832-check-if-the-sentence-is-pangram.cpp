class Solution {
public:
    bool checkIfPangram(string sentence) {
        sort(sentence.begin(),sentence.end());
        string a="abcdefghijklmnopqrstuvwxyz";
        int p=0;
        if(sentence.size()<26)
            return false;
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]==a[p])
                p++;
        }
        if(p==26)
            return true;
        return false;
    }
    
    /*bool checkIfPangram(string sentence) {
        sort(sentence.begin(),sentence.end());
        string a="abcdefghijklmnopqrstuvwxyz";
        int p=0;
        if(sentence.size()<26)
            return false;
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]==a[p])
                p++;
            if(sentence.size()-i<26-p)
                return false;
        }
        if(p==26)
            return true;
        return false;
    }*/
};