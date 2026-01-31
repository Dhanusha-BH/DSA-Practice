#include<bits/stdc++.h>
using namespace std;
vector<int> arrunion(vector<int>&a,vector<int>&b,int n1,int n2){
    int i=0,j=0;
    vector<int>unionarr;
    while(i<n1&&j<n2){
        if(a[i]<=b[j]){
            if(unionarr.size()==0||unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionarr.size()==0||unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(unionarr.size()==0||unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
    }
    while(j<n2){
        if(unionarr.size()==0||unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
    }
    return unionarr;
}
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    vector<int>a(n1);
    vector<int>b(n2);
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int j=0;j<n2;j++){
        cin>>b[j];
    }
    vector<int> result=arrunion(a,b,n1,n2);
    for(int x:result){
        cout<<x<<" ";

    }



}