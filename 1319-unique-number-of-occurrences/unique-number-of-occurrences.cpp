class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int ca[2001] = {0};

        for (int i : arr) {
            ca[i + 1000]++;
        }

        sort(ca, ca + 2001);

        for (int i = 0; i < 2000; i++) {
            if (ca[i] != 0 && ca[i] == ca[i + 1]) {
                return false;
            }
        }

        return true;
        
    }
};