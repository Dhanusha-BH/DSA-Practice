#include<bits/stdc++.h>
using namespace std;
int cntsubarraywithsumk(int arr[],int k,int n){
    unordered_map<int,int>mpp;
    mpp[0]=1;
    int presum=0,cnt=0;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        int remove =presum-k;
        cnt+=mpp[remove];
        mpp[presum]+=1;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int result=cntsubarraywithsumk(arr,k,n);
    cout<<result;
}