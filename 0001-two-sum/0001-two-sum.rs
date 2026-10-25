impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut res : Vec<i32> = Vec::new();

        res.reserve(2);

        res.push(-1);

        res.push(-1);

        let len : i32 = nums.len() as i32;

        for i in 0..len{
            for j in i + 1..len{
                if target == nums[i as usize] + nums[j as usize]{
                    res[0] = i;
                    res[1] = j;
                    return res;
                }
            }
        }
        
        res
    }
}