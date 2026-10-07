class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0){
            return 0;
        }
        int res=1;
        int count=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                count++;
            }
            else if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                count=1;
            }
            
            res=max(count,res);
        }
        return res;
    }
};
