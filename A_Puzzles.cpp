#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int students, puzzle_no;
    cin >> students >> puzzle_no;

    vector<int> puzzles(puzzle_no);
    for(int i = 0; i < puzzle_no; i++){
        cin >> puzzles[i];
    }

    if(students > puzzle_no){
        cout << 0;
        return 0;
    }

    sort(puzzles.begin(), puzzles.end());
    int diff = INT_MAX;
    for(int i = 0; i + students - 1 < puzzle_no; i++){
        int temp = puzzles[i + students - 1] - puzzles[i];
        diff = min(diff, temp);
    } 

    cout << diff;
}