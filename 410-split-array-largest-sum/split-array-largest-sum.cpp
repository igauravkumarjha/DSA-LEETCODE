class Solution {
public:
bool ispossible(vector<int>& nums, int k,int n,int mid){
    int arraycount =1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+nums[i]<=mid){ 
        pagesum+=nums[i];
    }
    else{
        arraycount++;
        if(arraycount>k || nums[i]>mid){
            return false;
        }
        pagesum=+nums[i];
    }
    }
    return true;
}


    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0;
        int sum=0;
        for(int i=0; i<n;i++){
            sum+=nums[i];
        }
        int e=sum;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            int mid = s + (e - s) / 2;
            if(ispossible(nums,k,n,mid)){
                ans=mid;
                e=mid-1;

            }
            else{
                s=mid+1;
            }

        }
        return ans;
        
    }
};