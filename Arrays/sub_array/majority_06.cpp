#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,2,1,1};
    int n=5;
    int m=floor(n/2);
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
            }
        }
        if(c>=m){
            cout<<arr[i];
        }
    }
    return 0;
}
