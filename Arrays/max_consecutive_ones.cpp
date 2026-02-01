#include<bits/stdc++.h>
using namespace std;
int maxconsecutiveones(int arr[],int n){
    int maxi=0,cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            maxi=max(maxi,cnt);

        }
        else{
            cnt=0;
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
    int result=maxconsecutiveones(arr,n);
    cout<<result;
}