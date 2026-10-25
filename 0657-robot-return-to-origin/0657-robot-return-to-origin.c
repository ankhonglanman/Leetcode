bool judgeCircle(char* moves) {
    int len = strlen(moves);
    int x = 0;
    int y = 0;

    for(int i = 0; i < len; i++){
        switch(moves[i]){
            case 'U': y++;
            break;
            case 'D': y--;
            break;
            case 'R': x++;
            break;
            case 'L': x--;
            break; 
        }
    }

    return x == 0 && y == 0;
}