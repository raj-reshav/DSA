class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int freq[n+1];
        int temp=0;

        for(int i=0;i<n+1;i++){
            freq[i]=0;
        }
        
        for(int i=0;i<n;i++){
           freq[nums[i]]++; 
        }

        for(int i=0;i<n+1;i++){
            if(freq[i]==0){
                return i;
                temp =1;
            }
        }

        if(temp==0){
            return n;
        }

        return 0;
    }
};