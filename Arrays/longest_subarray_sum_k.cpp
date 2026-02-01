#include<bits/stdc++.h>
using namespace std;
int longestsubarraywithsumk(int arr[],int n,long long k ){
    map<long long,int>presummap;
    long long sum=0;
    int maxlen=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        if(presummap.find(sum)==presummap.end()){
            presummap[sum]=i;
        }
        long long rem=sum-k;
        if(presummap.find(rem)!=presummap.end()){
            int len=i-presummap[rem];
            maxlen=max(maxlen,len);
        }

    }
    return maxlen;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long k;
    cin>>k;
    int result=longestsubarraywithsumk(arr,n,k);
    cout<<result;
}