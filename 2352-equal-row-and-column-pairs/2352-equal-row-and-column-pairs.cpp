class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int numRow = grid.size();
        int numCol = grid[0].size();

        unordered_map<u32string, int> keysRow;

        vector<u32string> keysCol(numCol);
        for (auto& s : keysCol) {
            s.reserve(numRow);
        }

        for (int i = 0; i < numRow; i++) {
            u32string thisRow;
            thisRow.reserve(numCol);

            for (int j = 0; j < numCol; j++) {
                thisRow.push_back((char32_t)grid[i][j]);
                keysCol[j].push_back((char32_t)grid[i][j]);
            }

            keysRow[thisRow]++;
        }

        int res = 0;
        for (const auto& key : keysCol) {
            auto it = keysRow.find(key);
            if (it != keysRow.end()) {
                res += it->second;
            }
        }

        return res;
    }
};