#include <bits/stdc++.h>
using namespace std;
                  //optamize approach

vector<int> pairsum(vector<int> arr,int tar){
     vector<int> ans;
    int j=arr.size(),i=0;
    j=j-1;
    while(i<j){
        if(arr[i]+arr[j]<tar){
            i++;
        }
        else if(arr[i]+arr[j]>tar){
            j--;
        }
        else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
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