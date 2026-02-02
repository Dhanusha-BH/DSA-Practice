#include<bits/stdc++.h>
using namespace std;
long long maxsubarraysum(int arr[],int n){
    long long sum=0,maxi=LONG_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long result=maxsubarraysum(arr,n);
    cout<<result;
}