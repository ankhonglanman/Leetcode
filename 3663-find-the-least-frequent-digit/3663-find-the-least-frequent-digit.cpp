class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int freq[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

        while(n != 0){
            if(freq[n%10] == -1) freq[n%10] = 1;
            else freq[n%10]++;
            n /= 10;
        }

        int leastFreq = INT_MAX;
        int res = -1;

        for(int i = 0; i < 10; i++){
            cout << freq[i] << endl;
            if(freq[i] != -1 && freq[i] < leastFreq){
                leastFreq = freq[i];
                res = i;
            }
        }
        
        return res;
    }
};