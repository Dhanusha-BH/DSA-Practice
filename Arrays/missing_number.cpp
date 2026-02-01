#include<bits/stdc++.h>
using namespace std;
int missingnumber(int arr[],int n){
    int N=n+1;
    int xor1=0,xor2=0;
    for(int i=0;i<n;i++){
        xor2^=arr[i];
        xor1^=(i+1);
    }
    xor1^=N;
    return xor1^xor2;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=missingnumber(arr,n);
    cout<<result;

}