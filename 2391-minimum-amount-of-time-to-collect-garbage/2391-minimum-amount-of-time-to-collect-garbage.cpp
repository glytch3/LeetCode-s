// class Solution {
// public:
//     int garbageCollection(vector<string>& garbage, vector<int>& travel) {
//         int t1=0,t2=0,t3=0;
//         int tt1=0,tt2=0,tt3=0;
//         travel.insert(travel.begin() + 0,0);
//         int i=0;
//         bool g=false;
//         bool p=false;
//         bool m=false;
//         for(auto x:garbage)
//         {
//             tt1+=travel[i];
//             tt2+=travel[i];
//             tt3+=travel[i];
//             for(auto c:x)
//             {
//                 if(c=='G' && g==false)
//                 {
//                     g=true;
//                 }
//                 if(c=='G')
//                 {
//                     tt1+=1;
//                 }
//                 if(c=='P'  && p==false)
//                 {
//                     p=true;
//                 }
//                 if(c=='P')
//                 {
//                     tt2+=1;
//                 }
//                 if(c=='M'  && m==false)
//                 {
//                     m=true;
//                 }
//                 if(c=='M')
//                 {
//                     tt3+=1;
//                 }
//             }
//             if(g==true)
//             {
//                 t1+=tt1;
//                 tt1=0;
//                 g=false;
//             }
//             if(p==true)
//             {
//                 t2+=tt2;
//                 tt2=0;
//                 p=false;
//             }
//             if(m==true)
//             {
//                 t3+=tt3;
//                 tt3=0;
//                 m=false;
//             }
//             i++;
//         }
//         return t1+t2+t3;
//     }
// };

class Solution {
public:
    int garbageCollection(vector<string>& gar, vector<int>& travel) {
        int sum = 0;
        bool gbool = false, pbool = false, mbool = false;
        for(auto i : gar) {
            sum += i.size();
        }
        int g = -1, m = -1, p = -1;
        for(int i=gar.size()-1;i>=0;i--) {
            for(int j=0;j<gar[i].size();j++) {
                if(gar[i][j] == 'G' && !gbool) {
                    g = i - 1;
                    gbool = true;
                }
                else if(gar[i][j] == 'P' && !pbool) {
                    p = i - 1;
                    pbool = true;
                }
                else if(gar[i][j] == 'M' && !mbool) {
                    m = i - 1;
                    mbool = true;
                }
            }
            if(gbool && pbool && mbool) break;
        }
        for(int i=0;i<=g;i++) {
            sum += travel[i];
        }
        for(int i=0;i<=p;i++) {
            sum += travel[i];
        }
        for(int i=0;i<=m;i++) {
            sum += travel[i];
        }
        return sum;
    }
};