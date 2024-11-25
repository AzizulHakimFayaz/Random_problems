#include <bits/stdc++.h>
using namespace std;

void iteRtion(string words){
    int size = words.size();
    if(size<=10){
        cout<<words<<endl;
    }else{
        cout<<words[0]<<size-2<<words[size-1]<<endl;
    }

}

int main(){
    int n;
    string inputwords;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>inputwords;
        iteRtion(inputwords);
    }
}