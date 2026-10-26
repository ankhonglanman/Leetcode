class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        sort(ages.begin(), ages.end());

        int len = ages.size();

        int numFrRq = 0;

        int mid;
        int left;
        int right;

        for(int i = 0; i < len; i++){
            left = 0;
            right = i;

            int threshold = ages[i] / 2 + 7;

            int j = i;
            while(j != len - 1 && ages[j + 1] == ages[j]){
                j++;
            }

            if (ages[i] > 14) numFrRq += (j - i + 1)*(j - i);

            while(left < right){
                int mid = left + (right - left) / 2;
                if(ages[mid] > threshold) right = mid;
                else left = mid + 1; 
            }
            
            numFrRq += (j - i + 1) * (i - left);

            if (i != j) i = j;
        }

        return numFrRq;
    }
};