class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;
        int low=0;
        int high=n-1;
    int leftmost=0;
    int rightmost=0;

        
            while(low<=high){
                if(height[low]<=height[high]){
                    if(height[low]>=leftmost){
                                leftmost=height[low];
                    }
                    else{
                        ans+=leftmost-height[low];
                    }
                    low++;

                }

                else{
                        if(height[high]>=rightmost){
                            rightmost=height[high];
                        }
                        else{
                            ans+=rightmost-height[high];
                        }
                        high--;
                    }
            
            
            
        }
        
        return ans;
        
    }
};
