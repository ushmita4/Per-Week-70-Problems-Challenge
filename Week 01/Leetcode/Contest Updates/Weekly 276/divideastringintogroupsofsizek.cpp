class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
       vector<string> ans;
        int i=0;
        while(i<s.size())
        {
            string s1="";
            int c=0;
            while(i<s.size() && c++ < k)
            {
                s1=s1+s[i++];
            }
            if(c<k)
            {
                while(c++<k)
                    s1=s1+fill;
            }
            ans.push_back(s1);
        }
        return ans;
    }
};
