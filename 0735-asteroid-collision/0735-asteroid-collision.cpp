class Solution {
private:
    bool isCollide(int first, int second){
        if(first * second > 0) return false;
        else{
            if(first > 0 && second < 0){
                return true;
            }
            else return false;
        }
    }
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> after;
        after.reserve(asteroids.size());
        
        for (const auto& as : asteroids) {
            if (after.empty() || as > 0) {
                after.push_back(as);
            }
            else {
                while (!after.empty() && after.back() > 0 && abs(as) > after.back()) {
                    after.pop_back();
                }
                if (after.empty() || after.back() < 0) {
                    after.push_back(as); 
                }
                else {
                    if (abs(as) < after.back()) {
                        /// do nothing
                    }
                    else {
                        after.pop_back();
                    }
                }
            }
        }

        return after;
    }
};