class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        /*int count =0;
        for(int i=0; i<properties.size(); i++){
            for(int j=0; j<properties.size(); j++){
                if ((properties[j][0] > properties[i][0]) && (properties[j][1] > properties[i][1])) {
                    count++;
                    break; 
                }
            }
        }
        return count;
    }*/ //Time exceeded
          sort(begin(properties), end(properties),
             [](const auto& a, const auto& b) {
                 return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];
             });
        int result = 0, max_d = 0;
        for (int i = size(properties) - 1; i >= 0; --i) {
            if (properties[i][1] < max_d) {
                ++result;
            }
            max_d = max(max_d, properties[i][1]);
        }
        return result;
    }
};