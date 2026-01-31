#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int>&a,vector<int>&b,int n1,int n2){
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n1&&j<n2){
        if(a[i]<b[j]){
            i++;
        }else if(b[j]<a[i]){
            j++;

        }else{
            if(ans.size()==0||ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
            j++;
        }
        
    }
    return ans;
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
    vector<int> result=intersection(a,b,n1,n2);
    for(int x:result){
        cout<<x<<" ";
    }
}