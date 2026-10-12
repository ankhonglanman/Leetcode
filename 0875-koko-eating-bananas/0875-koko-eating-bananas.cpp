class Solution {
private:
    long long timeToEatPiles(const vector<int>& piles, int speed) {
        long long ans = 0;
        for (int pile : piles) {
            ans += (pile + speed - 1) / speed;  
        }
        return ans;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (timeToEatPiles(piles, mid) <= h) {
                right = mid;        
            } else {
                left = mid + 1;     
            }
        }
        return left;
    }
};