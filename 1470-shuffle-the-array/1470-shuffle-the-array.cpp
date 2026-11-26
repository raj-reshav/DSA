class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        int i=0,j=n,k=0,temp=n;

        while(n--){
            ans[k]=nums[i];
            k++;
            i++;
            ans[k]=nums[j];
            k++;
            j++;
        }

        return ans;
    }
};