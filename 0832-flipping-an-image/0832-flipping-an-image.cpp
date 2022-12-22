class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    const int n = image.size();
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < (n + 1) / 2; ++j) {
        const int temp = image[i][j];
        image[i][j] = image[i][n - j - 1] ^ 1;
        image[i][n - j - 1] = temp ^ 1;
      }
    return image;
    }
};