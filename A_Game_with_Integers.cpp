#include <bits/stdc++.h>
using namespace std;

void  solution(int rootNumber){

}

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int rootnumber;
        cin>>rootnumber;
        if((rootnumber+1)%3==0 || (rootnumber-1)%3==0){
            cout<<"First"<<endl;

        }else{
            cout<<"Second"<<endl;
        }
    }
}