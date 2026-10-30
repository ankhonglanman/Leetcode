int titleToNumber(char* columnTitle) {
    int exp = 0;
    int len = strlen(columnTitle);

    int res = 0;
    for(int i = len - 1; i >= 0; i--){
        res += (int)(columnTitle[i] - 'A' + 1) * pow(26, exp++); 
    }

    return res;
}