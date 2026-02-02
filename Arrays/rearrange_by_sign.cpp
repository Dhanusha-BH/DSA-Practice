#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangearray(vector<int>&arr,int n){
    vector<int>ans(n,0);
    int posindex=0,negindex=1;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans[posindex]=arr[i];
            posindex+=2;
        }else{
            ans[negindex]=arr[i];
            negindex+=2;
        }
    }
    return ans;

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result=rearrangearray(arr,n);
    for(int x:result){
        cout<<x<<" ";
    }

}