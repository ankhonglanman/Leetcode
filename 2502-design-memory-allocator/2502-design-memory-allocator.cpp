class Allocator {
private:
    int maxSize;
    int remainingUnits;
    bool *isEmpty;
    unordered_map<int, vector<int>> blockManager; // key : mID & val : memory units's assigned to mID index
    void *memoryPool;
public:
    Allocator(int n) {
        maxSize = n;
        remainingUnits = n;
        isEmpty = new bool[n];
        for(int i = 0; i < n; i++){
            isEmpty[i] = 1;
        }
        memoryPool = malloc(n);
    }
    
    int allocate(int size, int mID) {
        if(remainingUnits < size) return -1;
        int firstIdx;
        int lastIdx;
        for(int i = 0; i <= maxSize - size; i++){
            int availSize = 0;
            for(int j = i; j < i + size; j++){
                if(isEmpty[j]) availSize++;
                else break;
                if(availSize == size){
                    firstIdx = i;
                    lastIdx = i + size - 1;
                    goto found; 
                }
            }
            availSize = 0;
        }
        return -1;

        found:
        for(int i = firstIdx; i <= lastIdx; i++){
            blockManager[mID].push_back(i);
            isEmpty[i] = 0;
        }
        remainingUnits -= size;
        return firstIdx;
    }
    
    int freeMemory(int mID) {
        int numFreed = 0;
        for(const auto& index : blockManager[mID]){
            isEmpty[index] = 1;
            numFreed++;
        }
        blockManager.erase(mID);
        remainingUnits += numFreed;
        return numFreed;
    }
};

/**
 * Your Allocator object will be instantiated and called as such:
 * Allocator* obj = new Allocator(n);
 * int param_1 = obj->allocate(size,mID);
 * int param_2 = obj->freeMemory(mID);
 */