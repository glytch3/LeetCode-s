class Solution {
public:
    string concat(vector<string>& word)
    {
        string a="";
        for(auto i:word)
            a.append(i);
        return a;
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