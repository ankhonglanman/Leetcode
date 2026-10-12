class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stack; 
        for(const auto& asteroid : asteroids){
            if(stack.empty()){
                stack.push_back(asteroid);
            }
            else{
                if(asteroid > 0){
                        stack.push_back(asteroid);
                }
                else if(-asteroid == stack.back()){
                    stack.pop_back();
                }
                else{
                    if((asteroid < 0 && stack.back() < 0)){
                        stack.push_back(asteroid);
                    }
                    else{
                        while(!stack.empty() && stack.back() > 0 && -asteroid >= stack.back()){
                            int skip = 0;
                            if(-asteroid == stack.back()){
                                skip = 1;
                            }
                            stack.pop_back();
                            if(skip){
                                goto end_loop;
                            }
                            if(!stack.empty() && stack.back() < 0){
                                stack.push_back(asteroid);
                            }
                        }
                        if(stack.empty()){
                            stack.push_back(asteroid);
                        }
                        end_loop:
                    }
                }
            }
        }
        return stack;
    }
};