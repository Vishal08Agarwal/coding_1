#include <bits/stdc++.h>
using namespace std;
                      //Brute force approach
int main(){
    vector<int> arr={0,0,1,1,2,2,2,2,2};
    sort(arr.begin(),nums.end());
    int n=9,m=n/2,c=0,ans=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            c++;
        }else{
            c=1;
            ans=arr[i];
        }
    }
    cout<<ans;
    return 0;
}
