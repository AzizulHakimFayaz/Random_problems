#include <bits/stdc++.h>
#include <string>
using namespace std;



int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int k;
        cin>>k;
        int count = 0,answer = 0;
        string input;
        cin>>input;
        for(int j=0;j<k;j++){
            
            
            if(input[j] == '.'){
                count++;
                answer++;
            }else{
                count = 0;
            }
            if(count>=3){
                break;
            }
        }
        if(count==3){
            cout<<2<<endl;
        }else{
            cout<<answer<<endl;
        }
        
    }
}