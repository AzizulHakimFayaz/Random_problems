#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
using namespace std;


void solution(int a){
    vector <int> v;
    for(int i =0;i<a;i++){
        int l;
        cin>>l;
        v.push_back(l);
    }
    int count = 0;
    string store;
    
    if(v[0]!=1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int a;
        cin >>a;
        solution(a);
    }

}