#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum=0;
    int num[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>num[i][j];/*
            if(i==j){   */
             if(i+j==2){
                sum+=num[i][j];
            }
        }
    }
    cout<<sum;
}