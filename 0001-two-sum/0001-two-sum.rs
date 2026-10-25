use std::collections::HashMap;

impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut set = HashMap::new();

        for i in 0..nums.len() {
            if set.contains_key(&nums[i]){
                return vec![set[&nums[i]] as i32, i as i32];
            }
            set.insert(target - nums[i], i);
        }

        return vec![-1, -1];
    }
}