#include <bits/stdc++.h>
using namespace std;

int main(){
    //input
    long long n;
    cout<<"Enter n:";
    cin>>n;
    vector<long long> arr(n);
    for(long long i = 0;i<n;i++){
        cin>>arr[i];
    }
    //solution
    long long ans = -1;
    long long M = 1e18;
    for(long long i = 2;i<=M;i++){
        for(long long j = 0;j<n;j++){
            if(__gcd(i,arr[j]) != 1){
                ans = -1;
                break;
            }
            else{
                ans = i;
            }
        }
        if(ans != -1){
            break;
        }
    }
    cout<<ans;
    return 0;
}