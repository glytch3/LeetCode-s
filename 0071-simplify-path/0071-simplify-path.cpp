class Solution {
public:
    
    // int alldots(string path,int i)
    // {
//     {
//         for(int j=i;j<path.length();j++)
//         {
//             if(path[j]!='.')
//                 return j-1;
//         }
//         return path.length();
//     }
    
    string simplifyPath(string path) {
//         string ans="";
//         stack<char> test;
//         test.push('/');
//         for(int i=1;i<path.length()-1;i++)
//         {
//             if(!test.empty() && path[i]=='/' && test.top()!='/')
//             {
//                 test.push(path[i]);
//             }
//             else if(path[i]=='.' && path[i+1]=='/')
//             {
//                 i=i+1;
//             }
//             else if(path[i]=='.' && path[i+1]=='.' && path[i+2]!='.')
//             {
//                 i=i+1;
//             }
//             else if(path[i]=='.' && path[i+1]!='.' && path[i+1]!='.')
//             {
//                 int end=alldots(path,i);
//                 for(int j=i;j<=end;j++)
//                 {
//                     test.push(path[j]);
//                 }
//                 i=end+1;
//             }
//             else
//                 test.push(path[i]);
//         }
//         while (!test.empty()) {
//             ans += test.top();
//             test.pop();
//         }
//         return ans;
        
        
        stack<string> st;
        string res;

        for (int i = 0; i < path.size(); ++i)
        {
            if (path[i] == '/')
                continue;
            string temp;

            while (i < path.size() && path[i] != '/')
            {
                temp += path[i];
                ++i;
            }
            if (temp == ".")
                continue;
            else if (temp == "..")
            {
                if (!st.empty())
                    st.pop();
            }
            else
                st.push(temp);
        }

        while (!st.empty())
        {
            res = "/" + st.top() + res;
            st.pop();
        }

        if (res.size() == 0)
            return "/";

        return res;
    }
};