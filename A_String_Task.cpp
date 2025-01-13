#include <bits/stdc++.h>
using namespace std;


int main(){
    vector <char> Words;
    string firestInput;
    cin>>firestInput;
    int count = 0;
    for(int i = 0;i<firestInput.size();i++){
        if(!(firestInput[i]=='A'||firestInput[i]=='a' || firestInput[i]=='E'||firestInput[i]=='e' ||firestInput[i]=='I'||firestInput[i]=='i' ||firestInput[i]=='O'||firestInput[i]=='o' ||firestInput[i]=='U'||firestInput[i]=='u' ||firestInput[i]=='Y'||firestInput[i]=='y' )){

            char temp = firestInput[i];
            if(temp>='A'&&temp<='Z'){
                temp = temp  + ('a' - 'A');
            }
            Words.push_back(temp);
        }


    }

    for(int i = 0;i<Words.size();i ++){
        cout<<'.'<<Words[i];
    }

}