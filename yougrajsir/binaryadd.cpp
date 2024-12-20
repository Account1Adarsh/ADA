#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int n=8;
    int arr[8];
    int arr2[8];
    cout<<"Yo program is being executed"<<endl;
    for(int i=0;i<8;i++) cin>>arr[i];
    for(int i=0;i<8;i++) cin>>arr2[i];
    
    reverse(arr,arr+n);
    reverse(arr2,arr2+n);
    
    int res[8]={0};
    int c=0;
    for(int i=0;i<8;i++){
        c+=(arr[i]+arr2[i]);
        res[i]=c%2;
        //cout<<res[i]<<" "<<c<<" ";
        c=c>>1;
        //cout<<c<<" "<<endl;
    }
    reverse(res,res+n);
    if(c==1) cout<<1<<" ";
    for(int i=0;i<n;i++) cout<<res[i]<<" ";
    
    return 0;
}
