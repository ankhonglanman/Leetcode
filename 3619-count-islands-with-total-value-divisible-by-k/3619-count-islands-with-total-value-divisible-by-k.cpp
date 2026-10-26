class Solution {
private:
    struct coor{
        int i;
        int j;
    };

    int di[4] = {1, -1, 0, 0};
    int dj[4] = {0, 0, 1, -1};

    long long bfs(int i, int j, vector<vector<int>>& grid, queue<struct coor>& to_visit){
        long long total = grid[i][j];
        grid[i][j] = 0;
        to_visit.push({i, j});

        while(!to_visit.empty()){
            struct coor curCell = to_visit.front();
            to_visit.pop();

            int i = curCell.i;
            int j = curCell.j;

            for(int d = 0; d < 4; d++){
                int i_here = i + di[d];
                int j_here = j + dj[d];

                if(i_here >= grid.size() || i_here < 0 || j_here >= grid[0].size() || j_here < 0) continue;

                int &cell = grid[i_here][j_here];
                if(cell > 0){
                    total += cell;
                    cell = 0;
                    to_visit.push({i_here, j_here});
                }
            }
        }
        return total;
    }
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int numRow = grid.size();
        int numCol = grid[0].size();
        queue<struct coor> to_visit;
        int res = 0;

        for(int i = 0; i < numRow; i++){
            for(int j = 0; j < numCol; j++){
                if(grid[i][j] > 0){
                    long long total = bfs(i, j, grid, to_visit);
                    if(total % k == 0) res++; 
                }
            }
        }

        return res;
    }
};