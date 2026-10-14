class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > num * 9){
            return "";
        }
        string res(num, '0');
        for(int i = 0; i < num; i++){
            if(sum >= 9){
                res[i] = '9';
                sum -= 9;
            }
            else{
                res[i] = (char)(sum+'0');
                sum = 0;
            }
        }
        return res;
    }
};