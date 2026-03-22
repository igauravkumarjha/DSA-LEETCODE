class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0, j=0;
        int m = nums1.size();
int n = nums2.size();
        vector<int> ans;
        while(i<m && j<n){
            if(nums1[i] <= nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i<m){
            ans.push_back(nums1[i]);
            i++;
        }

        while(j<n){
            ans.push_back(nums2[j]);
            j++;
        }

        int s=0;
int e=ans.size();
int mid=s+(e-s)/2;
        int g=ans.size();
        if(g%2!=0){
            return ans[mid];
        }
        else{
            float z=(ans[mid-1]+ans[mid])/2.0;
            return z;

            }
    }

};