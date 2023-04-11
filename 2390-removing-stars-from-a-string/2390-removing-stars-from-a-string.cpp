class Solution {
public:
    string removeStars(string s) {
        string a;
        for(auto b:s)
        {
            if(b=='*')
            {
                a.pop_back();
            }
            else
            {
                a.push_back(b);
            }
        }
        return a;
    }
};