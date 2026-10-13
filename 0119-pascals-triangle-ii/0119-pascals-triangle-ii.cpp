class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans=1;

        vector<int> ansrow;

        ansrow.push_back(1);
        if(rowIndex!=0){
            rowIndex++;
            for(int col=1;col<rowIndex;col++){
                ans=ans*(rowIndex-col);
                ans=ans/col;
                ansrow.push_back(ans);
            }
        }
        return ansrow;
    }
};