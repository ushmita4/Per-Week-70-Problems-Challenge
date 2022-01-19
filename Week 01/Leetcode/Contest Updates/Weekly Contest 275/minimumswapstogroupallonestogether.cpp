class Solution {
public:
    int minSwaps(vector<int>& arr) {
        int k=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
                k++;
        }
        int count=0;
        for(int i=0;i<k;i++)
        {
            if(arr[i]==0)
                count++;
        }
        int minswap=count;
        int left=1;
        int right=k;
        while(left<n)
        {
            if(right==n)
                right=0;
            if(arr[left-1]==0)
                count--;
            if(arr[right++]==0)
                count++;
            minswap=min(minswap,count);
            left++;
        }
        return minswap;
    }
};
