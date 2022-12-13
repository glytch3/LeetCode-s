class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(auto a:address)
        {
            if(a=='.')
            {
                ans=ans+"[.]";
            }
            else
            {
                ans=ans+a;
            }  
        }
        return ans;
    }
};

//return regex_replace(address, regex("[.]"), "[.]");