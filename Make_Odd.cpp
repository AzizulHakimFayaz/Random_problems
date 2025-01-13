#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int> a1;
vector<int> a2;
int score = 0;
int score1 = 0;

void arrInput(string b1,string b2,int a){
    for(int i =0;i<a;i++){
        if(b1[i]  == '1' && b2[i]== '1'){
            score++;
        }
        if(b1[i]!=b2[i]){
            score1++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    for(int  i = 0;i<n;i++){
        int a;
        cin>>a;
        score = 0;
        score1 = 0;
        string a1;
        string a2;
        cin>>a1>>a2;
        arrInput(a1,a2,a);
        if(score%2 != 0){
            cout<<"YES"<<endl;
        }else{
            if(score1>0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
}