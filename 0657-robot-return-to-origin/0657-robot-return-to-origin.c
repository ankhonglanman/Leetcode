bool judgeCircle(char* moves) {

    int horizontal = 0;
    int vertical = 0;

    for(int i = 0; moves[i] != '\0'; i++){
        switch(moves[i]){
            case 'U':
                vertical++;
                break;
            case 'D':
                vertical--;
                break;
            case 'L':
                horizontal++;
                break;
            case 'R':
                horizontal--;
                break;
        }
    }

    return (vertical == 0 && horizontal == 0);
}