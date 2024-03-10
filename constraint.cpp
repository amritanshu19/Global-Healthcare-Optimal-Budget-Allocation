#include<bits/stdc++.h>
using namespace std;
int w[12][12];

int main(){
    //x11 = p.LpVariable("x11", lowBound = 0)
    freopen("constraints.txt", "r", stdin);
    freopen("con1.txt", "w", stdout);

    for(int i=1; i<=11; i++){
        for(int j=1; j<=11; j++){
            double b; cin>>b;
            w[i][j] = round(b);
        
    }
    }
    for(int i=1; i<=10; i++){
        
    for(int k=1; k<=10; k++){
        cout<<"x"<<i<<k<<" + ";
    }
    cout<<"<= "<<w[i][11]<<endl;
    }
    return 0;
}