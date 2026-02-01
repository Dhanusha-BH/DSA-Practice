#include <bits/stdc++.h>
using namespace std;
string twosum(vector<int>&arr,int n,int target){
    int left=0,right=n-1;
    sort(arr.begin(),arr.end());
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            return "Yes";
        }
        else if(sum<target)left++;
        else right--;
    }
    return "No";

}

int main() {
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int target;
   cin>>target;
    string result=twosum(arr,n,target);
    cout<<result;
   }
