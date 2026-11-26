#include <bits/stdc++.h>
using namespace std;
                            //Brute force approach
int main() {
    int n=7;
    int ms=0;
    int arr[7]={3,-4,5,4,-1,7,-8};
    for(int st=0;st<n;st++){
        int cs=0;
      for(int end=st;end<n;end++){
        cs+=arr[end];
        ms=max(ms,cs);

    }
    
}
cout<<ms;
    return 0;
}