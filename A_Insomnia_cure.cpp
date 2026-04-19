#include <bits/stdc++.h>
using namespace std;

int main(){
    int f,k,l,m,n;

    cin>>f>>k>>l>>m>>n;

    int count = 0;

    for(int i = 1;i<=n;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%f == 0){
            count++;
        }
     }

    cout<<count;
    
}