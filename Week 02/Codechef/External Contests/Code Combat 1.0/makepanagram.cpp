#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        cin>>ws;
        string s;
        getline(cin,s);
        int upper[26] = {0};
        int lower[26] = {0};
        
        for(auto i:s)
        {
            if(i!=' ')
            {
                if(i >= 'A' and i<='Z')
                upper[i-'A']++;
                else
                lower[i-'a']++;
            }
        }
        
        string ans;
        for(int i=0;i<26;++i){
            if(upper[i] < 1){
                char c = i + 'A';
                ans += c;
                ans += " ";
            }
        }   
        
        for(int i=0;i<26;++i){
            if(lower[i] < 1){
                char c = i + 'a';
                ans += c;
                ans += " ";
            }
        } 
    if(ans.size() == 0)
    cout<<"YES";
    else{
    cout<<"NO"<<"\n";    
    cout<<ans;
    }
    cout<<"\n";
    }
	return 0;
}
