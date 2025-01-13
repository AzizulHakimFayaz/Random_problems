#include <bits/stdc++.h>
using namespace std;
vector<int> arr;

int partition(int l,int r){
    int pivot = arr[l];
    int start = l;
    int end = r;
    while(start<end){
        while(arr[start]<=pivot){
            start+=1;
        }
        while(arr[end]>pivot){
            end-=1;
        }
        if(start<end){
            swap(arr[start],arr[end]);
        }
    

    }
    swap(arr[l],arr[end]);
    return end;
} 
void quickSort(int l,int r){
    if(l<r){
        int q = partition(l,r);
        quickSort(l,q-1);
        quickSort(q+1,r);
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
    quickSort(0,n-1);
    for(int i = n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

}

