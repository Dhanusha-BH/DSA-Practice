#include<bits/stdc++.h>
using namespace std;
int secondlargest(vector<int>&arr,int n){
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest&&arr[i]>slargest){
            slargest=arr[i];


        }
    }
    return slargest;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=secondlargest(arr,n);
    cout<<result;
}
