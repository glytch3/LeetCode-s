class UnionFind {
 public:
  UnionFind(int n) : id(n) {
    iota(begin(id), end(id), 0);
  }

  void union_(int u, int v) {
    id[find(u)] = find(v);
  }

  int find(int u) {
    return id[u] == u ? u : id[u] = find(id[u]);
  }

 private:
  vector<int> id;
};

class Solution {
public:
    bool equationsPossible(vector<string>& equations) {
        /*if(strcmp(equations[0],strrev(equations[1]))==0||strcmp(equations[0],equations[1])==0)
            return true;
        else
            return false;*/
        
        /* equations[2][0]=equations[1][3];
        equations[2][1]=equations[1][2];
        equations[2][2]=equations[1][1];
        equations[2][3]=equations[1][0]; */
        
        /*if((equations[0][0]==equations[1][0]&&equations[0][1]==equations[1][1]&&equations[0][2]==equations[1][2]&&equations[0][3]==equations[1][3])||(equations[0][0]==equations[1][3]&&equations[0][1]==equations[1][2]&&equations[0][2]==equations[1][1]&&equations[0][3]==equations[1][0]))
            return true;
        else
            return false;
        */
        
        UnionFind uf(26);

    for (const string& e : equations)
      if (e[1] == '=') {
        const int x = e[0] - 'a';
        const int y = e[3] - 'a';
        uf.union_(x, y);
      }

    for (const string& e : equations)
      if (e[1] == '!') {
        const int x = e[0] - 'a';
        const int y = e[3] - 'a';
        if (uf.find(x) == uf.find(y))
          return false;
      }

    return true;
  }
};