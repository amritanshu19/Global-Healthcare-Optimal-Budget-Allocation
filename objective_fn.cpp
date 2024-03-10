#include<bits/stdc++.h>
using namespace std;
int w[11][11];

int main(){
    //x11 = p.LpVariable("x11", lowBound = 0)
    freopen("weight_input.txt", "r", stdin);
    freopen("ofn.txt", "w", stdout);

    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            cin>>w[i][j];
            cout<<w[i][j]<<" * x"<<i<<j<<" +";
        
    }
    }
    return 0;
}