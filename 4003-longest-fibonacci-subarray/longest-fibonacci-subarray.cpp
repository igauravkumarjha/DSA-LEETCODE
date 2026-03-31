class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        int ans = (n >= 2) ? 2 : 0;

        while (i < n - 2) {
            int starting = i;

            if (nums[i+2] == nums[i] + nums[i+1]) {
                int a = nums[i];
                int b = nums[i+1];
                int j = i + 2;

                while (j < n && nums[j] == a + b) {
                    int temp = nums[j];
                    a = b;
                    b = temp;
                    j++;
                }

                ans = max(ans, j - starting);
            }

            i++;
        }

        return ans;
    }
};