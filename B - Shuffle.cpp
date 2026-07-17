#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x,l,r,L,R;
        int m;
        cin>>n>>x>>m;
        L=R=x;
        while(m--){
            cin>>l>>r;
            if(r<L||l>R)continue;
            L=min(L,l);
            R=max(R,r);
        }
        cout<<R-L+1<<"\n";
    }
    return 0;
}
