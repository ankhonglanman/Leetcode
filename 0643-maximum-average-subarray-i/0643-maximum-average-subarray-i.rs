impl Solution {
    pub fn find_max_average(nums: Vec<i32>, k: i32) -> f64 {
        let mut avg: f64 = 0.0;
        let mut sum: i32 = 0;
        
        for i in 0..k as usize {
            sum += nums[i];
        }

        avg = sum as f64 / k as f64;

        for j in k as usize..nums.len() {
            sum = sum - nums[j - k as usize] + nums[j];
            let curAvg: f64 = sum as f64 / k as f64;
            if curAvg > avg {
                avg = curAvg;
            } 
        }

        avg
    }
}