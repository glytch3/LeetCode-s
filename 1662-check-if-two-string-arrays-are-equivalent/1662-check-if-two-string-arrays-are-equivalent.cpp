class Solution {
public:
/*    string concat(vector<string>& word)
    {
        string a="";
        for(auto i:word)
            a.append(i);
        return a;
    }
*/
    string concat(vector<string>& word)
    {
        for(int i=1;i<word.size();i++)
            word[0].append(word[i]);
        return word[0];
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        if(concat(word1)==concat(word2))
            return true;
        return false;
    }
};

/*
string firstName = "John ";
string lastName = "Doe";
string fullName = firstName.append(lastName);
cout << fullName;
*/