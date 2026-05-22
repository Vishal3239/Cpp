#include<bits/stdc++.h>
using namespace std;
int febbo(int n){
    // base case
    if(n == 0 )
    return 0;
    if(n == 1)
    return 1;
    // recursive relation
    return febbo(n - 2 ) + febbo(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans = febbo(n);
    cout<<ans<<endl;
    
    return 0;
}