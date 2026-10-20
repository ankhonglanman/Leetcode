class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1);

        for (int s = 0; s < n; s++) {
            if (color[s] != -1) continue;

            color[s] = 0;
            queue<int> q;
            q.push(s);

            while (!q.empty()) {
                int cur = q.front();
                q.pop();

                for (int v : graph[cur]) {
                    if (color[v] == -1) {
                        color[v] = 1 - color[cur];
                        q.push(v);
                    }
                    else if (color[v] == color[cur])
                        return false;
                }
            }
        }
        return true;
    }
};