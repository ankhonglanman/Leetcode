bool isAnagram(char* s, char* t) {
    uint16_t freqS[26] = {0};
    uint16_t freqT[26] = {0};
    
    size_t lenS = strlen(s);
    size_t lenT = strlen(t);

    for(int i = 0; i < lenS; i++){
        freqS[s[i] - 'a']++;
    } 

    for(int j = 0; j < lenT; j++){
        freqT[t[j] - 'a']++;
    }

    for(int x = 0; x < 26; x++){
        if(freqS[x] != freqT[x]) return false;
    }

    return true;
}