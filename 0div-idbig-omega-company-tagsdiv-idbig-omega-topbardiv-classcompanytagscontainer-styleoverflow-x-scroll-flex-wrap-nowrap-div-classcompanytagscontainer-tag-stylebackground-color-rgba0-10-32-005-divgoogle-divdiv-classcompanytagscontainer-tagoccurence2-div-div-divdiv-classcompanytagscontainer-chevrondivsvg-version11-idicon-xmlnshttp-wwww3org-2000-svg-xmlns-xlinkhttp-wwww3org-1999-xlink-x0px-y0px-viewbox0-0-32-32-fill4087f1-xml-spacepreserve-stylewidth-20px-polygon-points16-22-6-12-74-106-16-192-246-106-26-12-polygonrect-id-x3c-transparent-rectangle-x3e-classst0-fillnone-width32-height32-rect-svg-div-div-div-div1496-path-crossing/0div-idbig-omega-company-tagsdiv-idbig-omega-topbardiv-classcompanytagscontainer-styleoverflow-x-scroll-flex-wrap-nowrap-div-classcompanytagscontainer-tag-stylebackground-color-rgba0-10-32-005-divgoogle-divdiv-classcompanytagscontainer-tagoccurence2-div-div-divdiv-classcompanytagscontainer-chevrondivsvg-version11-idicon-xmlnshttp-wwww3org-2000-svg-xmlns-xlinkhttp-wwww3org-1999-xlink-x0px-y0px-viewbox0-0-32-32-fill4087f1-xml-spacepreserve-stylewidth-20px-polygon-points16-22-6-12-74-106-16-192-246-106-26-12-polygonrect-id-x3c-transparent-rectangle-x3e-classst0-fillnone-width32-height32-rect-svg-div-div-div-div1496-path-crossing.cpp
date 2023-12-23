class Solution {
public:
    bool isPathCrossing(string path) {
    unordered_set<string> vis;
    int x=0,y=0;
    vis.insert("0,0");
    for (auto direction : path) {
        switch (direction) {
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
        }
        string pos = to_string(x) + "," + to_string(y);
        if(vis.count(pos)>0) {
            return true; 
        }
        vis.insert(pos);
    }
    return false;
    }
};