use std::collections::VecDeque;

impl Solution {
    pub fn closed_island(mut grid: Vec<Vec<i32>>) -> i32 {
        let dx: [i32; 4] = [-1, 1, 0, 0];
        let dy: [i32; 4] = [0, 0, -1, 1];
        let num_row = grid.len() as i32;
        let num_col = grid[0].len() as i32;

        let mut num_closed_island = 0;

        for i in 0..num_row {
            for j in 0..num_col {
                if grid[i as usize][j as usize] == 0 {
                    let mut to_visit: VecDeque<(i32, i32)> = VecDeque::new();
                    to_visit.push_back((i, j));
                    let mut is_closed = true;

                    while let Some((x, y)) = to_visit.pop_front() {
                        if x == 0 || x == num_row - 1 || y == 0 || y == num_col - 1 {
                            is_closed = false;
                        }
                        grid[x as usize][y as usize] = 1;

                        for z in 0..4 {
                            let nx = x + dx[z];
                            let ny = y + dy[z];
                            if nx >= 0 && nx < num_row && ny >= 0 && ny < num_col {
                                let cell = &mut grid[nx as usize][ny as usize];
                                if *cell == 0 {
                                    to_visit.push_back((nx, ny));
                                    *cell = 1;
                                }
                            }
                        }
                    }

                    if is_closed {
                        num_closed_island += 1;
                    }
                }
            }
        }

        num_closed_island
    }
}