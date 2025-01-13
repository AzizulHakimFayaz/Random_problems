#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;


void solution(int b){
    vector<int> arr;
    for(int i = 0;i<b;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    int count0 =0,countc = 0,countd=0;
    int c = -1,d = -1;
    for(int i = 0;i<b;i++){
        if(arr[i]!=c && c==-1){
            c=arr[i];
            countc++;
            count0++;
        }else if(arr[i]!=d && d==-1 && c!=arr[i]&&c!=-1){
            d=arr[i];
            count0++;
            countd++;
        }else if(c!=-1 && d!=-1 && arr[i] !=c && arr[i] !=d){
            count0++;
        }else if(arr[i] == c){
            countc++;
        }else if(arr[i] == d){
            countd++;
        }
        


    }
    if(count0>2){
        cout<<"No"<<endl;
    }else if(countc == countd || countc-1 == countd || countc == countd-1){
        cout<<"Yes"<<endl;
    }else if(countc!=0&&countd==0 || countc==0&&countd!=0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        solution(a);
    }
}