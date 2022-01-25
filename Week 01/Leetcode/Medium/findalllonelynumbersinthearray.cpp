class Solution {
public:
    vector<int> findLonely(vector<int>& arr) {
        int mx = *max_element(arr.begin(),arr.end());
        vector<int> res,m(mx+3,0);
        for(int i=0;i<arr.size();i++){
            m[arr[i]+1]++;
        }
        for (int i = 0; i != m.size(); ++i) {
            if(m[i]==1){
                if(m[i-1]==0 && m[i+1]==0){
                    res.push_back(i-1);
                }
            }
        }
        return res;
    }
};
