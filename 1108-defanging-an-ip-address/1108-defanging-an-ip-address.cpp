class Solution {
public:
    string defangIPaddr(string address) {
        string c="aaaaaa";
        string ans=address+c;
        int i=0;
        for(auto a:address)
        {
            if(a=='.')
            {
                ans[i]='[';
                ans[i+1]='.';
                ans[i+2]=']';
                i+=3;
            }
            else
            {
                ans[i]=a;
                i++;
            }  
        }
        return ans;
    }
};