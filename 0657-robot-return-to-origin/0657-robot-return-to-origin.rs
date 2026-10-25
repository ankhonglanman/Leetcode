impl Solution {
    pub fn judge_circle(moves: String) -> bool {
        let mut x: i32 = 0;
        let mut y: i32 = 0;

        for &b in moves.as_bytes() {
            match b {
                b'U' => y += 1,
                b'D' => y -= 1,
                b'R' => x += 1,
                _ => x -= 1,
            }
        }

        x == 0 && y == 0
    }
}