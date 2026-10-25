impl Solution {
    pub fn find_max_average(nums: Vec<i32>, k: i32) -> f64 {
        let mut avg: f64 = 0.0;
        let mut sum: i32 = 0;
        let k: usize = k as usize;
        
        for i in 0..k {
            sum += nums[i];
        }

        avg = sum as f64 / k as f64;

        for j in k as usize..nums.len() {
            sum = sum - nums[j - k] + nums[j];
            let curAvg: f64 = sum as f64 / k as f64;
            if curAvg > avg {
                avg = curAvg;
            } 
        }

        avg
    }
}