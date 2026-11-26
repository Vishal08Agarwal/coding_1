#include <bits/stdc++.h>
using namespace std;
                  //Brute force approach

vector<int> pairsum(vector<int> arr,int tar){
     vector<int> ans;
    int  n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==tar){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}
return ans;
}
                 
int main() {
    int n=4;
    int tar;
    cin>>tar;
    vector<int> arr={2,7,11,15};
    vector<int> ans=pairsum(arr,tar);
        cout<<ans[0]<<" "<<ans[1];
    return 0;
}