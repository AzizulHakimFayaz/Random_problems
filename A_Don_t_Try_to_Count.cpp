#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n;i++) {
        int a, b;
        cin >> a >> b;
        string d, e;
        cin >> d >> e;
        string current =d;
        int count = 0;
        while (1) {
            if (current.find(e) != string::npos) {
                cout << count << endl;
                break;
            }else if(count>5){
                break;
            }
            current+=current;
            count++;
        }
        if (count>5) {
            cout << -1 << endl;
        }
    }
    return 0;
}
