class Solution {
private:
    typedef enum{
        INIT,
        COUNTING, 
        DONE
    }state_t;
public:
    int lengthOfLastWord(string s) {
        state_t state = INIT;
        int len = s.size();
        int res = 0;
        for(int i = len - 1; i >= 0; i--){
            switch(state){
                case INIT:
                {
                    if((s[i] <= 'Z' && s[i] >= 'A') || (s[i] <= 'z' && s[i] >= 'a')){
                        state = COUNTING;
                        res = 1;
                    }
                    break;
                }
                case COUNTING:
                {
                    if(s[i] == ' ') state = DONE;
                    else res++;
                    break;
                }
                case DONE: return res;
                break;
            }

        }

        return res;
    }
};