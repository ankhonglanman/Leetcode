class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int len = graph.size();

        vector<int> color(len, -1);

        for(int i = 0; i < len; i++){
            if(color[i] != -1) continue;

            queue<int> seen;
            seen.push(i);
            color[i] = 0;

            while(!seen.empty()){
                int cur = seen.front();
                seen.pop();
                
                for(const auto& v : graph[cur]){
                    if(color[v] == -1){
                        color[v] = 1 - color[cur];
                        seen.push(v);
                    }
                    else{
                        if(color[v] == color[cur]) return false;
                    }
                }

            }
        }

        return true;
    }
};