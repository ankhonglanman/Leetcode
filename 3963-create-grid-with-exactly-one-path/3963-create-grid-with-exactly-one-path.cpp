class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> res(m, "");

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 || j == n - 1){
                    res[i].push_back('.');
                }
                else{
                    res[i].push_back('#');
                }
            }
        }

        return res;
    }
};