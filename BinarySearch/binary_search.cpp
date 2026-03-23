#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target)return mid;
        else if(target>arr[mid])low=mid+1;
        else high=mid-1;
    }
    return -1;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int result=binarysearch(arr,n,target);
    cout<<result;
}