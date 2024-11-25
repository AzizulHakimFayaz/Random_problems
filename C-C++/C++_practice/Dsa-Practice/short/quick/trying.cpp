#include <bits/stdc++.h>
using namespace std;
vector<int> arr;

int partion(int l,int r){
    int pivot = arr[l];
    int start = l,end = r;
    while(start<end){
        while(arr[start]<=pivot){
            start+=1;

        }
        while(arr[end]>pivot){
            end-=1;
        }
        if(start<=end){
            swap(arr[start],arr[end] );
        }
    }
    swap(arr[l],arr[end]);
    return end;
}

void quick_sort(int l,int r){
    if(l<r){
        int q = partion(l, r);
        quick_sort(q+1,r);
        quick_sort(l,q-1);
    }
}
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    quick_sort(0,n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}