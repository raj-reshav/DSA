class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans;

        if(n==1){
            return nums[0];
        }
        else{

        while(low<=high){
            if(nums[low]==nums[low+1]){
                low=low+2;
            }
            else if(nums[low]!=nums[low+1]){
                return nums[low];
            }

            if(nums[high]==nums[high-1]){
                high=high-2;
            }
            else if(nums[high]!=nums[high-1]){
                return nums[high];
            }
        }
        }

        return -1;

    }
};