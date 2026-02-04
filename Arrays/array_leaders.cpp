#include<bits/stdc++.h>
using namespace std;
vector<int> arrayleaders(vector<int>&arr, int n){
    int maxi=INT_MIN;
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
            maxi=arr[i];
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>result=arrayleaders(arr,n);
    for(int x:result){
        cout<<x<<" ";
    }
}