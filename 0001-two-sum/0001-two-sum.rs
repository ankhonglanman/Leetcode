use std::collections::HashMap;

impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut seen = HashMap::new();

        for i in 0..nums.len() {
            if seen.contains_key(&nums[i]){
                return vec![seen[&nums[i]] as i32, i as i32];
            }
            seen.insert(target - nums[i], i);
        }

        return vec![-1, -1];
    }
}