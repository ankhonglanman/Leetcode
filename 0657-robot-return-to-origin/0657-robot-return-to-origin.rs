use std::string::String;

impl Solution {
    pub fn judge_circle(moves: String) -> bool {
        let mut x: i32 = 0;
        let mut y: i32 = 0;

        for i in 0..moves.len() {
            let c: char = moves.as_bytes()[i] as char;
            if c == 'U' {
                y += 1;
            }
            else if c == 'D' {
                y -= 1;
            }
            else if c == 'R' {
                x += 1;
            }
            else {
                x -= 1;
            }
        }

        x == 0 && y == 0
    }
}