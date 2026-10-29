class RecentCounter {
private:
    queue<int> time;
public:
    RecentCounter() {
    }
    
    int ping(int t) {
        time.push(t);
        while(t - time.front() > 3000){
            time.pop();
        }
        return time.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */