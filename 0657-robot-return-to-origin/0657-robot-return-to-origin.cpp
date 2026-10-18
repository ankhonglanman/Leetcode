class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        int len = moves.size();
        for(int i = 0; i < len; i++){
            switch(moves[i]){
                case 'U': y++;
                break;
                case 'D': y--;
                break;
                case 'L': x--;
                break;
                case 'R': x++;
                break;
            }
        }
        return (x == 0 && y == 0);
    }
};