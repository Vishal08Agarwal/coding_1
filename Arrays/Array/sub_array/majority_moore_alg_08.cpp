#include <bits/stdc++.h>
using namespace std;
                      //moore's approch
int main(){
    vector<int> arr={0,0,1,1,2,2,2,2,2};
    int n=9,m=n/2,c=0,ans=0;
    for(int i=0;i<n;i++){
        if(c==0){
            ans=arr[i];
        }
        if(ans==arr[i]){
            c++;
        }else{
            c--;
        }
    }
    cout<<ans;
    return 0;
}