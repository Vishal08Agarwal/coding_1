#include <bits/stdc++.h>
using namespace std;
                            //Kadane's approch
int main() {
    int n=7;
    int ms=0,cs=0;
    int arr[7]={3,-4,5,4,-1,7,-8};
    for(int i=0;i<n;i++){
        cs+=arr[i];
        ms=max(ms,cs);
        if(cs<0){
         cs=0;
    }
}
cout<<ms;
    return 0;
}