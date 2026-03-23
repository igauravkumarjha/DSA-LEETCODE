class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
         sort(nums.begin(), nums.end());
       int z=(nums.size())/2;
        int g=nums.size();
        // vector<int> nums1;
        // vector<int> nums2;

        int i;
    
        // for( i=0; i<z;i++){
        //     nums1.push_back(nums[i]);
        // }
        // for(int n=z; n<g; n++){
        //      nums2.push_back(nums[n]);
        // }
       
        int count = 1;

for(int l = 1; l < g; l++){
    if(nums[l] == nums[l-1]){
        count++;
        if(count > 2){
            return false;
        }
    } else {
        count = 1;
        
    }
}
        
         return true;
        
    }
};