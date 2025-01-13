#include "bits/stdc++.h"
using namespace std;

void soluTion(int a){
    int previous = 0;
    for(int j = 0;j<a;j++){
        int b;
        cin>>b;
        if(previous<b){
            cout<<1<<" ";
            previous = b;
        }else{
            cout<<0<<" ";
        }
        
    }

}


int main(){
    int n;
    cin>>n;
    for(int i =0 ;i<n;i++){
        int a;
        cin>>a;
        soluTion(a);
        cout<<endl;
    }
    return 0;
}