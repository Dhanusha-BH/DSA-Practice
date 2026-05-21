#include<bits/stdc++.h>
using namespace std;
    long long calculateTotalHours(vector<int>& piles, int hourly){
        long long totalhrs = 0;

        for(int i = 0; i < piles.size(); i++){
            totalhrs += (piles[i] + (long long)hourly - 1) / hourly;
        }

        return totalhrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());

        while(low <= high){
            int mid = low + (high - low) / 2;

            long long totalhrs = calculateTotalHours(piles, mid);

            if(totalhrs > (long long)h){ 
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
int main(){
    int n;
    cin>>n;
    vector<int>piles(n);
    for(int i=0;i<n;i++){
        cin>>piles[i];
    }
    int h;
    cin>>h;
    int result=minEatingSpeed(piles,h);
    cout<<result;
}