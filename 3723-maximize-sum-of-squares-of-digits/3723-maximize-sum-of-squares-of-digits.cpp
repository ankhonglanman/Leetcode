class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > num * 9){
            return "";
        }
        string res = "";
        for(int i = 0; i < num; i++){
            int curDigit;
            if(sum >= 9){
                curDigit = 9;
            }
            else{
                curDigit = sum;
            }
            res.push_back((char)(curDigit+'0')); 
            sum -= curDigit;
        }
        return res;
    }
};