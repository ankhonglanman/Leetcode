bool canConstruct(char* ransomNote, char* magazine) {
    int charCount[26] = {0};
    for(int i = 0; magazine[i] != '\0'; i++){
        charCount[magazine[i] - 'a']++;
    }
    for(int j = 0; ransomNote[j] != '\0'; j++){
        char index = ransomNote[j] - 'a';
        charCount[index]--;
        if (charCount[index] < 0){
            return false;
        }
    }
    return true;
}