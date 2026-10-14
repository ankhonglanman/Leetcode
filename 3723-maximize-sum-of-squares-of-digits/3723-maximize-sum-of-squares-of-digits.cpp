class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > num * 9){
            return "";
        }
        string res = "";
        for(int i = 0; i < num; i++){
            if(sum >= 9){
                res.push_back('9');
                sum -= 9;
            }
            else{
                res.push_back((char)(sum+'0'));
                sum -= sum;
            }
        }
        return res;
    }
};