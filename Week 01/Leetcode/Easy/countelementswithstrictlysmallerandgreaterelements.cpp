class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        if(n<=2)
            c=0;
        else
        {
            sort(nums.begin(),nums.end());
            int a=nums[0],b=nums[n-1];
            for(int i=0;i<n;i++)
            {
                if(nums[i]!=a && nums[i]!=b)
                    c++;
            }
        }
        return c;
    }
};
