#include <bits/stdc++.h>
#include<vector>
using namespace std;

void solution(){
    int box_number,maximum_reverse;
    cin>>box_number>>maximum_reverse;
    vector<int> boxes(box_number);
    for(int i = 0;i<box_number;i++){
        cin>>boxes[i];
    }
    if(maximum_reverse>=2){
        cout<<"YES"<<endl;
    }else{
        vector<int> temp = boxes;
        sort(temp.begin(),temp.end());
        if(boxes==temp){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }
        
    }
    
}


int main(){
    int take_itaration_input;
    cin>>take_itaration_input;
    for(int i = 0;i<take_itaration_input;i++){
        solution();
    }

    return 0;

}
