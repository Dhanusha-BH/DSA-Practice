#include<bits/stdc++.h>
using namespace std;
vector<int> removeduplicates(vector<int>&arr,int n){
    if (n == 0) return {};
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;


        }
    }
    vector<int> result;
    for(int k=0;k<=i;k++){
        result.push_back(arr[k]);
    }
    return result;


}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   vector<int> unique=removeduplicates(arr,n);
   for (int x : unique) {
        cout << x << " ";
    }
   
}