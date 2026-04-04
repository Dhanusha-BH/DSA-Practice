#include<bits/stdc++.h>
using namespace std;
int mySqrt(int x) {
        int low=1,high=x;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long value= 1LL*mid*mid;
            if(value<=x){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return high;
        
    }
int main(){
    int x;
    cin>>x;
    int result=mySqrt(x);
    cout<<result;
}