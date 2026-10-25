class Solution {
private:
    struct coor{
        int x;
        int y;
    };
public:
    int closedIsland(vector<vector<int>>& grid) {
        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};
        int numRow = grid.size();
        int numCol = grid[0].size();

        int numClosedIsland = 0;

        queue<struct coor> to_visit;

        for(int i = 0; i < numRow; i++){
            for(int j = 0; j < numCol; j++){
                if(grid[i][j] == 0){
                    
                    to_visit.push({i, j});
                    bool isClosed = 1; 
                    
                    while(!to_visit.empty()){
                        coor curCoor = to_visit.front();
                        to_visit.pop();

                        if(curCoor.x == 0 || curCoor.x == numRow - 1 || curCoor.y == 0 || curCoor.y == numCol - 1){
                            isClosed = 0;
                        }
                        grid[curCoor.x][curCoor.y] = 1;

                        for(int z = 0; z < 4; z++){ 
                            int cellX = curCoor.x + dx[z]; 
                            int cellY = curCoor.y + dy[z];
                            if(cellX >= 0 && cellX < numRow && cellY >= 0 && cellY < numCol){
                                int &cell = grid[cellX][cellY];
                                if(cell == 0){
                                    to_visit.push({cellX, cellY});
                                    cell = 1;
                                }
                            }
                        }
                    }

                    if(isClosed) numClosedIsland++;
                }
            }
        }

        return numClosedIsland;
    }
};