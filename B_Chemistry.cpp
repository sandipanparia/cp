#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
      
     int n,k;
     cin>>n>>k;
     string s;
     cin>>s;
     vector<int>freq(26,0);
     for(int i=0;i<n;i++){
        freq[s[i]-'a']++;
     }
     int c=0;
     for(int i=0;i<26;i++){
        if(freq[i]%2==1)c++;
     }
     if(c>k+1)cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
      
    
    }
    return 0;
}
