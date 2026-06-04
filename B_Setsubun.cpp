#include <bits/stdc++.h>
using namespace std;

int main() {
    
       int n,k;
       cin>>n>>k;
       int y=n;
       int op=0;
       int b=n;

       while(y<k){
        op++;
        b+=1;
        y+=b;
        
        
       }
       cout<<op<<endl;
    
    return 0;
}
